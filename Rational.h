
class Rational
{
public:
	Rational();
    Rational(int, int);
        
    void setNumerator(int);
    int getNumerator();
    
    void setDenominator(int);
    int getDenominator();
    
    void add(Rational);
    void subtract(Rational);
    void multiply(Rational);
    void divide(Rational);
	
    void printRational();
    void printFloat();

private:

	int numerator;
	int denominator;
    
    int gcd(int, int);
    void reduce();
};
