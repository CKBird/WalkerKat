//This is going to have all the class declarations, includes, etc

#include <iostream>

using namespace std;

class Walker {
	public: //accessible to all //from useWalker.cpp
		Walker();
		~Walker();
		void move_by(int dx, int dy);
		inline void set_x(int input)	{ x = input; }
		inline void set_y(int input)	{ y = input; }
		inline int get_x()				{return x;} //bring from private to public
		inline int get_y()				{return y;} //bring from private to public
		
		friend istream& operator>> (istream& input, Walker& w) {
			int x;
			input >> x;
			w.set_x(x);
			input >> x;
			w.set_y(x);
			return input;
		};
		
		friend ostream& operator<< (ostream& output, Walker& w) {
			output << "(" << w.get_x() << ", " << w.get_y() << ")";
			return output;
		};
		
	private: //accessible in class only
		int x; //starting x pos
		int y; //starting y pos
};
