#include <fstream> // библиотека для работы с файлами
#include <iostream>// библиотека для работы с потоками ввода-вывода
#include <string>// библиотека для работы со строками
using namespace std;// Пространство имен std

int main() {
  ifstream fin("bbb.txt");// чтение с файла
  ofstream fout("bbb.txt");// запись в файл
  string r;
  string rt;
  cout<<"txt:";
  cin>>r;// стандартный входной поток
  fout<<r;// запись строки в файл
fout.close();// закрываем файл

  getline(fin, rt);// чтения строки из входного потока

  cout << "rt = \"" << rt << "\"" << endl;// отображение текста

    return 0;// конец программы
}