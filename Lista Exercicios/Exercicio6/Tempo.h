#ifndef TEMPO_H
#define TEMPO_H

class Tempo {
    
    int horas=0;
    int segundos=0;
    int minutos=0;
    int segundos_restantes=0;
    
    
public:
    Tempo();
    Tempo(const Tempo& orig);
    virtual ~Tempo();
    
    void Ler_Dados();
    void tempo();
    void Mostrar();
    
private:

};

#endif /* TEMPO_H */

