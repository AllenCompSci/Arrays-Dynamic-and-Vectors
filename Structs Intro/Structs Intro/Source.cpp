#include <iostream>

using namespace std;

void main() {
	//Structures i.e. records
	struct Car {
		string Make;
		string Color;
		string Model;
		int Year;
		int NumOccup;
		double MPG;
		double TopSpeed;
		bool isConvertible;
		bool isAWFULMIATA;
	    
		void init(string ma, string co, string mo, int yy, int nOcc, double mpg, double tSpeed, bool isCon, bool isAWFUL) {
			Make = ma;
			Color = co;
			Model = mo;
			Year = yy;
			NumOccup = nOcc;
			MPG = mpg;
			TopSpeed = tSpeed;
			isConvertible = isCon;
			isAWFULMIATA = isAWFUL;
		}
		bool isFaster(double speedOther) {
			return TopSpeed > speedOther;
		}
		bool isFaster(Car t) {
			return TopSpeed > t.TopSpeed;
		}
	} clarksMiata, batmobile;
	clarksMiata.isAWFULMIATA = true;
	clarksMiata.Make = "Mzd";
	clarksMiata.Color = "White";
	clarksMiata.Model = "mxv";
	clarksMiata.Year = 1995;
	clarksMiata.isConvertible = true;
	clarksMiata.MPG = 21;
	clarksMiata.NumOccup = 2;
	clarksMiata.TopSpeed = .125;
	Car truck;
	truck.init("Ford", "Black", "F Series", 2000, 3, 17, .119, false, false);



	system("pause");
}