#include<iostream>

using namespace std;

class Car // Class Car
{
	private:
		int Model;
		float Price;
		float MaxSpeed;
		
	public:
		Car() : Model(1980), Price(500.25), MaxSpeed(80)
		{
			cout<<"ALPHA"<<endl;
		}
		
		Car(int m) : Model(m), Price(600.75), MaxSpeed(90)
		{
			cout<<"BRAVO"<<endl;
		}
		
		Car(int m, float p) : Model(m), Price(p), MaxSpeed(90)
		{
			cout<<"CHARLIE"<<endl;
		}
		
		Car(int m, float p, float ms) : Model(m), Price(p), MaxSpeed(ms)
		{
			cout << "DELTA"<<endl;
		}
		
		void display()
		{
			cout << Model;
			cout << " , " << Price;
			cout << " , " << MaxSpeed;
			cout << endl;
		}
};

main()
{
	Car car1(2015,9234.22,150); // 1st Car Object
	Car car2(car1); // 2nd Car Object
	
	car1.display();
	car2.display();
}
