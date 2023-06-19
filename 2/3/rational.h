#pragma once
class rational {
private:
    int a, b;

public:
    rational(int a1, int b1);
    rational();
    void set(int a1, int b1);
    void inc();
    void show();
    rational operator+(rational& r);
    friend rational operator-(rational& r1, rational& r2);
    rational operator++(const int);
    bool operator ==(rational& r);
    bool operator >(rational& r);
    rational operator =(rational& r);
};
