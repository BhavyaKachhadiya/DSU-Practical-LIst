#include <iostream>

using namespace std;

bool isVowel(char ch) {
  char vowels[] = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
  int len = sizeof(vowels) / sizeof(char);

  for (int i = 0; i < len; i++) {
    if (ch == vowels[i]) {
      return true;
    }
  }

  return false;
}

int main() {
  char ch;

  cout << "Enter a character: ";
  cin >> ch;

  if (isVowel(ch)) {
    cout << ch << " is a vowel.";
  } else {
    cout << ch << " is a consonant.";
  }
cout << "This code was created by Bhavya Kachhadiya." << endl;
  cout << "Erollment number: 220130318020" << endl;
  return 0;
}
