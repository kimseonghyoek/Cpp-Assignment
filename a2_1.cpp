/* AI소프트웨어학과 2024591005 김성혁 */
#include <iostream>
#include <string>
using namespace std;

int main(void) {
    string user1_input;
    string user2_input;
    cout << "가위 바위 보 게임을 합니다. 가위 바위 중에서 입력하세요." << endl;
    cout << "사용자1>> ";
    cin >> user1_input;
    cout << "사용자2>> ";
    cin >> user2_input;

    if (user1_input == "가위" && user2_input == "가위" || user1_input == "바위" && user2_input == "바위" || user1_input == "보" && user2_input == "보") {
        cout << "비겼습니다." << endl;
    } else if (user1_input == "가위" && user2_input == "보" || user1_input == "바위" || user2_input == "가위" || user1_input == "보" && user2_input == "바위") {
        cout << "사용자1이 이겼습니다." << endl;
    } else if (user2_input == "가위" && user1_input == "보" || user2_input == "바위" || user1_input == "가위" || user2_input == "보" && user1_input == "바위") {
        cout << "사용자2가 이겼습니다." << endl;ㄴㄴ
    } else {
        cout << "잘못된 입력입니다." << endl;
    }

    return 0;
}
