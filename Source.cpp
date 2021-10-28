#include <iostream>
#include <locale>
#include <vector>
#include <time.h>


const double learnSpeed{ 0.6 };

int max(std::vector<int>& tmpVector); // Нам не нужно искать максимум по всему массиву весов, ищем максимум только в весах одной вершины
void showMe(std::vector<std::vector<int>>& tmpVector);

int main() {
	setlocale(LC_ALL, "rus"); // Я бы не стал использовать эту функцию, но для демонстрации это проще чем перенастроить консоль
	srand(time(NULL)); // Так же, я бы предпочел использовать свой генератор ПСЧ, но это излишнее


	std::cout << "Так как цель данной лабораторной работы - демонстрация алгоритма обучения QLearing, то я упрощу мат. модель. В оригинальной задаче у нас есть 25 состояний" << std::endl;
	system("pause");

	std::cout << "В самом идеальном варианте - мы реализуем отдельный класс хранилище графов и сам класс вершини графа. Класс хранилище будет иметь массив массивов типа указатель на обьект графа." << std::endl;
	std::cout << "Но в данной реализации я представлю граф как таблицу смежности и таблицу весов. Мы будем проходиться по этим двумерным массивам и решать как двигаться дальше. В итоге выводить где мы" << std::endl;
	system("pause");

	std::vector<std::vector<int>> adjMat{ // Немного хардкодим
		{0,1,0,1,0,0,0},
		{1,0,1,0,0,0,0},
		{0,1,0,0,1,0,0},
		{1,0,0,0,1,0,0},
		{0,0,1,1,0,1,1},
		{0,0,0,0,1,0,1},
		{0,0,0,0,1,1,1}
	};
	std::vector<std::vector<int>> scales{
		{-1,0,-1,0,-1,-1,-1},
		{0,-1,0,-1,-1,-1,-1},
		{-1,0,-1,-1,0,-1,-1},
		{0,-1,-1,-1,0,-1,-1},
		{-1,-1,0,0,-1,0,100},
		{-1,-1,-1,-1,0,-1,100},
		{-1,-1,-1,-1,0,0,100}
	};

	std::cout << "Весы до запуска программы: \n";
	showMe(scales);

	int generation = 1;
	int currentIndex = 0;
	std::cout << "--------\n";
	std::cout << "Запускаем наше " << generation << " поколение! Начиная с " << currentIndex << " позиции" << std::endl;
	std::cout << "--------\n";
	
	int nextScalesSize; // Обьявляем место для следующих весов
	std::vector<int> sames;
	for (size_t i = currentIndex; i < scales.size()-1;){
		int maxSc = max(scales[i]);
		for (size_t j = 0; j < scales[i].size(); j++) {
			if (scales[i][j] == maxSc) sames.push_back(j);
		}
		int nextIndex = sames[rand() % sames.size()];
		nextScalesSize = scales[i][nextIndex] + (learnSpeed * max(scales[nextIndex]));
		std::cout << "Текущяя вершина: " << currentIndex << " Следующая вершина: " << nextIndex << " Текущее значение весов: " << scales[i][nextIndex] << " Следующее значение весов: " << nextScalesSize << std::endl;
		scales[i][nextIndex] = nextScalesSize;
		currentIndex = nextIndex;
		i = currentIndex;
		sames.clear();
	}
	generation++;
	currentIndex = 0;
	std::cout << "--------\n";
	std::cout << "Запускаем наше " << generation << " поколение! Начиная с " << currentIndex << " позиции" << std::endl;
	std::cout << "--------\n";
	
	for (size_t i = currentIndex; i < scales.size() - 1;) {
		int maxSc = max(scales[i]);
		for (size_t j = 0; j < scales[i].size(); j++) {
			if (scales[i][j] == maxSc) sames.push_back(j);
		}
		int nextIndex = sames[rand() % sames.size()];
		nextScalesSize = scales[i][nextIndex] + (learnSpeed * max(scales[nextIndex]));
		std::cout << "Текущяя вершина: " << currentIndex << " Следующая вершина: " << nextIndex << " Текущее значение весов: " << scales[i][nextIndex] << " Следующее значение весов: " << nextScalesSize << std::endl;
		scales[i][nextIndex] = nextScalesSize;
		currentIndex = nextIndex;
		i = currentIndex;
		sames.clear();
	}
	generation++;
	currentIndex = 0;
	std::cout << "--------\n";
	std::cout << "Запускаем наше " << generation << " поколение! Начиная с " << currentIndex << " позиции" << std::endl;
	std::cout << "--------\n";
	
	for (size_t i = currentIndex; i < scales.size() - 1;) {
		int maxSc = max(scales[i]);
		for (size_t j = 0; j < scales[i].size(); j++) {
			if (scales[i][j] == maxSc) sames.push_back(j);
		}
		int nextIndex = sames[rand() % sames.size()];
		nextScalesSize = scales[i][nextIndex] + (learnSpeed * max(scales[nextIndex]));
		std::cout << "Текущяя вершина: " << currentIndex << " Следующая вершина: " << nextIndex << " Текущее значение весов: " << scales[i][nextIndex] << " Следующее значение весов: " << nextScalesSize << std::endl;
		scales[i][nextIndex] = nextScalesSize;
		currentIndex = nextIndex;
		i = currentIndex;
		sames.clear();
	}
	generation++;
	currentIndex = 0;
	std::cout << "--------\n";
	std::cout << "Запускаем наше " << generation << " поколение! Начиная с " << currentIndex << " позиции" << std::endl;
	std::cout << "--------\n";
	
	for (size_t i = currentIndex; i < scales.size() - 1;) {
		int maxSc = max(scales[i]);
		for (size_t j = 0; j < scales[i].size(); j++) {
			if (scales[i][j] == maxSc) sames.push_back(j);
		}
		int nextIndex = sames[rand() % sames.size()];
		nextScalesSize = scales[i][nextIndex] + (learnSpeed * max(scales[nextIndex]));
		std::cout << "Текущяя вершина: " << currentIndex << " Следующая вершина: " << nextIndex << " Текущее значение весов: " << scales[i][nextIndex] << " Следующее значение весов: " << nextScalesSize << std::endl;
		scales[i][nextIndex] = nextScalesSize;
		currentIndex = nextIndex;
		i = currentIndex;
		sames.clear();
	}
	generation++;
	currentIndex = 2;
	std::cout << "--------\n";
	std::cout << "Запускаем наше " << generation << " поколение! Начиная с " << currentIndex << " позиции" << std::endl;
	std::cout << "--------\n";

	for (size_t i = currentIndex; i < scales.size() - 1;) {
		int maxSc = max(scales[i]);
		for (size_t j = 0; j < scales[i].size(); j++) {
			if (scales[i][j] == maxSc) sames.push_back(j);
		}
		int nextIndex = sames[rand() % sames.size()];
		nextScalesSize = scales[i][nextIndex] + (learnSpeed * max(scales[nextIndex]));
		std::cout << "Текущяя вершина: " << currentIndex << " Следующая вершина: " << nextIndex << " Текущее значение весов: " << scales[i][nextIndex] << " Следующее значение весов: " << nextScalesSize << std::endl;
		scales[i][nextIndex] = nextScalesSize;
		currentIndex = nextIndex;
		i = currentIndex;
		sames.clear();
	}
	generation++;
	currentIndex = 3;
	std::cout << "--------\n";
	std::cout << "Запускаем наше " << generation << " поколение! Начиная с " << currentIndex << " позиции" << std::endl;
	std::cout << "--------\n";

	for (size_t i = currentIndex; i < scales.size() - 1;) {
		int maxSc = max(scales[i]);
		for (size_t j = 0; j < scales[i].size(); j++) {
			if (scales[i][j] == maxSc) sames.push_back(j);
		}
		int nextIndex = sames[rand() % sames.size()];
		nextScalesSize = scales[i][nextIndex] + (learnSpeed * max(scales[nextIndex]));
		std::cout << "Текущяя вершина: " << currentIndex << " Следующая вершина: " << nextIndex << " Текущее значение весов: " << scales[i][nextIndex] << " Следующее значение весов: " << nextScalesSize << std::endl;
		scales[i][nextIndex] = nextScalesSize;
		currentIndex = nextIndex;
		i = currentIndex;
		sames.clear();
	}
	generation++;
	currentIndex = 0;
	std::cout << "--------\n";
	std::cout << "Запускаем наше " << generation << " поколение! Начиная с " << currentIndex << " позиции" << std::endl;
	std::cout << "--------\n";

	for (size_t i = currentIndex; i < scales.size() - 1;) {
		int maxSc = max(scales[i]);
		for (size_t j = 0; j < scales[i].size(); j++) {
			if (scales[i][j] == maxSc) sames.push_back(j);
		}
		int nextIndex = sames[rand() % sames.size()];
		nextScalesSize = scales[i][nextIndex] + (learnSpeed * max(scales[nextIndex]));
		std::cout << "Текущяя вершина: " << currentIndex << " Следующая вершина: " << nextIndex << " Текущее значение весов: " << scales[i][nextIndex] << " Следующее значение весов: " << nextScalesSize << std::endl;
		scales[i][nextIndex] = nextScalesSize;
		currentIndex = nextIndex;
		i = currentIndex;
		sames.clear();
	}
	std::cout << "Весы после " << generation << " поколений\n";
	showMe(scales);
	return -1;
}

int max(std::vector<int>& tmpVector) 
{
	int max = tmpVector[0];
	for (std::vector<int>::iterator it = tmpVector.begin(); it < tmpVector.end(); it++){
		if (*it == -1) continue;
		if (*it > max) max = *it;
	}
	return max;
}

void showMe(std::vector<std::vector<int>>& tmpVector){
	for (std::vector<std::vector<int>>::iterator itF = tmpVector.begin(); itF < tmpVector.end(); itF++) {
		for (std::vector<int>::iterator itS = itF->begin(); itS < itF->end(); itS++) {
			std::cout << *itS << " ";
		}
		std::cout << "\n";
	}
}
