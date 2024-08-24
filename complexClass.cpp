#include <iostream>

class Complex {
        float real;
        float img;
    public:
        void setReal(float);
        void setImg(float);
        float getReal();
        float getImg();
        Complex add(Complex);
        Complex sub(Complex);
        void print();
        void setFromUser();

};

void Complex::setFromUser(){
    std::cout << "Enter real number then Imaginary" << std::endl;
    std::cin >> this->real >> this->img;
}
void Complex::setReal(float temp){
    this->real = temp;
}
void Complex::setImg(float temp){
    this->img = temp;
}
float Complex::getReal(){
    return this->real;
}
float Complex::getImg(){
    return this->img;
}

Complex Complex::add(Complex temp){
    Complex res;
    res.real = this->real + temp.real;
    res.img = this->img + temp.img;
    return res;
}

Complex Complex::sub(Complex temp){
    Complex res;
    res.real = this->real - temp.real;
    res.img = this->img - temp.img;
    return res;
}
void Complex::print(){
    if (this->img < 0)
        std::cout << this->real << " - j" << labs(this->img) << std::endl;
    else
        std::cout << this->real << " + j" << this->img << std::endl;
}
int main(){
    Complex num1, num2, result;
    char op;
    num1.setFromUser();
    num2.setFromUser();
    ope:
    std::cout << "Enter the operator: ( + or - )" << std::endl;
    std::cin >> op;
    if (op == '-')
        result = num1.sub(num2);
    else if (op == '+')
        result = num1.add(num2);
    else {
        std::cout << "Wrong operator!" << std::endl;
        goto ope;
    }
    result.print();
    }