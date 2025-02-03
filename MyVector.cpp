/*При помощи векторов и итераторов сделать список, который можно смотреть,добавлять и
удалять элементы.
*/
#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main() {
	setlocale(LC_ALL, "ru");
	vector <string> notes;
	string user;
	string note;
	cout << "Добро пожаловать в блокнот!!!!\n";
	vector <string>::iterator myIterator;
	vector <string>::const_iterator iter;
	
	
	
	while (1) {
		cout << "Хотите добавить пищите 'Yes'.Если считаете что хватит пишите 'Exit'\n";
		cout << "Если хотите удалить пишите номер и 'Del'\n";
		cout << "Если хотите просмотреть список пишите 'look'\n";
		cout << "Пользователь: ";
		
		cin >> user;
		if (user == "Yes") {
			while (1) {
				getline(cin, note);
				if (note != "Exit") {
					notes.push_back(note);
				}
				else {
					break;
				}

			}


		}
		else if (user == "look") {
			for (int i = 1; i < notes.size(); i++) {
				cout << i << ". " << notes[i] << endl;
			}
			

		}
		else if (user == "Del") {
			cout << "Введите номер который хотите удалить ";
			int num;
			cin >> num;
			
			notes.erase(notes.begin()+num);
			
		}



		else {
			cout << "До свидания!!!\n";
			break;
		}
	}
	
	
		
	return 0; 
}