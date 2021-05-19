#include <string>

#include <iostream>

#include <ctime>

#include <cstdlib>

using namespace std;

int main()

{

system("chcp 1251>nul");

srand(time(NULL));

const int SIZE = 4;

string words[SIZE];

cout << "Введите 4 слова" << endl;

for (int i = 0; i < SIZE; i++)

{

cin>> words[i];

}

int attempt = 3;

while (attempt > 0)

{

string word = words[rand() % SIZE];

string shaffleWord = word;

for (int i = 0; i <shaffleWord.length(); i++)

{

int randomIndex = rand() %shaffleWord.length();

char tmp;

tmp = shaffleWord[i];

shaffleWord[i] = shaffleWord[randomIndex];

shaffleWord[randomIndex] = tmp;

}

cout << shaffleWord << endl;

cout << "Попробуйте угадать, что это за слово ";

string userWord;

cin >> userWord;

if (userWord == word)

{

cout << "Верно" << endl;

}

else

{

cout << "Неверно " << endl;

attempt =attempt -1;

}

}

return 0;

}