//
// Created by liuzk on 2025/2/27
//
// 该文件为任务管理器，用于管理任务的增删改查
#include "TaskManager.h"
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