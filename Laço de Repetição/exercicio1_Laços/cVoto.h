#ifndef CVOTO_H
#define CVOTO_H
#include <string>
class cVoto {
public:
    cVoto();
    cVoto(const cVoto& orig);
    virtual ~cVoto();
    
    void Menu();
    void Mostrar_Dados(int voto);
    void Calcular_Voto();
    
private:

};

#endif /* CVOTO_H */

