#include <iostream>
#include <string>
//1
#include "Printer.h"
#include "Scanner.h"
#include "MFU.h"
//2
#include "Product.h"
#include "Buy.h"
#include "Check.h"

//hw
//1
#include "Point.h"
#include "Rectangle.h"
#include "Circle.h"
#include "Triangle.h"

//2
#include "Book.h"
#include "VoiceRecord.h"
#include "AudioBook.h"
using namespace std;

int main() 
{
	//practice
	
	//1
	//Printer a;
	//a.printText("Avidikidibi", "printTest.txt",5);
	/*Scanner a;
	a.scanText("Source.cpp");
	cout << a.getText();*/
	/*MFU a;
	a.copyText("Source.cpp", 2);*/
	//2
	//Product a;
	//*Product b("Milk",65,0.5);
	//a.showInfo();
	//b.showInfo();*/
	//Buy b(a, 2);
	//b.showInfo();
	//Check c(b);
	//c.printCheck();


	//HW
	//1 у точки площадь возвращает 0(я не знаю как сделать площадь для точки иначе)
	/*cout << "\nPoint\n";
	Point a, b(10, 21);
	a.showInfo();
	b.showInfo();
	cout << "\nRectangle\n";
	Rectangle r(a,20, 10);
	r.showInfo();
	cout << "\nCircle\n";
	Circle c(a, 12.4);
	c.showInfo();
	cout << "\ntriangle\n";
	Triangle t(a, 30, 30, 40);
	t.showInfo();*/

	//2
	srand(time(0));
	Date a(2000, 4, 9);
	Book bk("Lovecraft G.", "Ktulhu", a);
	//bk.showInfo();

	VoiceRecord vr("Pokemon",200,a);
	//vr.showInfo();

	AudioBook ab(bk, vr, 10);
	ab.showInfo();

	return 0;
}