#include "Compety.hpp"

#include <vector>
#include <iostream>

struct Contestant {
    //to-do:
    // ������� ���� ��� ��������� ����� ����� ��� ������� ����� ��������� ��������
    //
};

Contestant* Create(int id, std::string name, std::array<double, 3> results)
{
    //to-do:
    // ������� ����� ������ ��������� �� ���������  ���������� ������
    //
    return nullptr;
}

void Delete(Contestant* obj)
{
    //to-do:
    // ���������� ���������� ������ ���������
    //
}

void Update(Contestant* obj, int newId)
{
    //to-do:
    // �������� ������ �� �������������� � �������
    //
}

void Update(Contestant* obj, std::string newName)
{
    //to-do:
    // �������� ������ �� ����� � �������
    //
}

void Update(Contestant* obj, int stage, double result)
{
    //to-do:
    // �������� ������ �� ���������� ���������� ������� � �������
    //
}

void AddStage(Contestant* obj, double result)
{
    //to-do:
    // �������� �������� ����� �������
    // �������� ����� ��������� ��������
    //
}

std::string Name(Contestant* obj)
{
    //to-do:
    // ������� ����������� ���� ��� ���������� � �������
    //
    return std::string();
}

int Id(Contestant* obj)
{
    //to-do:
    // �������� ����������� ���� �������� ��������������
    //
    return 0;
}

double Result(Contestant* obj)
{
    //to-do:
    // �������� ����������� ���� ������ ��������� �� ���� �������
    //
    return 0.0;
}

double Average(Contestant* obj)
{
    //to-do:
    // �������� ������������ ���������������������� ���� �� ������� �������
    //
    return 0.0;
}

double Worst(Contestant* obj)
{
    //to-do:
    // �������� ������������ ��������� ������ �������
    //
    return 0.0;
}

void Print(Contestant* obj)
{
    //to-do:
    // ������� �� ����� �������� ���������
    //
}

//-----------------------------------------------------------------------------

namespace {
    //to-do:
    // ������� ����� �� ���������� ������ ����� ������� ����� �������� 
    // ��������� �������
    //
}

void Init()
{
    //to-do:
    // ������������� ����������� �������
    //
}

void Add(Contestant* obj)
{
    //to-do:
    // �������� ������ ��������� � ������ ����������
    //
}

Contestant* Search(int id)
{
    //to-do:
    // ����� � ��������� ��������� � ��������� id � �������� ������������
    //
    return nullptr;
}

Contestant* Search(std::string newName)
{
    //to-do:
    // ����� �������� � ��������� ������ � �������� ������������
    //
    return nullptr;
}

std::array<const Contestant*, 3> BestRaw()
{
    //to-do:
    // 
    //
    return std::array<const Contestant*, 3>();
}

std::array<const Contestant*, 3> BestPerformance()
{
    //to-do:
    // �������� ������������ 3� ������ �� �� �������� ����������
    //
    return std::array<const Contestant*, 3>();
}

void PrintRaw()
{
    //to-do:
    // ������� ���� ��������� �������� �� ����� ������������ ��������� �������
    // ��� ���� � ��� ����������� ����������
    //
}

void PrintByScore()
{
    //to-do:
    // ������� ���� ��������� �������� � �� ������������ �����������
    // � ������� �������� ����������
    // 
}

void PrintByPerformance()
{
    //to-do:
    // ������� ���� ��������� �������� � �� ������� �����������
    // � ������� �������� ����������
}

void Terminate()
{
    //to-do:
    // ���������� ������ ����������� �������
    //
}
