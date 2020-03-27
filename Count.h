
class Count

{
	friend void setX(Count&, int);

public:
	Count()
		:x(0)
{

}

	void print() const;
	
private:
	int x;

};