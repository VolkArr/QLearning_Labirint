#include <iostream>
#include <locale>
#include <vector>
#include <time.h>


const double learnSpeed{ 0.6 };

int max(std::vector<int>& tmpVector);
void showMe(std::vector<std::vector<int>>& tmpVector);

int main() {

	srand(time(NULL));


	std::vector<std::vector<int>> scales{
		{-1,0,-1,0,-1,-1,-1},
		{0,-1,0,-1,-1,-1,-1},
		{-1,0,-1,-1,0,-1,-1},
		{0,-1,-1,-1,0,-1,-1},
		{-1,-1,0,0,-1,0,100},
		{-1,-1,-1,-1,0,-1,100},
		{-1,-1,-1,-1,0,0,100}
	};

	std::cout << "scales: \n";
	showMe(scales);

	int generation = 1;
	int currentIndex = 0;
	std::cout << "--------\n";
	std::cout << " generation " << generation << " currentIndex: " << currentIndex  << std::endl;
	std::cout << "--------\n";
	
	int nextScalesSize;
	std::vector<int> sames;
	for (size_t i = currentIndex; i < scales.size()-1;){
		int maxSc = max(scales[i]);
		for (size_t j = 0; j < scales[i].size(); j++) {
			if (scales[i][j] == maxSc) sames.push_back(j);
		}
		int nextIndex = sames[rand() % sames.size()];
		nextScalesSize = scales[i][nextIndex] + (learnSpeed * max(scales[nextIndex]));
		std::cout << " currentIndex: " << currentIndex << " nextIndex: " << nextIndex << " scales[i][nextIndex]: " << scales[i][nextIndex] << " nextScalesSize: " << nextScalesSize << std::endl;
		scales[i][nextIndex] = nextScalesSize;
		currentIndex = nextIndex;
		i = currentIndex;
		sames.clear();
	}
	generation++;
	currentIndex = 0;
	std::cout << "--------\n";
	std::cout << " generation " << generation << " currentIndex: " << currentIndex  << std::endl;
	std::cout << "--------\n";
	
	for (size_t i = currentIndex; i < scales.size() - 1;) {
		int maxSc = max(scales[i]);
		for (size_t j = 0; j < scales[i].size(); j++) {
			if (scales[i][j] == maxSc) sames.push_back(j);
		}
		int nextIndex = sames[rand() % sames.size()];
		nextScalesSize = scales[i][nextIndex] + (learnSpeed * max(scales[nextIndex]));
		std::cout << " currentIndex: " << currentIndex << " nextIndex: " << nextIndex << " scales[i][nextIndex]: " << scales[i][nextIndex] << " nextScalesSize: " << nextScalesSize << std::endl;
		scales[i][nextIndex] = nextScalesSize;
		currentIndex = nextIndex;
		i = currentIndex;
		sames.clear();
	}
	generation++;
	currentIndex = 0;
	std::cout << "--------\n";
	std::cout << " generation " << generation << " currentIndex: " << currentIndex  << std::endl;
	std::cout << "--------\n";
	
	for (size_t i = currentIndex; i < scales.size() - 1;) {
		int maxSc = max(scales[i]);
		for (size_t j = 0; j < scales[i].size(); j++) {
			if (scales[i][j] == maxSc) sames.push_back(j);
		}
		int nextIndex = sames[rand() % sames.size()];
		nextScalesSize = scales[i][nextIndex] + (learnSpeed * max(scales[nextIndex]));
		std::cout << " currentIndex: " << currentIndex << " nextIndex: " << nextIndex << " scales[i][nextIndex]: " << scales[i][nextIndex] << " nextScalesSize: " << nextScalesSize << std::endl;
		currentIndex = nextIndex;
		i = currentIndex;
		sames.clear();
	}
	generation++;
	currentIndex = 0;
	std::cout << "--------\n";
	std::cout << " generation " << generation << " currentIndex: " << currentIndex  << std::endl;
	std::cout << "--------\n";
	
	for (size_t i = currentIndex; i < scales.size() - 1;) {
		int maxSc = max(scales[i]);
		for (size_t j = 0; j < scales[i].size(); j++) {
			if (scales[i][j] == maxSc) sames.push_back(j);
		}
		int nextIndex = sames[rand() % sames.size()];
		nextScalesSize = scales[i][nextIndex] + (learnSpeed * max(scales[nextIndex]));
		std::cout << " currentIndex: " << currentIndex << " nextIndex: " << nextIndex << " scales[i][nextIndex]: " << scales[i][nextIndex] << " nextScalesSize: " << nextScalesSize << std::endl;
		scales[i][nextIndex] = nextScalesSize;
		currentIndex = nextIndex;
		i = currentIndex;
		sames.clear();
	}
	generation++;
	currentIndex = 2;
	std::cout << "--------\n";
	std::cout << " generation " << generation << " currentIndex: " << currentIndex  << std::endl;
	std::cout << "--------\n";

	for (size_t i = currentIndex; i < scales.size() - 1;) {
		int maxSc = max(scales[i]);
		for (size_t j = 0; j < scales[i].size(); j++) {
			if (scales[i][j] == maxSc) sames.push_back(j);
		}
		int nextIndex = sames[rand() % sames.size()];
		nextScalesSize = scales[i][nextIndex] + (learnSpeed * max(scales[nextIndex]));
		std::cout << " currentIndex: " << currentIndex << " nextIndex: " << nextIndex << " scales[i][nextIndex]: " << scales[i][nextIndex] << " nextScalesSize: " << nextScalesSize << std::endl;
		scales[i][nextIndex] = nextScalesSize;
		currentIndex = nextIndex;
		i = currentIndex;
		sames.clear();
	}
	generation++;
	currentIndex = 3;
	std::cout << "--------\n";
	std::cout << " generation " << generation << " currentIndex: " << currentIndex  << std::endl;
	std::cout << "--------\n";

	for (size_t i = currentIndex; i < scales.size() - 1;) {
		int maxSc = max(scales[i]);
		for (size_t j = 0; j < scales[i].size(); j++) {
			if (scales[i][j] == maxSc) sames.push_back(j);
		}
		int nextIndex = sames[rand() % sames.size()];
		nextScalesSize = scales[i][nextIndex] + (learnSpeed * max(scales[nextIndex]));
		std::cout << " currentIndex: " << currentIndex << " nextIndex: " << nextIndex << " scales[i][nextIndex]: " << scales[i][nextIndex] << " nextScalesSize: " << nextScalesSize << std::endl;
		scales[i][nextIndex] = nextScalesSize;
		currentIndex = nextIndex;
		i = currentIndex;
		sames.clear();
	}
	generation++;
	currentIndex = 0;
	std::cout << "--------\n";
	std::cout << " generation " << generation << " currentIndex: " << currentIndex  << std::endl;
	std::cout << "--------\n";

	for (size_t i = currentIndex; i < scales.size() - 1;) {
		int maxSc = max(scales[i]);
		for (size_t j = 0; j < scales[i].size(); j++) {
			if (scales[i][j] == maxSc) sames.push_back(j);
		}
		int nextIndex = sames[rand() % sames.size()];
		nextScalesSize = scales[i][nextIndex] + (learnSpeed * max(scales[nextIndex]));
		std::cout << " currentIndex: " << currentIndex << " nextIndex: " << nextIndex << " scales[i][nextIndex]: " << scales[i][nextIndex] << " nextScalesSize: " << nextScalesSize << std::endl;
		scales[i][nextIndex] = nextScalesSize;
		currentIndex = nextIndex;
		i = currentIndex;
		sames.clear();
	}
	std::cout << "generation:  " << generation << "\n";
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
