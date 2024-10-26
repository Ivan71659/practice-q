#include <iostream>

using namespace std;

class math{
  private:
    double x;
    double y;
    double z;
  
  public:
    math(double x, double y, double z){
      this-> x = x;
      this-> y = y;
      this-> z = z;
    }

    void get_value(){
      cout << "\n(" << x << ", " << y << ", " << z << ")\n";
    }

    math operator + (math other_value){
      double mathX = x + other_value.x;
      double mathY = y + other_value.y;
      double mathZ = z + other_value.z;
      return math (mathX, mathY, mathZ);
    }

    math operator - (math other_value){
      double mathX = x - other_value.x;
      double mathY = y - other_value.y;
      double mathZ = z - other_value.z;
      return math (mathX, mathY, mathZ);
    }

    math operator * (math other_value){
      double a1 = x;
      double a2 = y;
      double a3 = z;
      double b1 = other_value.x;
      double b2 = other_value.y;
      double b3 = other_value.z;
      
      double mathX = (a2*b3) - (a3*b2);
      double mathY = (a3*b1) - (a1*b3);
      double mathZ = (a1*b2) - (a2*b1);
      return math (mathX, mathY, mathZ);
    }
};

int main () { 

  int x1, x2, y1, y2, z1, z2;

  string ask;
  cout << "what operator (+, -, *) do you chose: ";
  cin >> ask;

  if(ask == "+"){
    cout << "\nEnter information for vector 1:\n";
    cout << "x: ";
    cin >> x1;
    cout << "y: ";
    cin >> y1;
    cout << "z: ";
    cin >> z1;

    cout << "\nEnter information for vector 2:\n";
    cout << "x: ";
    cin >> x2;
    cout << "y: ";
    cin >> y2;
    cout << "z: ";
    cin >> z2;
    
    math add1 = math(x1,y1,z1);
    math add2 = math(x2,y2,z2);
    
    math answer1 = add1 + add2;
    answer1.get_value();
  }

  else if(ask == "-"){
    cout << "\nEnter information for vector 1:\n";
    cout << "x: ";
    cin >> x1;
    cout << "y: ";
    cin >> y1;
    cout << "z: ";
    cin >> z1;

    cout << "\nEnter information for vector 2:\n";
    cout << "x: ";
    cin >> x2;
    cout << "y: ";
    cin >> y2;
    cout << "z: ";
    cin >> z2;

    math sub1 = math(x1,y1,z1);
    math sub2 = math(x2,y2,z2);

    math answer2 = sub1 - sub2;
    answer2.get_value();
  }

  else if(ask == "*"){
    cout << "\nEnter information for vector 1:\n";
    cout << "x: ";
    cin >> x1;
    cout << "y: ";
    cin >> y1;
    cout << "z: ";
    cin >> z1;

    cout << "\nEnter information for vector 2:\n";
    cout << "x: ";
    cin >> x2;
    cout << "y: ";
    cin >> y2;
    cout << "z: ";
    cin >> z2;

    math m1 = math(x1,y1,z1);
    math m2 = math(x2,y2,z2);

    math answer3 = m1 * m2;
    answer3.get_value();
  }

}
