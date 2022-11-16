#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <cmath>

using namespace std;

int i = 0;
string currency;

// mean of time
double meanTime(string filename)
{
	double mi = 0;
	fstream file;
	file.open(filename.c_str(), ios::in);
	while(!file.eof())
	{
		double temp;
		file >> temp;
		mi = mi + i;
		i++;
	}
	i = i-1;
	mi = mi/i;
	
	file.clear();
	file.close();
	
	return mi;
}

// mean of y
double mean(string filename)
{
	double meanK = 0;
	double justK = 0;
	fstream file;
	file.open(filename.c_str(), ios::in);
	while(!file.eof())
	{
		meanK = meanK + justK;
		file >> justK;
	}
	meanK = meanK/i;
	
	file.clear();
	file.close();
	
	return meanK;
}

// mean of x
double xmmx(string filename, int y, double z)
{
	double d[i];
	fstream file;
	file.open(filename.c_str(), ios::in);
	for(int x=0; x<i; x++)
	{
		file>>d[x];
		d[x] = d[x]-z;
	}
	file.clear();
	file.close();
	
	return d[y];
}

int date(int num)
{
	int week;
	
	while(1)
	{
		cout << endl;
		cout << "Choose Week Number: " << endl;
		cout << "[1] First Week" << endl;
		cout << "[2] Second Week" << endl;
		cout << "[3] Third Week" << endl;
		cout << "[4] Fourth Week" << endl;
		cout << endl;
		cout << "Enter Here: ";
		cin >> week;
		if(week<=0)
		{
			cout << endl;
			cout << "Invalid Input\n" << endl;
			system ("pause");
		}
		else if(week>=5)
		{
			cout << endl;
			cout << "Invalid Input\n" << endl;
			system ("pause");
		}
		else
		{
			num = num + week;
			return num;
			break;
		}
	}
}

int selectMonth()
{
	int month;
	while(1)
	{
		cout << endl;
		cout << "Choose Month: " << endl;
		cout << "[1] January" <<endl;
		cout << "[2] February" << endl;
		cout << "[3] March" << endl;
		cout << "[4] April" << endl;
		cout << "[5] May" << endl;
		cout << "[6] June" << endl;
		cout << "[7] July" << endl;
		cout << "[8] August" << endl;
		cout << "[9] September" << endl;
		cout << "[10] October" << endl;
		cout << "[11] November" << endl;
		cout << "[12] December" << endl;
		cout << endl;
		cout << "Enter Here: ";
		cin >> month;
		if(month>=1)
		{
			if(month<=12)
			{
				return month;
				break;
			}
		}
		cout << endl;
		cout << "Invalid Input" << endl;
		system ("pause");	
	}			
}

int fDate(int num)
{
	int month = selectMonth();
	switch(month)
	{
		case 1:
			{
				num = 0 + num;
				num = date(num);
				break;
			}
		case 2:
			{
				num = 4 + num;
				num = date(num);
				break;
			}
		case 3:
			{
				num = 8 + num;
				num = date(num);
				break;
			}
		case 4:
			{
				num = 12 + num;
				num = date(num);
				break;
			}
		case 5:
			{
				num = 16 + num;
				num = date(num);
				break;
			}
		case 6:
			{
				num = 20 + num;
				num = date(num);
				break;
			}
		case 7:
			{
				num = 24 + num;
				num = date(num);
				break;
			}
		case 8:
			{
				num = 28 + num;
				num = date(num);
				break;
			}
		case 9:
			{
				num = 36 + num;
				num = date(num);
				break;
			}
		case 10:
			{
				num = 40 + num;
				num = date(num);
				break;
			}
		case 11:
			{
				num = 44 + num;
				num = date(num);
				break;
			}
		case 12:
			{
				num = 48 + num;
				num = date(num);
				break;
			}
		default:
			{
				cout << endl;
				cout << "Invalid Input\n" << endl;
				system ("pause");
			}
	}
	return num;
}

void pricePredict(int num, double b0, double b1, double bg0, double bg1)
{
	num = num + 88;
	int lim = num + 3;
	double sumc = 0;
	double sumg = 0;
	for(num;num<=lim;num++)
	{
		double val1 = b0 + (b1*num);
		double currency = bg0 + (bg1*val1);
		sumc = sumc + val1;
		sumg = sumg + currency;
	}
	double avec = sumc/4;
	double aveg = sumg/4;
	double pesos = 1/aveg;
	cout << endl;
	cout << "Prediction: " << endl << endl;
	cout << "USD/PHP: P" << avec << endl;
	cout << currency <<": $" << pesos << endl;
	system ("pause");
	system ("CLS");
}

void monthPre(int num, double b0, double b1, double bg0, double bg1)
{
	cout << endl;
	int month = selectMonth();
	switch(month)
	{
		case 1:
			{
				num = 1 + num;
				pricePredict(num, b0, b1, bg0, bg1);
				break;
			}
		case 2:
			{
				num = 5 + num;
				pricePredict(num, b0, b1, bg0, bg1);
				break;
			}
		case 3:
			{
				num = 9 + num;
				pricePredict(num, b0, b1, bg0, bg1);
				break;
			}
		case 4:
			{
				num = 13 + num;
				pricePredict(num, b0, b1, bg0, bg1);
				break;
			}
		case 5:
			{
				num = 17 + num;
				pricePredict(num, b0, b1, bg0, bg1);
				break;
			}
		case 6:
			{
				num = 21 + num;
				pricePredict(num, b0, b1, bg0, bg1);
				break;
			}
		case 7:
			{
				num = 25 + num;
				pricePredict(num, b0, b1, bg0, bg1);
				break;
			}
		case 8:
			{
				num = 29 + num;
				pricePredict(num, b0, b1, bg0, bg1);
				break;
			}
		case 9:
			{
				num = 33 + num;
				pricePredict(num, b0, b1, bg0, bg1);
				break;
			}
		case 10:
			{
				num = 37 + num;
				pricePredict(num, b0, b1, bg0, bg1);
				break;
			}
		case 11:
			{
				num = 41 + num;
				pricePredict(num, b0, b1, bg0, bg1);
				break;
			}
		case 12:
			{
				num = 45 + num;
				pricePredict(num, b0, b1, bg0, bg1);
				break;
			}
		default:
			{
				cout<<endl;
				cout<<"Wrong Input!"<<endl<<endl;
			}
	}
}

int main()
{

	fstream file;
	string factor = "exchrate.txt";
	double mi = meanTime(factor);
	double meanK = mean(factor);
	
	//Time - Mean of Time
	double c[i];
	for(int x=1; x<=i; x++)
	{
		c[x-1] = x-mi;
	}
	
	//Kuwait - Mean of Kuwait
	double d[i];
	for(int x=0; x<i; x++)
	{
		d[x] = xmmx(factor, x, meanK);	
	}
	
	//Square of C
	double e[i];
	for(int x=0; x<i; x++)
	{
		e[x] = pow(c[x], 2);
	}
	
	//Square of D
	double f[i];
	for(int x=0; x<i; x++)
	{
		f[x] = pow(d[x], 2);
	}
	
	//Multiplication of C and D
	double g[i];
	for(int x=0; x<i; x++)
	{
		g[x] = c[x]*d[x];
	}
	
	
	//Sum of Squares of C
	double sum_e;
	for(int x=0; x<i; x++)
	{
		sum_e = sum_e + e[x];
	}
	
	//Sum of Multiplication of Squares
	double sum_g;
	for(int x=0; x<i; x++)
	{
		sum_g = sum_g + g[x];
	}
	
	//B1
	double b1 = sum_g/sum_e;
	
	//B0
	double b0 = meanK - (b1*mi);
	
	
	int predict;
	string filename;
	
	prediction:
	
	cout << " ______________________________________________________" << endl;
	cout << "|                                                      |" << endl;
	cout << "|     US Dollar / Philippine Peso Price Prediction     |" << endl;
	cout << "|         Regression Model: Linear Regression          |" << endl;
	cout << "|                   Data: 2017-2022                    |" << endl;
	cout << "|______________________________________________________|\n" << endl;
	cout << "[1] Predict" << endl;
	cout << "[2] Exit" << endl << endl;
	cout << "Enter Here: ";
	cin >> predict;
	switch(predict)
	{
		case 1:
				filename = "exchrate.txt";
				currency = "PHP/USD";
				break;
		case 2:
				char ex;
				cout << "Do you want to exit the program? (y/n) ";
				cin >> ex;
				switch(ex)
				{
					case 'y':
							cout << "Thank you for using the program.";
							exit(0);
							break;
					case 'n':
							goto prediction;
							break;
					default:
							cout << endl;
							cout << "Invalid Input\n" << endl;
							system ("pause");
							goto prediction;
				}
		default:
							cout << endl;
							cout << "Invalid Input\n" << endl;
							system ("pause");
							goto prediction;
	}
	double mg = mean(filename);
	
	//currency - Mean of currency
	double dg[i];
	for(int x=0; x<i; x++)
	{
		dg[x] = xmmx(filename, x, mg);
	}
	
	//Square of currency
	double fg[i];
	for(int x=0; x<i; x++)
	{
		fg[x] = pow(dg[x], 2);
	}
	
	//Multiplication of D and DG
	double gg[i];
	for(int x=0; x<i; x++)
	{
		gg[x] = d[x]*dg[x];
	}
	
	//Sum of Squares of D
	double sum_eg;
	for(int x=0; x<i; x++)
	{
		sum_eg = sum_eg + f[x];
	}
	
	//Sum of Multiplication of Squares
	double sum_gg;
	for(int x=0; x<i; x++)
	{
		sum_gg = sum_gg + gg[x];
	}
	
	//BG1
	double bg1 = sum_gg/sum_eg;
	//BG0
	double bg0 = mg - (bg1*meanK);
	

	int mode;
	int year;
	int month;
	int num;
	
	modes:
	cout << endl;
	cout << "[1] Monthly" << endl;
	cout << "[2] Weekly" << endl << endl;
	cout << "Enter Here: ";
	cin >> mode;
	switch(mode)
	{
		case 1:
			{
				dateSelection:
				cout << endl;
				cout << "Choose Year: " << endl;
				cout << "[1] 2022" << endl;
				cout << "[2] 2023" << endl;
				cout << "[3] 2024" << endl;
				cout << endl;
				cout << "Enter Here: ";
				cin >> year;
				switch(year)
				{
					case 1:
						{
							monthSelection:
							cout << endl;
							cout << "Choose Month: " << endl;
							cout << "[1] November" << endl;
							cout << "[2] December\n" << endl;
							cout << "Enter Here: ";
							cin >> month;
							switch(month)
							{
								case 1:
									{
										num = 1;
										pricePredict(num, b0, b1, bg0, bg1);
										goto prediction;
										break;
									}
								case 2:
									{
										num = 5;
										pricePredict(num, b0, b1, bg0, bg1);
										goto prediction;
										break;
									}
								default:
									{
										cout<<endl;
										cout<<"Invalid Input\n" << endl;
										system ("pause");
										goto monthSelection;
									}
							}
							break;
						}
					case 2:
						{
							num = 8;
							monthPre(num, b0, b1, bg0, bg1);
							goto prediction;
							break;
						}
					case 3:
						{
							num = 56;
							monthPre(num, b0, b1, bg0, bg1);
							goto prediction;
							break;
						}
					default:
						{
							cout << endl;
							cout << "Invalid Input" << endl;
							system ("pause");
							goto dateSelection;
						}
				}
			break;
			}
		case 2:
			{
				ychoose:
				cout << endl;
				cout << "Choose Year: " << endl;
				cout << "[1] 2022" << endl;
				cout << "[2] 2023" << endl;
				cout << "[3] 2024" << endl;
				cout << endl;
				cout << "Enter Here: ";
				cin >> year;
				switch(year)
				{
					case 1:
						{
							mchoose:
							cout<<endl;
							cout<<"Choose Month: "<<endl;
							cout<<"[1] November"<<endl;
							cout<<"[2] December"<<endl;
							cout<<endl;
							cout<<"Enter Here: ";
							cin>>month;
							switch(month)
							{
								case 1:
									{
										num = 0;
										num = date(num);
										break;
									}
								case 2:
									{
										num = 4;
										num = date(num);
										break;
									}
								default:
									{
										cout<<endl;
										cout<<"Invalid Input"<<endl;
										system ("pause");
										goto mchoose;
									}
							}
							break;
						}
					case 2:
						{
							num = 8;
							num = fDate(num);
							break;
						}
					case 3:
						{
							num = 60;
							num = fDate(num);
							break;
						}
					default:
						{
							cout << endl;
							cout << "Invalid Input" << endl;
							system ("pause");
							goto ychoose;
						}
				}
				num = num + 88;
				double val1 = b0 + (b1*num);
				double conversion = bg0 + (bg1*val1);
				double pesos = 1 / conversion;
				cout << endl;
				cout << "Prediction: " << endl;
				cout << "USD/PHP: P" << conversion << endl;
				cout << currency <<": $" << pesos << endl;
				system ("pause");
				system ("CLS");
				goto prediction;
				break;
			}
		default:
			{
				cout << endl;
				cout << "Invalid Input" << endl;
				system ("pause");
				goto modes;
			}
	}
	return 0;
}
