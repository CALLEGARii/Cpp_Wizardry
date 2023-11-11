#ifndef CPLANO_H
#define CPLANO_H

class cPlano {
public:

//aqui é atributos
int x1, y1, x2, y2;



cPlano();
cPlano(const cPlano& orig);
virtual ~cPlano();

//aqui eu coloco as atividades, métodos

void lerPontos(); //void pq absorve dados
float calcularDE(); //float pq fornece um float

private:

};

#endif /* CPLANO_H */


