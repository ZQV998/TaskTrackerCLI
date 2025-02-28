//
// Created by liuzk on 2025/2/27
// 该文件为主文件，用于处理命令行参数，并调用其他文件进行操作

#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <cstring>

#include "info.h"


void showVersion() {
    std::cout << "Version : " << VERSION << std::endl;
}

void showHelp() {
    std::cout << "Usage: " << "task-cli " <<  "[options]" << std::endl;
    std::cout << "  --help      Show help manual" << std::endl;
    std::cout << "  --version   Show version" << std::endl;
    std::cout << "  add         Add a new task" << std::endl;
    std::cout << "  update      Update a task" << std::endl;
    std::cout << "  delete      Delete a task" << std::endl;
    std::cout << "  list        List all tasks" << std::endl;
    std::cout << "  list done   List tasks that have been done" << std::endl;
    std::cout << "  list todo   List tasks that have not started" << std::endl;
    std::cout << "  list doing  List tasks that are in progress" << std::endl;
}

void handleAdd(std::vector<std::string> args) {
    // todo
}

void handleUpdate(std::vector<std::string> args) {
    // todo
}

void handleDelete(std::vector<std::string> args) {
    // todo
}

void handleList(std::vector<std::string> args) {
    if (args.size() < 2) {
        // todo list all
    } else if (args[1] == "done") {
        // todo list done
    } else if (args[1] == "todo") {
        // todo list todo
    } else if (args[1] == "doing") {
        // todo list doing
    } else {
        std::cerr << "Error: Unknown subcommand for 'list': " << args[1] << std::endl;
    }
}

void handleListToDo(std::vector<std::string> args) {
    // todo
}

void handleListDoing(std::vector<std::string> args) {
    // todo
}

void handleListDone(std::vector<std::string> args) {
    // todo
}

void handleMarkInProgress(std::vector<std::string> args) {
    // todo
}

void handleMarkDone(std::vector<std::string> args) {
    // todo
}


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
