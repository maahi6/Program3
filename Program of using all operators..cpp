
  /*
  @Title: Operators in cpp
  @Written by: Noor Fatima.
  */
  
  #include<iostream>
  using namespace std;
  int main()
  
  
  {
  	
      	// "Arithmetic Operators"
      	
    int a=20;
	int b=30;  	
  	
  	cout << "Result of Arithmetic Operators are:" << endl;
  	cout << "Addition of a and b is=" << a+b << endl;
  	cout << "Subtraction of a and b is=" << a-b << endl;
  	cout << "Multiplication of a and b is=" << a*b << endl;
	cout << "Division of a over b is=" << a/b << endl;
	cout << "Modulus of a over b is=" << a%b << endl;
	cout << "Increase the value of a by 1 using post increament=" << a++ << endl;
	cout << "Increase the value of a by 1 using pre increament=" << ++a << endl;
	cout << "Decrease the value of b by 1 using post decreament=" << b-- << endl;
	cout << "Decrease the value of b by 1 using pre decreament=" <<--b << endl;
	cout << "******************" << endl;
	
	    // "Assignment Operator"
	    
	cout << "Result of Assignment and Compound Assignment Operators are:" << endl;
	int marks=10;
	cout << "the marks are=" << marks << endl;
	  
	    // "Compound Assignment and Assignment Operator"
	marks += 10;
    marks -= 10;
    marks *= 2;
    marks /= 2;
    marks %= 2;
	    
	    
    	// "Comparison Operator"
    	
    cout << "Result of Comparison Operators are:" << endl;
    int c=30;
    int d=40;
    
	cout <<	(c<d) << endl;
	cout << (c>d) << endl;
	cout << (c<=d) << endl;
	cout << (c>=d) << endl;
	cout << (c==d) << endl;
	cout << (c!=d) << endl;
	  
	  
    	// "Logical Operator"
    	
    bool isStudent = true;	
    bool isGirl =	true;
    
    cout << "Result of Logical Operators are:" << endl;
    cout << (isStudent &&  isGirl) << endl;
    cout << (isStudent ||  isGirl) << endl;
    cout << !(isStudent) << endl;
    
    return 0;
    
	}
    
    
    
    
    
    
    
	
	
	
	    
	    
	  
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
