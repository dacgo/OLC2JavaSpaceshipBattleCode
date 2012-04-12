int T83,T82,T81,T80,ptr,T9,T8,T7,T6,T5,ptk,T4,T3,T2,T19,T1,T18,T17,T16,T15,T79,T14,T78,T13,T77,T12,T76,T11,T75,T10,T74,T73,T72,T71,T70,T69,T68,T67,T66,T65,T64,T63,T62,T61,T60,T114,T113,T112,T111,T110,T59,T58,T57,T56,T55,T54,T53,T52,T51,T50,T109,T108,T107,T106,T105,T104,T103,T102,T101,T100,T49,T48,T47,T46,T45,T44,T43,T42,T41,T40,T39,T38,T37,T36,T35,T99,T34,T98,T33,T97,T32,T96,T31,T95,T30,T94,T93,T92,T91,T90,T29,T28,T27,T26,T25,T89,T24,T88,T23,T87,T22,T86,T21,T85,T20,T84;
int stack[1000];
int heap[1000];
void RobotdeEjemplo_main_(){
ptr=20;
ptk=6;
T87=ptr+4;
T88=stack[T87];
stack[T87]=10;

T90= ptr +8;
T91=T90+2;
stack[T91]=1;


ptr=ptr+8;
Girar();
ptr=ptr-8;


T92=ptr+4;
T93=stack[T92];
T95= ptr +8;
T96=T95+2;
stack[T96]=T93;


ptr=ptr+8;
Imprimir();
ptr=ptr-8;


L13:
 ; 
 }
void RobotdeEjemplo_Chocar_(){

T98= ptr +4;
T99=T98+2;
stack[T99]=45;


ptr=ptr+4;
Girar();
ptr=ptr-4;


T101= ptr +4;
T102=T101+2;
stack[T102]=10;


ptr=ptr+4;
Mover();
ptr=ptr-4;


T104= ptr +4;
T105=T104+2;
stack[T105]=1;


ptr=ptr+4;
Disparar();
ptr=ptr-4;


L14:
 ; 
 }
void RobotdeEjemplo_Detectado_(){

T107= ptr +4;
T108=T107+2;
stack[T108]=10;


ptr=ptr+4;
Disparar();
ptr=ptr-4;


T110= ptr +4;
T111=T110+2;
stack[T111]=1;


ptr=ptr+4;
Mover();
ptr=ptr-4;


T113= ptr +4;
T114=T113+2;
stack[T114]=45;


ptr=ptr+4;
Girar();
ptr=ptr-4;


L15:
 ; 
 }
