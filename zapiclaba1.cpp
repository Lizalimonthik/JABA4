#include <fstream> // библиотека для работы с файлами
#include <iostream>// библиотека для работы с потоками ввода-вывода
#include <string>// библиотека для работы со строками
using namespace std;// Пространство имен std
float x, y;// Описание переменных

int main()// Основное тело программы
{
  ifstream fin("lab1rez.txt"); // чтение с файла
  ofstream fout("lab1rez.txt");
  string a;
  string b;
  for (int x=-8; x<=10; x++)
{
    if (x>=-8 && x<-5)// Проверка соответствия x данному промежут
 {
 y=0*x-3; // По введенному x просчитывается 
}
    else if  (x>=-5 && x<-3)
    {
    y=1*x+3;
    }
    else if  (x>=-3 && x<3)
    {
    y=sqrt(9-pow(x, 2));
}
    else if (x>=3 && x<8)
    {
    y=0.625*x-2;
    }
    else if  (x>=8 && x<=10)
    {
    y=0*x+3;
    }

fout << y << endl;// запись строки в файл

    }

    fout.close();// закрываем файл

cout << "sled"<< endl;// отображение текста


    while (getline(fin, b))// чтение всех строк
    {
       
        float c = stof(b);// преобразование типов данных
        for (int i=0; i<5; i++){
            
            c = c+0,001;
        }
        
        cout << c << endl;
    }
    fin.close(); // закрываем файл
    }