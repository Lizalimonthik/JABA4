#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int l;
int main()
{
    ifstream fin("file.txt");
    ofstream fout("file.txt");
    string b;
    float x, y;
    l = 0;
    for (int x = -8; x <= 10; x++)
    {
        l++;
        if (x >= -8 && x < -5) // Проверка соответствия x данному промежут
        {
            y = 0 * x - 3; // По введенному x просчитывается
        }
        else if (x >= -5 && x < -3)
        {
            y = 1 * x + 3;
        }
        else if (x >= -3 && x < 3)
        {
            y = sqrt(9 - pow(x, 2));
        }
        else if (x >= 3 && x < 8)
        {
            y = 0.625 * x - 2;
        }
        else if (x >= 8 && x <= 10)
        {
            y = 0 * x + 3;
        }

        fout << y << endl;
    }
    fout.close();

    float *data = new float[l];
    l = 0;
    while (getline(fin, b))
    {
        data[l] = stof(b);
        l++;
    }
    for (int i = 0; i < l; i++)
        cout << data[i] << "\n";
    fin.close();
}