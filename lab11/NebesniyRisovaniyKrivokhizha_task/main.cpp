#include <iostream>
#include <vector>
#include <fstream>
#include <windows.h>
#include <clocale>
#include <string>

using namespace std;

struct Car{
    // даем пустое значение на старте с целью анигиляции ошибок
    string nomer = " ";
    string owner = " ";
    string model_year = " ";
    string reg_date =" ";
} obj; // объект структуры

 vector <struct Car> Reg; // создаем вектор и указываем его структуру
 char filename[] = "register.txt"; // имя файла
 string line = ""; // вспомагательная переменная
 ifstream reg_in;
 ofstream reg_out;

 void greeting(){
     cout << "        Вас вітає застосунок обробки реєстру авто МВС України."               << endl
            << " --------------------------------------------------------------------- "                       << endl
            << "|         Застосунок розроблено студентами ЦНТУ групи КІ-20:          |"      << endl
            << "|                           <<DEVELOPERS>>                            |"                    << endl
            << "|        Рисований Максим Олегович - Додавання та видалення даних.    |" << endl
            << "|        Кривохижа Віталій Юрійович - Пошук даних й тестування        |"     << endl
            << "|        Небесний Андрій Вадимович - Обробка файлу й дизайн ПЗ        |"   << endl
            << " -----------------------(c)AllRightsAreReserved----------------------- "                       << endl;

    system("pause");
    system("cls");
 }

 void reg_down(){
     // открывает файл и загружает все данные в вектор структур
     //
     reg_in.open(filename, ios_base::in);

     int iter = 0;
     while(!reg_in.eof()){
        getline(reg_in, line);
        if(line.length() > 1){ // проверяем строку на пустоту для уничтожения пустых структур
                Reg.push_back(obj);
                Reg[iter].nomer = line;
                getline(reg_in, Reg[iter].owner);
                getline(reg_in, Reg[iter].model_year);
                getline(reg_in,  Reg[iter].reg_date);
        }

        iter++;
     }

     reg_in.close();
 }

 void reg_reader(){
     // выводит на экран все содержимое вектора структур
     //

    cout << "Ви обрали виведення реєстру на екран." << endl
            << "-----------------------------------------------" << endl;

     for(int i = 0; i < Reg.size(); i++){
        cout << Reg[i].nomer << endl;
        cout << Reg[i].owner << endl;
        cout << Reg[i].model_year << endl;
        cout << Reg[i].reg_date << endl;
     }

     cout << "-----------------------------------------------" << endl;
     system("pause");
     system("cls");
 }

 void updater(){
     // функция активируется по завершению
     //

     reg_out.open(filename, ios_base::trunc | ios_base::out);

     for(int j = 0; j < Reg.size(); j++){
            reg_out << Reg[j].nomer << endl
                       << Reg[j].owner << endl
                       << Reg[j].model_year << endl
                       << Reg[j].reg_date << endl;
     }

     reg_out.close();
 }

 void nomers(){
    cout << "В реєстрі містяться такі авто (1, 2, 3... - індекси):" << endl;
    for(int i = 0; i < Reg.size(); i++){
        cout << i << ". " << Reg[i].nomer << endl;
    }
    cout << "------------------------------------------------------" << endl;
 }

 void new_car(){
     // эта функция добавляет новый элемент в вектор
     //

     Reg.push_back(obj);

    cout << "Ви обрали додавання нового автомобіля до реєстру." << endl
            << "-------------------------------------------------------" << endl;

    cout << "Будь ласка, введіть номер нового автомобіля (AA0000NA)."
            << endl << ">> ";
    getline(cin, line);
    bool flag = true;
    while(true){
        getline(cin, line);
        if(line.length() != 8){
            cout << "Невірно введений номер, спробуйте ще раз! (AA0000NA)" << endl << ">> ";
            flag = false;
        }
        else
            break;
    }
    Reg[Reg.size() - 1].nomer = line;

    cout << "Введіть ПІП власника. "
            << endl << ">> ";
    getline(cin, line);
    Reg[Reg.size() - 1].owner = "    " + line;

    cout << "Введіть модель та рік випуску авто. "
            << endl << ">> ";
    getline(cin, line);
    Reg[Reg.size() - 1].model_year = "    " + line;

    cout << "Введіть дату реєстрації. "
            << endl << ">> ";
    getline(cin, line);
    Reg[Reg.size() - 1].reg_date = "    " + line;

    cout << "-------------------------------------------------------" << endl;
    system("pause");
    system("cls");
 }

 int find_car(){
     // эта функция ищет элемент в структуре за автомобильным номером
     // выводит сообщение о наличии или отсутствии элемента
     // Коментруйте свой код
     cout << "Ви обрали пошук авто за індексом в реєстрі." << endl;
     cout << "-------------------------------------------------------" << endl;

     nomers();
     int find_Elem;
     cout << "Будь ласка, введіть індекс номеру автомобіля, який ви бажаєте знайти." << endl << ">> ";
     cin >> find_Elem;

     for(int i = 0; i < Reg.size(); i++)
     {
        if(find_Elem == i)
        {
            cout << "Результати пошуку в реєстрі: " << endl;
            cout << Reg[i].nomer << endl;
            cout << Reg[i].owner << endl;
            cout << Reg[i].model_year << endl;
            cout << Reg[i].reg_date << endl;
            break;
        }

        else if(find_Elem >= Reg.size()){
            cout << "Авто за даним індексом відсутнє." << endl;
            break;
        }

    }

    cout << "-------------------------------------------------------" << endl;
    system("pause");
    system("cls");

 }

int del_car(){
    // ищет обьект за индексом автомобильного номера и стирает его
    // если обькта не было в векторе, возвращает сообщение об ошибке
    //

    cout << "Ви обрали видалення автомобіля з реєстру." << endl
            << "-------------------------------------------------------" << endl;
    nomers();

    int del_elem;
    cout << "Будь ласка, введіть індекс номеру автомобіля, який ви бажаєте видалити." << endl << ">> ";
    cin >> del_elem;
    if(del_elem < Reg.size()){
        Reg.erase(Reg.begin() + del_elem);
        cout << "Автомобіль було видалено з реєстру!" << endl;
    }
    else{
        cout << "Помилка, спробуйте ще раз! (Можливо за даним індексом не існує автомобіля)" << endl;
    }

    cout << "-------------------------------------------------------" << endl;
    system("pause");
    system("cls");
}

int main(){
    SetConsoleCP(::GetACP());;
    SetConsoleOutputCP(::GetACP());;

    char key = ' ';
    greeting();
    reg_down();

    while(true){
        cout << "Список ключів:" << endl
                << "N - Додати автомобіль;" << endl
                << "S - Вивести на екран реєстр;" << endl
                << "D - Видалити авто з реєстру;" << endl
                << "F - Знайти авто в реєстрі" << endl
                << "E - Завершення роботи зі збереженням змін." << endl
                << "------------------------------------------------------" << endl;
        if(Reg.size() == 0){
            cout << "На даний момент реєстр пороженій, що ви бажаєте зробити?" << endl;
        }else{
            nomers();
            cout << "Що ви бажаєте зробити?" << endl;
        }
        cout << ">> ";
        cin >> key;
        switch(key){
        case 'S':
            system("cls");
            reg_reader();
            break;
        case 'N':
            system("cls");
            new_car();
            break;
        case 'D':
            system("cls");
            del_car();
            break;
        case 'F':
            system("cls");
            find_car();
            break;
        case 'E':
            system("cls");
            cout << "Збереження реєстру...." << endl;
            updater();
            system("pause");
            return 0;
        default:
            cout << "Невірно введено дані, спробуйте інший ключ" << endl;
            system("pause");
            system("cls");
            break;
        }
    }
}
