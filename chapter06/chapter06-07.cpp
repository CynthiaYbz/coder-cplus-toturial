//
// 读书： C++ Primer Plus（第6版）中文版
// 编程练习：6.11.7
//
// 参考资料列表：
//
#include <iostream>
#include <string>

using namespace std;

int main() {
    int vowel = 0;
    int consonant = 0;
    string words;
    while (1) {
        cout << "Enter words :";
        cin >> words;
        if (words != "q") {
            if (words[0] == 'a' || words[0] == 'e' || words[0] == 'i' || words[0] == 'o' || words[0] == 'u') {
                vowel += 1;
            } else {
                consonant += 1;
            }
        } else {
            break;
        }
    }
    cout << vowel << " words beginning with vowels" << endl;
    cout << consonant << " words beginning with consonant" << endl;
    return 0;
}