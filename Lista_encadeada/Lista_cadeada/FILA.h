
#ifndef FILA_H
#define FILA_H

struct no{
    
    int valor;
    
    struct no *prox{
        
    };
  
};

class FILA {
  
public:
    FILA();
    FILA(const FILA& orig);
    virtual ~FILA();
    
     no  *inicio, *fim, *aux;
    
    
    void inserir();
    void Menu();
    void remover();
    void listar();
    void pesquisar();
    
private:

};

#endif /* FILA_H */

