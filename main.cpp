#include <iostream>
using namespace std;

void khoi_dong_logic(){
    cout << "thu\n";
}
void khoi_dong_ui();
void khoi_dong_data();
void khoi_dong_tester(){
    std::cout << "tunkit\n" << std::endl;
}

int main() {
    cout << "--- HE THONG TETRIS KHOI DONG ---" << endl;
    khoi_dong_tester();
    khoi_dong_ui();
    khoi_dong_logic();

    cout << "--- HOAN TAT ---" << endl;
    return 0;
}
void khoi_dong_ui(){
    cout << "tunkit\n";
}