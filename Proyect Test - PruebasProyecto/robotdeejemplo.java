import P1.java;
class RobotdeEjemplo extends prueba{
int c;
public int main (){
    Imprimir(this.b[2]);
    Mover(1);
}
public void Chocar()
{  
  this.a=0;
  Girar(45);
  Imprimir(this.a);
  } 
public void Detectado()
{

  this.a=0;
  c=0;
  while(c<5)
  {
    Disparar(1);
    //Girar(1);
    this.c++;
  }

  while(this.a<45)
  {
  Girar(this.a);
  this.a++;
  }
  Mover(12);
}
}