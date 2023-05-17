//Task:
// We have the array of elements temps[0.5, 0.8, 2.0, 1.0, 0.3]
// temps greater than 0.5: x2
// temps smaller than 0.5: /2


#include <iostream>

using namespace std;

int main() {
  const int elementsInArr = 5;
  float referencePoint = 0.5;
	float temps[elementsInArr] = {0.5, 0.8, 2.0, 1.0, 0.3};
  for(int i = 0; i < elementsInArray; i++) {
  		if(temps[i] > referencePoint) {
      	temps[i] = temps[i] * 2; 
      }
      else if(temps[i] < referencePoint) {
      	temps[i] = temps[i] / 2; 
      }
      cout << " " << temps[i];
  }
	return 0;
}

