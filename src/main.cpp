//
// Created by liuzk on 2025/2/27
// 该文件为主文件，用于处理命令行参数，并调用其他文件进行操作

#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <cstring>

#include <TaskManager.h>

int main(int argc, char* argv[]) {
    if (argc == 1) {
        showHelp();
        return 0;
    }

    // char** -> vector<string>，方便操作
    std::vector<std::string> args;
    for (int i = 0; i < argc; ++i) {
        args.emplace_back(argv[i]);
    }

    std::string action = args[1]; // 记录执行哪项功能

    // 使用 map 来关联命令和处理函数
    std::map<std::string, void(*)(std::vector<std::string>)> funcMap = {
            {"--help", [](std::vector<std::string>) { showHelp(); }},
            {"-h", [](std::vector<std::string>) { showHelp(); }},
            {"--version", [](std::vector<std::string>) { showVersion(); }},
            {"-v", [](std::vector<std::string>) { showVersion(); }},
            {"add", handleAdd},
            {"update", handleUpdate},
            {"delete", handleDelete},
            {"list", handleList},
            {"mark-in-progress", handleMarkInProgress},
            {"mark-done", handleMarkDone}
    };

    // 查找并执行对应的功能处理函数
    auto it = funcMap.find(action);
    if (it != funcMap.end()) {
        it->second(args);
    } else {
        std::cerr << "Error: Unknown action: " << action << std::endl;
    }


    return 0;
}
