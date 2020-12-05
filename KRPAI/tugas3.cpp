class A{
private:
	int X;
public:
	A(){
		X = 0;an
	}
};

class B{
private:
	A a;
public:
	B(){
		a.X = 5;
	}
};
