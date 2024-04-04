/* AI소프트웨어학과 2024591005 김성혁 */
#include <iostream>
#include <cstring>
using namespace std;

int main(void) {
    char message[10];
    while (true) {
        cout << "종료하고 싶으면 yes를 입력하세요.>> ";
        cin.getline(message, 10);
        if(strcmp(message, "yes") == 0) {
            cout << "종료합니다.." << endl;
            break;
        } else {
            cout << "";
        }
    }

    return 0;
}