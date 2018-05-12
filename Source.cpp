#include <iostream>
#include <fstream>
#include <string.h>
#include <stdlib.h>
#include <iomanip>
#include <vector>
#include <string>
#include <random>
#include <Windows.h>
#include "sha256.h"

// Database on screen
void readbaza() 
{
	system("notepad.exe X:\\Project\\base.txt");
}

// Database encryption
void encryption()
{
		std::ifstream in("X:\\Project\\base.txt", std::ifstream::in | std::ifstream::binary);
		std::ofstream out("X:\\Project\\baseenc.txt", std::ifstream::out | std::ifstream::binary);
		char data;
		data = in.get();
		while (in.good())
		{
			out << (char)((int)(data + 1));
			data = in.get();
		};
		in.close();
		out.close();
		remove("X:\\Project\\base.txt");
}

// Database decryption
void decryption()
{
	std::ifstream in("X:\\Project\\baseenc.txt", std::ifstream::in | std::ifstream::binary);
	std::ofstream out("X:\\Project\\base.txt", std::ifstream::out | std::ifstream::binary);
	char data;
	data = in.get();
	while (in.good())
	{
		out << (char)((int)(data - 1));
		data = in.get();
	};
	in.close();
	out.close();
	remove("X:\\Project\\baseenc.txt");
}

// Destroy database (default and encrypt)
void delbaza()
{
	remove("X:\\Project\\base.txt");
	remove("X:\\Project\\baseenc");
}

// Destroy all files: admin`s acc, user`s acc and database
void delvse()
{
	int o;
	std::cout << "For suicide type: 123456 \n";
	std::cin >> o;
	if (o == 123456)
	{
		remove("X:\\Project\\base.txt");
		remove("X:\\Project\\users.txt");
		remove("X:\\Project\\admin.txt");
		remove("X:\\Project\\baseenc.txt");
	}
}

// Add new user in database
void dobstrokybaza()
{
	int q;
	std::string q1, q2, q3, q4, q5, q6, q7, q8, q9, q10, q11, q12, q13, q14, q15, q16, q71, q72, q17, q18, q19, q20, q211, q21;
	std::cout << "Specify the nubmer of man(begin from 501)" << std::endl;
	std::cin >> q;
	std::cout << "Enter the second name" << std::endl;
	std::cin >> q1;
	std::cout << "Enter the first name" << std::endl;
	std::cin >> q2;
	std::cout << "Enter the middle name" << std::endl;
	std::cin >> q3;
	std::cout << "Enter the place of birth" << std::endl;
	std::cin >> q4;
	std::cout << "Enter the place of residence" << std::endl;
	std::cin >> q5;
	std::cout << "Enter of postal code" << std::endl;
	std::cin >> q6;
	std::cout << "Enter the address (Name of the street, house and(or) apartment" << std::endl;
	std::cin >> q7 >> q71 >> q72;
	std::cout << "Enter the gender" << std::endl;
	std::cin >> q8;
	std::cout << "Enter the marital status" << std::endl;
	std::cin >> q9;
	std::cout << "Enter the education" << std::endl;
	std::cin >> q10;
	std::cout << "Enter the profession" << std::endl;
	std::cin >> q11;
	std::cout << "Enter the income" << std::endl;
	std::cin >> q12;
	std::cout << "Enter the passport series" << std::endl;
	std::cin >> q13;
	std::cout << "Enter the passport number" << std::endl;
	std::cin >> q14;
	std::cout << "Enter the military registration (if female, type "-"" << std::endl;
	std::cin >> q15;
	std::cout << "Enter the criminal record (if not, type "-"" << std::endl;
	std::cin >> q16;
	std::cout << "Enter number SNILS (across -)" << std::endl;
	std::cin >> q17;
	std::cout << "Enter the existence and nubmer of children" << std::endl;
	std::cin >> q18;
	std::cout << "Enter the number of TIN" << std::endl;
	std::cin >> q19;
	std::cout << "Enter the phone number" << std::endl;
	std::cin >> q20 >> q211;
	std::cout << "Enter the date of birth in DD.MM.YY" << std::endl;
	std::cin >> q21;
	std::ofstream fout("X:\\Project\\base.txt", std::ios_base::app);
	fout << q
		<< std::setw(15) << q1
		<< std::setw(15) << q2
		<< std::setw(16) << q3
		<< std::setw(15) << q4
		<< std::setw(15) << q5
		<< std::setw(12) << q6
		<< std::setw(20) << "St_" << q7 << "h_" << q71 << "_" << q72
		<< std::setw(8) << q8
		<< std::setw(8) << q9
		<< std::setw(17) << q10
		<< std::setw(28) << q11
		<< std::setw(17) << q12
		<< std::setw(13) << q13
		<< std::setw(10) << q14
		<< std::setw(10) << q15
		<< std::setw(13) << q16
		<< std::setw(10) << q17
		<< std::setw(9) << q18
		<< std::setw(10) << q19
		<< std::setw(15) << "+" << "(" << q20 << ")" << q211
		<< std::setw(15) << q21
		<< std::endl;
	fout.close();
	std::cout << "People have been successfully added to the database" << std::endl;
	std::cout << "To continue, login again, please" << std::endl;
}

// Generate the database
void genbaza ()
{
	setlocale(LC_ALL, "Russian");
	std::random_device rd;
	std::mt19937 gen(rd());
	std::uniform_int_distribution<> dist(900, 999);
	std::uniform_int_distribution<> dism(1000000, 9999999);
	std::uniform_int_distribution<> disa(1, 31);
	std::uniform_int_distribution<> disb(1, 12);
	std::uniform_int_distribution<> disc(1930, 1997);
	std::uniform_int_distribution<> disd(100000, 800000);
	std::uniform_int_distribution<> dise(01, 99);
	std::uniform_int_distribution<> disf(01, 199);
	std::uniform_int_distribution<> disg(18000, 130000);
	std::uniform_int_distribution<> dish(1000, 9000);
	std::uniform_int_distribution<> disi(100000, 999500);
	std::uniform_int_distribution<> disj(100, 999);
	std::vector<std::string> name{ "Яковалева", "Сорокина", "Сергеева", "Романова", "Захарова", "Борисова", "Королева", "Герасимова", "Пономарева", "Григорьева", "Лазарева", "Медведева", "Ершова", "Никитина", "Соболева", "Рябова", "Полякова", "Цветкова", "Данилова", "Жукова", "Фролова", "Журавлева", "Николаева", "Крылова", "Максимова", "Сидорова" };
	std::vector<std::string> dog{ "Жанна", "Валентина", "Инна", "Анна", "Мария", "Анастасия", "Дарья", "Людмилла", "Кристина", "Татьяна", "Галина", "Дана", "Евгения", "Зинаида", "Зоя", "Надежда", "Ольга", "Олеся", "Нина", "Виктория", "Вероника" };
	std::vector<std::string> cat{ "Сергеевна", "Семеновна", "Станиславовна", "Степановна", "Павловна", "Петровна", "Александровна", "Андреевна", "Архиповна", "Алексеевна", "Антоновна", "Аскольдовна", "Альбертовна", "Аркадьевна", "Борисовна", "Константиновна", "Матвеевна", "Михайловна", "Олеговна", "Максимовна", "Афанасьевна", "Анатольевна", "Артемовна" };
	std::vector<std::string> rat{ "Сургут", "Солнцево", "Москва", "Астрахань", "Новосибирск", "Кострома", "Архангельск", "Камчатск", "Кемерово", "Орел", "Ленинград", "Дубна", "Барнаул", "Липецк", "Кубань", "Новороссийск", "Калининград", "Геленджик", "Сочи", "Иваново", "Оренбург", "Екатеринбург", "Балашиха", "Тверь", "Иркутск", "Тула" };
	std::vector<std::string> red{ "Сургут", "Солнцево", "Москва", "Астрахань", "Новосибирск", "Кострома", "Архангельск", "Камчатск", "Кемерово", "Орел", "Ленинград", "Дубна", "Барнаул", "Липецк", "Кубань", "Новороссийск", "Калининград", "Геленджик", "Сочи", "Иваново", "Оренбург", "Екатеринбург", "Балашиха", "Тверь", "Иркутск", "Тула" };
	std::vector<std::string> ron{ "Ул_Ленина_д", "Ул_Советская_д", "Ул_Пионерская_д", "Ул_Труда_д", "Ул_Красноказарменная_д", "Ул_Октябрьская_д", "Смоленская_площадь_д", "Ул_Тверская_д", "Ул_Пролетарская_д", "Ул_Калинина_д", "Ул_Маяковского_д", "Ул_Автозаводская_д", "Ул_Рабочая_д", "Ул_Детская_д", "Ул_Островского_д", "Ул_Пригородная_д", "Ул_Мостовая_д", "Ул_Лапина_д", "Ул_Вавилова_д" };
	std::vector<std::string> rto{ "Замужем", "Не замужем" };
	std::vector<std::string> ren{ "Высшее", "Среднее", "Среднее специальное" };
	std::vector<std::string> cot{ "Адвокат", "Бухгалтер", "Окулист", "Инженер", "Электрик", "Продавец", "Ортопед", "Дальнобойщик", "Пекарь", "Хирург", "Дистрибутор", "Ученый", "Космонавт", "Преподаватель", "Учитель", "Математик", "Пожарный", "Психиатр", "Психотерапевт", "Проктолог", "Полицейский", "Парикмахер", "Визажист", "Журналист", "Программист", "Экономист", "Онколог", "Сантехник", "Репортер", "Телеведущий" };
	std::vector<std::string> tak{ "Служил", "Не служил" };
	std::vector<std::string> fame{ "Романов", "Осипов", "Макаров", "Зайцев", "Беляев", "Гаврилов", "Антонов", "Ефимов", "Леонтьев", "Давыдов", "Гусев", "Данилов", "Киселёв", "Сорокин", "Тихомиров", "Крылов", "Никифоров", "Ожегов", "Крысин", "Лопатин", "Бунин", "Сидоров", "Соболев" };
	std::vector<std::string> god{ "Сергей", "Иван", "Олег", "Дмитрий", "Вячеслав", "Павел", "Михаил", "Александр", "Алексей", "Илья", "Максим", "Даниил", "Денис", "Владимир", "Борис", "Артем" };
	std::vector<std::string> tac{ "Сергеевич", "Иванович", "Олегович", "Дмитриевич", "Вячеславович", "Павлович", "Михайлович", "Александрович", "Алексеевич", "Максимович", "Даниилович", "Денисович", "Владимирович", "Борисович", "Артемович" };
	std::vector<std::string> ryc{ "Женат", "Не женат" };
	std::ofstream fout("X:\\Project\\base.txt");
	fout << "Number       SecondN       FirstN       MiddleN       PlaceB     PlaceR    Postal Code     Address       Gender       MaritalSt       Education          Profession       Income     Passp ser num  MilitaryR   CriminalR  SLILS       ChildR            TIN                   Phone number             DateB" << std::endl;
	fout << "--------------------------------------------------------" << std::endl;
	for (int iter = 1; iter < 251; iter++) {
		fout << iter << std::setw(15) << name[rand() % name.size()] 
			<< std::setw(15) << dog[rand() % dog.size()] << std::setw(16)
			<< cat[rand() % cat.size()] << std::setw(15)
			<< rat[rand() % rat.size()] << std::setw(15)
			<< red[rand() % red.size()] << std::setw(12)
			<< disd(gen) << std::setw(25)
			<< ron[rand() % ron.size()] << std::setw(8)
			<< dise(gen) << "_" << disf(gen)
			<< std::setw(8) << "ж" << std::setw(17)
			<< rto[rand() % rto.size()] << std::setw(28)
			<< ren[rand() % ren.size()] << std::setw(17)
			<< cot[rand() % cot.size()] << std::setw(13)
			<< disg(gen) << std::setw(10)
			<< dish(gen) << std::setw(10)
			<< disi(gen) << std::setw(8)
			<< "-" << std::setw(13) << "Not"
			<< std::setw(9) << disj(gen)
			<< "-" << disj(gen) 
			<< "-" << disj(gen) << "-" 
			<< dise(gen) << std::setw(10)
			<< disb(gen) << std::setw(15)
			<< disd(gen) << disd(gen) << std::setw(15)
			<< "+7" << "(" << dist(gen) << ")"
			<< dism(gen) << std::setw(15) << disa(gen) << "."
			<< disb(gen) << "." << disc(gen) << std::endl;
	}
	for (int iter = 251; iter < 501; iter++) {
		fout << iter << std::setw(15) << fame[rand() % fame.size()] 
			<< std::setw(15) << god[rand() % god.size()] 
			<< std::setw(16) << tac[rand() % tac.size()] << std::setw(15)
			<< rat[rand() % rat.size()] << std::setw(15)
			<< red[rand() % red.size()] << std::setw(12)
			<< disd(gen) << std::setw(25)
			<< ron[rand() % ron.size()] << std::setw(8)
			<< dise(gen) << "_" << disf(gen)
			<< std::setw(8) << "m" << std::setw(17)
			<< ryc[rand() % ryc.size()] << std::setw(28)
			<< ren[rand() % ren.size()] << std::setw(17)
			<< cot[rand() % cot.size()] << std::setw(13)
			<< disg(gen) << std::setw(10)
			<< dish(gen) << std::setw(10)
			<< disi(gen) << std::setw(13)
			<< tak[rand() % tak.size()] << std::setw(10) << "Not"
			<< std::setw(9) << disj(gen) << "-"
			<< disj(gen) << "-" 
			<< disj(gen) << "-" 
			<< dise(gen) << std::setw(10)
			<< disb(gen) << std::setw(15)
			<< disd(gen) << disd(gen) 
			<< std::setw(15) << "+" << "(" << dist(gen) << ")"
			<< dism(gen) << std::setw(15) << disa(gen) << "." << disb(gen) << "." << disc(gen) << std::endl;
	}
	fout << "------------------------------ \n";
	fout.close();
}

// Interface of user
void interfacepolz()
{
	int i;
	for (i = 0; i <= 2; i++)
	{ 
	int count;
	std::cout << "------------------------------ \n"
		<< "Key 1 - adding a new person in database \n"
		<< "Key 2 - opening a database file \n";
	std::cin >> count;
	std::cout << "Accepted \n";
	switch (count)
	{
	case 1:
	{
		dobstrokybaza();
		break;
	}
	case 2:
	{
		readbaza();
		std::cout << "The database is displayed \n";
		break;
	}
	default:
	{
		std::cout << "Goodbye" << std::endl;
		goto m1;
	}
	}
	system("pause");
	m1:break;
	}
}

// Interface of admin
void interfaceadm()
{
	int i;
	for (i = 0; i <= 2; i++)
	{
	int count;
	std::cout << "------------------------------ \n"
		<< "Key 1 - generate the database \n"
		<< "Key 2 - destroy the database \n"
		<< "Key 3 - encrypt the database \n"
		<< "Key 4 - destroy all \n"
		<< "Key 5 - add a new person \n"
		<< "Key 6 - open the database file \n"
		<< "Key 7 - decrypt the database" << std::endl;
	std::cin >> count;
	std::cout << "Accepted \n";
	switch (count)
	{
	case 1:
	{
		genbaza();
		std::cout << "Ready \n";
		break;
	}
	case 2:
	{
		delbaza();
		std::cout << "The database is removed \n";
		break;
	}
	case 3:
	{
		encryption();
		std::cout << "Ready" << std::endl;
		break;
	}
	case 4:
	{
		delvse();
		std::cout << "The self-destruct programm completed" << std::endl;
		break;
	}
	case 5:
	{
		dobstrokybaza();
		break;
	}
	case 6:
	{
		readbaza();
		std::cout << "The database is displayed \n";
		break;
	}
	case 7:
	{
		decryption();
		std::cout << "Ready" << std::endl;
		break;
	}
	default:
	{
		std::cout << "Goodbye" << std::endl;
		goto m1;
	}
	}
	system("pause");
m1:break;
		}
	}

// Sign up and auth
int main(int argc, char* argv[])
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int count;
	int i;
	for (i = 0; i <= 3; i++)
	{
		std::cout << "Hey, did you sigh up? 1 - not, 2 - yes, 3 - admin \n"
			<< "For exit, please, enter any key \n";
		std::cin >> count;
		switch (count)
		{
		case 1:
		{
			char x[50], y[15];
			std::ofstream fout("X:\\Project\\users.txt");
			std::cout << "Please sigh up" << std::endl;
			std::cout << "Login:";
			std::cin >> x;
			std::cout << "Password:";
			std::cin >> y;
			strcat_s(x, y);
			fout << sha256(x);
			std::cout << "Thx you" << std::endl;
			fout.close();
		}
		case 2:
		{
			std::string blop, q;
			std::ifstream fin("X:\\Project\\users.txt");
			getline(fin, blop);
			std::cout << "User? Enter the login and the password (together)" << std::endl;
			fin.close();
			std::cin >> q;
			q = sha256(q);
			if (blop == q)
			{
				interfacepolz();
				break;
			}
			else
			{
				std::cout << "Wrong data" << std::endl;
				break;
			}
		}
		case 3:
		{
			char blap[50];
			std::ifstream fin("X:\\Project\\admin.txt");
			fin.getline(blap, 50);
			std::cout << "Admin? Enter the login and the password (together)" << std::endl;
			fin.close();
			char w[50];
			std::cin >> w;
			if (strcmp(blap, w) == 0)
			{
				interfaceadm();
				break;
			}
			else
			{
				std::cout << "Wrong data" << std::endl;
				break;
			}
		}
		default:
			std::cout << "Goodbye" << std::endl;
			break;
		}
		break;
	}
}
