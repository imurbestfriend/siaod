#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

void readTextFile(ifstream& file) { // чтение и вывод содержимого файла
    int x;
    cout << "Элементы файла:\n";
    while (file >> x)
        cout << x << ' ';
    cout << '\n';
    file.close();
}

void addNextLine(ofstream& file, const char* name, int x) { // добавление элемента в конеч файла
    file.open(name, ios::out | ios::app);
    file << ' ' << x;
    file.close();
}

void filesLenght(const char* name) {  // нахождение длины файла
    ifstream file;
    file.open(name);
    int n = 0, x;
    while (!file.eof()) {
        file >> x;
        file.get();
        n++;
    }
    cout << "Количество чисел в файле = " << n << endl;
    file.close();
}

int getElementByIndex(string name, int index) { // нахождение элемента по его порядковому номеру
    ifstream file(name);
    vector<int> numbers;
    int number;
    while (file >> number) {
        numbers.push_back(number);
    }
    file.close();
    return numbers[index - 1];
}

 void createNewFile(string a, string b) {
   /* ifstream itf(a);
    vector<int> numbers;
    int number;
    while (itf >> number) {
        numbers.push_back(number);
    }
    itf.close();
   int sum = numbers.front() + numbers.back(); // сумма первого и последнего элементов
    ofstream otf(b);
    for (int i = 0; i < numbers.size(); i++) {
        otf << numbers[i] * sum << " ";
    }
    otf.close();*/


     ifstream inputFile("a.txt");
     ofstream outputFile("b.txt");

     if (inputFile.is_open() && outputFile.is_open()) {
         string number;
         while (inputFile >> number) {
             outputFile << number << " " << number.size() << endl;
         }

         inputFile.close();
         outputFile.close();
         cout << "Числа успешно скопированы в файл b.txt." << endl;
     } else {
         cerr << "Не удалось открыть файл." << endl;
     }


}




int main() {
    ifstream fin;
    fin.open("A.txt");
    if (!fin)
        cout << "Файл не удалось открыть";
    else
        readTextFile(fin); // вывод содержимого текстового файла

    ofstream fout;
    if (!fout) {
        cout << "Файл не удалось открыть";
        return -1;
    }

    int x;
    cout << "Введите элемент который хотите добавить:";
    cin >> x;
    addNextLine(fout, "A.txt", x); // добавление новой записи в конец файла;

    int i;
    cout << "Введите номер элемента который хотите найти:";
    cin >> i;
    cout << "Элемент под номером " << i << " = " << getElementByIndex("A.txt", i) << endl;

    filesLenght("A.txt");   // длина файла

    createNewFile("A.txt", "B.txt"); // вариант 6
    cout << "Новый файл создан" << endl;
}
