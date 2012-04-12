int T130,T29,T28,T27,T26,T25,T24,T23,T9,T22,T8,T21,T7,T129,T20,T6,T128,T5,T127,T4,T126,T3,T125,T2,T124,T1,T123,T122,T121,T120,T19,T18,T17,T16,T15,T14,T13,T12,T11,T119,T10,T118,T117,T116,T115,T114,T113,T112,T111,T110,T109,T108,T107,T106,T105,T104,T103,T102,T101,T100,ptr,ptk,T99,T98,T97,T96,T95,T94,T93,T92,T91,T90,T89,T88,T87,T86,T85,T84,T83,T82,T81,T80,T79,T78,T77,T76,T75,T74,T73,T72,T71,T70,T69,T68,T67,T66,T65,T64,T63,T62,T61,T60,T166,T165,T164,T163,T162,T161,T160,T59,T58,T57,T56,T55,T54,T53,T52,T51,T159,T50,T158,T157,T156,T155,T154,T153,T152,T151,T150,T49,T48,T47,T46,T45,T44,T43,T42,T41,T149,T40,T148,T147,T146,T145,T144,T143,T142,T141,T140,T39,T38,T37,T36,T35,T34,T33,T32,T31,T139,T30,T138,T137,T136,T135,T134,T133,T132,T131;
int stack[1000];
int heap[1000];
void prueba2_prueba2_(){
T84=ptr+2;
T85=stack[T84];
stack[T84]=10;

L13:
 ; 
 }
void prueba_prueba_(){
T86=ptr+2;
T87=stack[T86];
stack[T86]=0;

L14:
 ; 
 }
void prueba_suma__int_int(){
T88=ptr+2;
T89=stack[T88];
T90=ptr+4;
T91=stack[T90];
T92=T89+T91;

T93=ptr+0;
stack[T93]=T92;
goto L15;

L15:
 ; 
 }
void RobotdeEjemplo_main_(){
ptr=20;
ptk=24;


T94=ptr+2;
T95=stack[T94];
T96=T95+2;
T97=heap[T96];
T98=T96+2;
T99=heap[T98];
T101= ptr +4;
T102=T101+2;
stack[T102]=T99;


ptr=ptr+4;
Imprimir();
ptr=ptr-4;


T104= ptr +4;
T105=T104+2;
stack[T105]=1;


ptr=ptr+4;
Mover();
ptr=ptr-4;


L16:
 ; 
 }
void RobotdeEjemplo_Chocar_(){
T106=ptr+2;
T107=stack[T106];
T108=T107+0;
T109=heap[T108];
heap[T108]=0;

T111= ptr +4;
T112=T111+2;
stack[T112]=45;


ptr=ptr+4;
Girar();
ptr=ptr-4;


T113=ptr+2;
T114=stack[T113];
T115=T114+0;
T116=heap[T115];
T118= ptr +4;
T119=T118+2;
stack[T119]=T116;


ptr=ptr+4;
Imprimir();
ptr=ptr-4;


L17:
 ; 
 }
void RobotdeEjemplo_Detectado_(){
T120=ptr+2;
T121=stack[T120];
T122=T121+0;
T123=heap[T122];
heap[T122]=0;
T124=stack[2];
T125=T124+22;
T126=heap[T125];
heap[T125]=0;

L19:
T127=stack[2];
T128=T127+22;
T129=heap[T128];
T130=0;
if (T129<5) goto L20;
 goto L21;
L20: 

T132= ptr +4;
T133=T132+2;
stack[T133]=1;


ptr=ptr+4;
Disparar();
ptr=ptr-4;

T134=ptr+2;
T135=stack[T134];
T136=T135+22;
T137=heap[T136];
T138=T137+1;
T139=ptr+2;
T140=stack[T139];
T141=T140+22;
T142=heap[T141];
heap[T141]=T138;
goto L19;
L21:

L22:
T143=ptr+2;
T144=stack[T143];
T145=T144+0;
T146=heap[T145];
T147=0;
if (T146<45) goto L23;
 goto L24;
L23: 

T148=ptr+2;
T149=stack[T148];
T150=T149+0;
T151=heap[T150];
T153= ptr +4;
T154=T153+2;
stack[T154]=T151;


ptr=ptr+4;
Girar();
ptr=ptr-4;

T155=ptr+2;
T156=stack[T155];
T157=T156+0;
T158=heap[T157];
T159=T158+1;
T160=ptr+2;
T161=stack[T160];
T162=T161+0;
T163=heap[T162];
heap[T162]=T159;
goto L22;
L24:

T165= ptr +4;
T166=T165+2;
stack[T166]=12;


ptr=ptr+4;
Mover();
ptr=ptr-4;


L18:
 ; 
 }
