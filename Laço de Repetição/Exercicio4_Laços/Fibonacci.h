#ifndef FIBONACCI_H
#define FIBONACCI_H

class Fibonacci {
    
    int termos[20];
    
public:
    Fibonacci();
    Fibonacci(const Fibonacci& orig);
    virtual ~Fibonacci();
    
    void calcularSerie();
    void mostrarSerie(); 
    
private:

};

#endif /* FIBONACCI_H */

