#pragma once

#include <vector>

class TaskManager
{
public:
    typedef bool (*FpTask)();

private:
    typedef std::vector<FpTask> TaskArray;
    typedef TaskArray::size_type SizeType;

public:
    void Excute();
    void Register(FpTask task);

private:
    void Unregister(SizeType id);

private:
    TaskArray m_task;
};
