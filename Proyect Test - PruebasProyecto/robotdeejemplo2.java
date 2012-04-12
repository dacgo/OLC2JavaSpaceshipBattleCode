
class RobotdeEjemplo{
int a;
int b;
int c;
public int main (){
    prueba hola;
    int a=10;
    Girar(1);
    Imprimir(a);
    //Girar(90);
    //Disparar(1);
  }
public void Chocar()
{
   Girar(45);
   Mover(10);
   Disparar(1);
}
public void Detectado()
{
  Disparar(10);
  Mover(1);
  Girar(45);
}
}