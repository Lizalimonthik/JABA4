#include <fstream> // библиотека для работы с файлами
#include <iostream>// библиотека для работы с потоками ввода-вывода
#include <string>// библиотека для работы со строками
using namespace std;// Пространство имен std

int main() {
  ifstream q("aaa.txt"); // чтение с файла
  string e;// сторка

  getline(q, e); // чтения строки из входного потока

  cout << "show = \"" << e << "\"" << endl; // отображение текста

    return 0;// конец программы
}