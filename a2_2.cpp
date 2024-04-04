/* AI소프트웨어학과 2024591005 김성혁 */
#include <iostream>
using namespace std;

int main(void) {
    float array[5];
    int arraySize = sizeof(array)/sizeof(float);

    cout << "5개의 실수를 입력하세요." << endl;
    for(int i = 0; i < arraySize; i++) {
        cin >> array[i];
    }

    float maxNum=array[0];
    for(int i = 0; i < arraySize; i++) {
        if(array[i] > maxNum) {
            maxNum = array[i];
        }
    }

    cout << maxNum << endl;
    return 0;
}