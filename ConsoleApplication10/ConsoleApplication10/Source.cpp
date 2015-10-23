
#include <iostream>
using namespace std;
class Move
{
private:
	double x;
	double y;
public:
	void Move1(double a , double b ) {
		double x = a;
		double y = b;
		}	                                        
	void showmove() const {
		cout << "x=" << x << endl;
		cout << "y=" << y << endl;
	}                                            
	/*void add(const Move & m) const{
		 x +=m ;
		y += m;
		move1(a, b);
  }*/
	void reset(double a = 0, double b = 0) {
		x = a;
		y = b;
	}
};
                                                
void main() {

	system("pause");
	Move opject;
	opject.Move1(2, 3);
	opject.showmove();
	//opject.add(const Move & 8);
}
