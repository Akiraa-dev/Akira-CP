#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>

#include <conio.h> // Sử dụng conio.h trên Windows
#else
#include <ncurses.h> // Sử dụng ncurses trên Linux

using namespace std;
// Hàm tạo số ngẫu nhiên từ một phạm vi cụ thể
int getRandomNumber(int min, int max) {
    return min + std::rand() % (max - min + 1);
}

// Hàm tạo dãy số ngẫu nhiên gồm tất cả các ký tự
std::string generateRandomString(int length) {
    std::string allCharacters = "0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int totalCharacters = allCharacters.length();

    std::string result;
    for (int i = 0; i < length; ++i) {
        int randomIndex = getRandomNumber(0, totalCharacters - 1);
        result += allCharacters[randomIndex];
    }

    return result;
}

void temp() {
    // Thiết lập seed cho hàm rand() dựa vào thời gian hiện tại để có số ngẫu nhiên khác nhau mỗi lần chạy chương trình
    std::srand(static_cast<unsigned int>(std::time(nullptr)));

    int length = 50;
    std::string randomString;


    std::cout << "Nhấn phím bất kỳ để tạo dãy số ngẫu nhiên..." << std::endl;
    _getch(); // Sử dụng _getch trên Windows để nhận phím nhấn mà không cần nhấn Enter

    std::cout << "Nhấn phím bất kỳ và nhấn Enter để tạo dãy số ngẫu nhiên..." << std::endl;
    getch(); // Sử dụng getch trên Linux để nhận phím nhấn và nhấn Enter để hoàn tất nhập liệu


    randomString = generateRandomString(length);
    std::cout << "Dãy số ngẫu nhiên: " << randomString << std::endl;

}
int main() {
	std::cout << "Nhap so lan thu nghiem: ";
	int n; std::cin >> n;
	while(n--) {
		temp();
	}
}
