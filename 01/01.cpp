// Домашнее задание к занятию «STL. Часть 2»
// Задача 1. Уникальный вектор

#include <iostream>
#include <vector>
#include <algorithm>

template<class T>
void PrintV(const std::vector<T>& v0)
{
	for (auto& i : v0)
	{
		std::cout << i << '\t';
	}
	std::cout << std::endl;
}

template<class T>
void RemovingDuplicateValues(std::vector<T>& v0)
{
	std::sort(v0.begin(), v0.end());
	auto last = std::unique(v0.begin(), v0.end());
	v0.erase(last, v0.end());

}

int main()
{
	std::cout << "Vector int" << std::endl;
    std::vector<int> v1{ 1, 1, 2, 5, 6, 1, 2, 4 };
	PrintV(v1);
	std::cout << "RemovingDuplicateValues Vector int" << std::endl;
	RemovingDuplicateValues(v1);
	PrintV(v1);
	std::cout << std::endl;

	
	std::cout << "Vector double" << std::endl;
	std::vector<double> v2{ 1, 1, 2, 5, 6, 1, 2, 4 };
	for (auto& i : v2)
	{
		i = i + 0.01;
	}
	PrintV(v2);
	std::cout << "RemovingDuplicateValues Vector double" << std::endl;
	RemovingDuplicateValues(v2);
	PrintV(v2);
	std::cout << std::endl;


	std::cout << "Vector std::string" << std::endl;
	std::vector<std::string> v3{ "1", "1", "2", "5", "6", "1", "2", "4" };
	PrintV(v3);
	std::cout << "RemovingDuplicateValues Vector std::string" << std::endl;
	RemovingDuplicateValues(v3);
	PrintV(v3);
	std::cout << std::endl;


	std::cout << "Vector char" << std::endl;
	std::vector<char> v4{ '1', '1', '2', '5', '6', '1', '2', '4' };
	PrintV(v4);
	std::cout << "RemovingDuplicateValues Vector char" << std::endl;
	RemovingDuplicateValues(v4);
	PrintV(v4);
	std::cout << std::endl;


    std::cout << "\n\nHello World!\n";
}
