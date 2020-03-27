class Rectangle
{
public:
	Rectangle(int, int);

	void setLength(int);
	int getLength();

	void setWidth(int);
	int getWidth();

	int volume();

private:
	int Length;
	int Width;

};