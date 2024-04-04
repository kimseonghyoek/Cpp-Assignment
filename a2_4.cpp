/* AI소프트웨어학과 2024591005 김성혁 */
#include <iostream>
using namespace std;

int main(void) {
    int menu;
    int person;
    cout << "*****한국공학반점에 오신 것을 환영합니다.*****" << endl;
    while (true) {
        cout << "짬뽕:1, 짜장:2, 군만두:3, 종료:4 >> ";
        cin >> menu;
        switch (menu) {
            case 1:
                cout << "몇 인분? ";
                cin >> person ;
                cout << "짬뽕 " << person << "인분 나왔습니다." << endl;
                break;
            case 2:
                cout << "몇 인분? ";
                cin >> person;
                cout << "짜장 " << person << "인분 나왔습니다." << endl;
                break;
            case 3:
                cout << "몇 인분? ";
                cin >> person;
                cout << "군만두 " << person << "인분 나왔습니다." << endl;
                break;
            case 4:
                cout << 4;
                cout << "금일 영업은 끝났습니다." << endl;
                return 0;
            default:
                cout << "다시 주문 부탁드립니다." << endl;
                break;
        }
    }
}