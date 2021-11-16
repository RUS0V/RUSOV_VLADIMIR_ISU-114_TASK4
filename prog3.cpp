#include <iostream>
using namespace std;

struct FazzyNumber{
    double a;
    double b;
    double c;
};

struct FazzyNumber obr(FazzyNumber A){
    struct FazzyNumber f;
    f.a = 1.0/A.a;
    f.b = A.b/(A.a*A.a);
    f.c = (A.c)/(A.a*A.a);
    return f;
}

int main(){
    double x, e1, e2;
    cout << "Enter A: " << endl;
    cout << "x = "; 
    cin >> x;
    cout << "e1 = "; 
    cin >> e1;
    cout << "e2 = "; 
    cin >> e2;
    struct FazzyNumber A;
    A.a = x-e1;
    A.b = x;
    A.c = x+e2;
    
    struct FazzyNumber B = obr(A);
    cout << "B(" << B.a << ", " << B.b << ", " << B.c << ")";
    return 0;
}
