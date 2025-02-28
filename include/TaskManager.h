//
// Created by ASUS on 2025/2/28.
//

#ifndef TASKTRACKERCLI_TASKMANAGER_H
#define TASKTRACKERCLI_TASKMANAGER_H
#include <iostream>
#include <vector>
#include <string>

// 显示版本信息
void showVersion();

// 显示帮助信息
void showHelp();

// 处理添加任务功能
void handleAdd(std::vector<std::string> args);

// 处理更新任务功能
void handleUpdate(std::vector<std::string> args);

// 处理删除任务功能
void handleDelete(std::vector<std::string> args);

// 列出任务功能
void handleList(std::vector<std::string> args);

// 列出任务为进行中功能
void handleListToDo(std::vector<std::string> args);

// 列出任务为进行中功能
void handleListDoing(std::vector<std::string> args);

void handleListDone(std::vector<std::string> args);

// 将指定任务标记为进行中
void handleMarkInProgress(std::vector<std::string> args);

// 将指定任务标记为已完成
void handleMarkDone(std::vector<std::string> args);

#endif //TASKTRACKERCLI_TASKMANAGER_H
