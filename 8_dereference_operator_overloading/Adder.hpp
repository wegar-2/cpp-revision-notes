#ifndef ADDER_HPP
#define ADDER_HPP

class Adder {
public:

    /* constructor and destructor */
    Adder();
    Adder(double value);
    Adder(double x, double y);
    ~Adder();
    Adder(const Adder& rhs);

    /* operators */
    Adder& operator=(const Adder& rhs);
    const Adder& operator++();
    const Adder operator++(int flag);
    const Adder& operator--();
    const Adder operator--(int flag);
    Adder operator+(const Adder& rhs);
    Adder operator-(const Adder& rhs);

    /* various functions */
    double GetFirstValue() const;
    double GetSecondValue() const;
    void SetFirstValue(double value);
    void SetSecondValue(double value);
    double GetSum() const;
    double GetAverage() const;
    void PrintObject() const;
    unsigned int GetInstancesNumber() const;


private:
    double* pFirstValue;
    double* pSecondValue;
    static unsigned int instancesCounter;
};

#endif // ADDER_HPP
