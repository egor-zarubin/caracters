#include "TXliB.H"



    void drawDeadpool(int x,int y,int BodyColor,int SecondColor,string Eyes,bool Belt,bool Swords,int EyesColor,string Head,int LegSize,double Size,COLORREF BLACK,COLORREF DEADPOOLSHANDS,COLORREF DEADPOOLSBROWN,COLORREF WHITE);
    void drawIceBird(int x,int y,double Size,bool Nose,int BodyColor,string Eyes,int EyesColor,bool Eyebrows,bool Tail,bool Feathe,COLORREF BLACK,COLORREF BIRDSYELLOW,COLORREF BIRDSORANGE,COLORREF BIRDSBROWN);
    void drawMinion(int x,int y,int Suit,bool Glasses,string Eyes,int BodyColor,int EyesColor,double Size,int LegSize,bool Mouth,COLORREF BLACK,COLORREF MINIONSGREY,COLORREF MINIONSBROWN) ;
    void drawKaramelka(int x,int y,int HeadColor,int ArmsColor,int EarsColor,string Arms,string Eyes,int EyesColor,int LegSize,bool Bow, double Size,COLORREF BLACK,COLORREF RED,COLORREF KARAMELKASMOUTH) ;
    void drawHedgehog(int x,int y,bool Niddles,int EyesColor,double Size,bool Glasses,string Eyes,int BodyColor,bool Orange,string Pupil,COLORREF BLACK,COLORREF HEDGEHOGSGLASSIES,COLORREF HEDGEHOGSEYEBROWS,int NiddlesColor,COLORREF ORANGE)  ;
    void drawPlankton(int x,int y,double Size,string Face,string Arms,int BodyColor,int EyesColor,int LegSize, bool Mustache, int EyebrowColor,COLORREF BLACK,COLORREF PUPILPLANKTONSEYE ) ;

    int main()

    {
    txCreateWindow(1600,800);
    txClear();
    CONST COLORREF BLACK = RGB(0,0,0);
    CONST COLORREF WHITE = RGB(255,255,255);
    CONST COLORREF ORANGE = RGB (255,127,0);
    CONST COLORREF DEADPOOLSBLACK = RGB(25,18,24);
    CONST COLORREF DEADPOOLSRED = RGB(184,40,60);
    CONST COLORREF DEADPOOLSBROWN = RGB(68,32,29);
    CONST COLORREF DEADPOOLSHANDS = RGB(80,69,72);
    CONST COLORREF KARAMELKASORANGE = RGB(255,140,0);
    CONST COLORREF KARAMELKASMOUTH = RGB(139,0,0);
    CONST COLORREF KARAMELKASGREY = RGB(105,105,105);
    CONST COLORREF KARAMELKASBROWN = RGB(139,69,19);
    CONST COLORREF RED = RGB(255,0,0);
    CONST COLORREF INSIDEKARAMELKASEAR = RGB(244,164,96);
    CONST COLORREF BIRDSBLUE = RGB(0,191,255);
    CONST COLORREF BIRDSYELLOW = RGB(255,215,0);
    CONST COLORREF BIRDSORANGE= RGB(255,165,0);
    CONST COLORREF BIRDSBROWN = RGB(136,68,40);
    CONST COLORREF HEDGEHOGSBODY = RGB(255,0,255);
    CONST COLORREF HEDGEHOGSEYEBROWS = RGB(199,21,133);
    CONST COLORREF HEDGEHOGSGLASSIES = RGB(128,0,128);
    CONST COLORREF HEDGEHOGSNIDDLES = RGB(138,43,226);
    CONST COLORREF PLANKTON = RGB(46,139,87);
    CONST COLORREF PUPILPLANKTONSEYE = RGB(178,34,34);
    CONST COLORREF PLANKTONSEYE = RGB(255,255,153);
    CONST COLORREF MINIONSSUIT1 = RGB(65,105,225);
    CONST COLORREF MINIONSSUIT2 = RGB (0,128,0);
    CONST COLORREF MINIONSSUIT3 = RGB (143,0,255);
    CONST COLORREF MINIONSSUIT4 = RGB (255,20,147);
    CONST COLORREF MINIONSBROWN = RGB(139,69,19);
    CONST COLORREF MINIONSGREY = RGB(192,192,192);
    CONST COLORREF MINIONSYELLOW = RGB(255,215,0);


    int HedgehogX=900; //863
    int HedgehogY=500; //455
    bool Niddles=TRUE;
    int  HedgehogColorEyes=WHITE;
    double HedgehogSize=1;
    bool HedgehogsGlasses=TRUE;
    string HedgehogEyes="Open";
    int HedgehogBodyColor=HEDGEHOGSBODY;
    bool HedgehogOrange=TRUE;
    string HedgehogPupil="Usual";  // Usual Middle 3 //
    int HedgehogNiddlesColor= HEDGEHOGSNIDDLES;



    int IceBirdX=1100;
    int IceBirdY=600;
    double IceBirdSize=1;
    bool IceBirdNose=TRUE;
    int IceBirdBodyColor=BIRDSBLUE;
    string IceBirdEyes="Open";
    int IceBirdEyesColor=WHITE;
    bool IceBirdEyebrow=TRUE;
    bool IceBirdTail=TRUE;
    bool IceBirdFeather=TRUE;


    int KaramelkaX=945;//945
    int KaramelkaY=160;//160
    int KaramelkaHeadColor=KARAMELKASORANGE;
    int KaramelkaArmsColor=KARAMELKASBROWN;
    int KaramelkaEarsColor=INSIDEKARAMELKASEAR;
    string KaramelkaArms="Down";
    string KaramelkaEyes="Open";
    int KaramelkaEyesColor=WHITE;
    int KaramelkaLegSize=0;
    if(KaramelkaLegSize<-19)
    {KaramelkaLegSize=-19;}
    bool KaramelkaBow=TRUE;
    double KaramelkaSize =1;


    int MinonX=500;
    int MinionY=100;
    int MinionSuit=MINIONSSUIT1;
    bool MinionGlasses=TRUE;
    string MinionlEyes="Open";
    int MinionBodyColor=MINIONSYELLOW;
    int MinionEyesColor=WHITE;
    double MinionSize=1;
    int MinionLegSize=0;
    if(MinionLegSize<-70)
    {MinionLegSize=-70;}
    bool MinionMouth = TRUE;



    int PlanktonX=500;
    int PlanktonY=500;
    double PlanktonSize=1;
    string PlanktonFace="Usual";// Squinted Usual Close//
    string PlanktonArms="Down";
    int PlanktonBodyColor=PLANKTON;
    int PlanktonEyesColor=WHITE;
    int PlanktonLegSize=0;
    if(PlanktonLegSize<-13)
    {PlanktonLegSize=-13;}
    bool PlanktonAntennae=TRUE;
    int PlanktonEyebrowColor=BLACK;


    int DeadpoolX=300;
    int DeadpoolY=300;
    int DeadpoolBodyColor=DEADPOOLSRED;
    int DeadpoolSecondColor=DEADPOOLSBLACK;
    string DeadpoolEyes="Open";
    bool DeadpoolBelt=TRUE;
    bool DeadpoolSwords=TRUE;
    int DeadpoolEyesColor=WHITE;
    string DeadpoolHead="Usual"; // StickMan Usual//
    int DeadpoolLegSize=0;
    if(DeadpoolLegSize<-76)
    {DeadpoolLegSize=-76;}
    double DeadpoolSize=3;




    drawKaramelka(KaramelkaX,KaramelkaY, KaramelkaHeadColor,KaramelkaArmsColor,KaramelkaEarsColor,KaramelkaArms,KaramelkaEyes,KaramelkaEyesColor,KaramelkaLegSize,KaramelkaBow, KaramelkaSize,BLACK,RED,KARAMELKASMOUTH);
    drawHedgehog(HedgehogX,HedgehogY,Niddles,HedgehogColorEyes,HedgehogSize,HedgehogsGlasses, HedgehogEyes,HedgehogBodyColor,HedgehogOrange,HedgehogPupil,BLACK,HEDGEHOGSGLASSIES,HEDGEHOGSEYEBROWS,HedgehogNiddlesColor,ORANGE);
    drawMinion(MinonX,MinionY,MinionSuit,MinionGlasses,MinionlEyes,MinionBodyColor,MinionEyesColor,MinionSize,MinionLegSize, MinionMouth,BLACK,MINIONSGREY,MINIONSBROWN);
    drawPlankton(PlanktonX,PlanktonY,PlanktonSize,PlanktonFace,PlanktonArms,PlanktonBodyColor,PlanktonEyesColor, PlanktonLegSize,PlanktonAntennae,PlanktonEyebrowColor,BLACK,PUPILPLANKTONSEYE);
    drawDeadpool(DeadpoolX,DeadpoolY,DeadpoolBodyColor,DeadpoolSecondColor,DeadpoolEyes,DeadpoolBelt,DeadpoolSwords,DeadpoolEyesColor,DeadpoolHead,DeadpoolLegSize,DeadpoolSize,BLACK,DEADPOOLSHANDS,DEADPOOLSBROWN,WHITE);
    drawIceBird(IceBirdX,IceBirdY,IceBirdSize,IceBirdNose,IceBirdBodyColor,IceBirdEyes,IceBirdEyesColor,IceBirdEyebrow,IceBirdTail,IceBirdFeather,BLACK,BIRDSYELLOW,BIRDSORANGE,BIRDSBROWN);




    return 0;
}

    void drawDeadpool(int x,int y,int BodyColor,int SecondColor,string Eyes,bool Belt,bool Swords,int EyesColor,string Head,int LegSize,double Size,COLORREF BLACK,COLORREF DEADPOOLSHANDS,COLORREF DEADPOOLSBROWN, COLORREF WHITE)
    {
    txSetColor(BLACK);
    txSetFillColor(BodyColor);
    txArc(x-38*Size, y-79*Size, x+22*Size, y-39*Size, 25, 130);
    txArc(x-43*Size, y+1*Size, x+12*Size, y-79*Size, 110, 165);
    txArc(x-28*Size, y+1*Size, x+27*Size, y-79*Size, 265, 165);
    txLine(x-15*Size,y,x,y);
    if(Head=="Usual")
    {
    txFloodFill(x-9*Size,y-41*Size);
    txSetFillColor(SecondColor);
    POINT LeftPartWithEye [5]={{x-28*Size,y-59*Size},{x-13*Size,y-54*Size},{x-8*Size,y-41*Size},{x-28*Size,y-19*Size},{x-31*Size,y-27*Size},};
    txPolygon(LeftPartWithEye, 5);
    POINT RightPartWithEye [5]={{x+11*Size,y-59*Size},{x-4*Size,y-54*Size},{x-7*Size,y-41*Size},{x+11*Size,y-19*Size},{x+14*Size,y-27*Size},};
    txPolygon(RightPartWithEye, 5);
     if(Eyes=="Close")
    {
    txEllipse (x-26*Size,y-38*Size ,x-15*Size, y-44*Size);
    txEllipse (x-2*Size, y-38*Size, x+9*Size, y-44*Size);
    }
    if(Eyes=="Open")
    {
    txSetFillColor( EyesColor);
    txEllipse (x-26*Size,y-38*Size ,x-15*Size, y-44*Size);
    txEllipse (x-2*Size, y-38*Size, x+9*Size, y-44*Size);
    }
    }
    if(Head=="StickMan")
    {
    txSetFillColor( EyesColor);
    txCircle(x+4*Size,y-41*Size,12*Size);
    txCircle(x-20*Size,y-41*Size,12*Size);
    txSetFillColor(BLACK);
    txCircle(x+4*Size,y-41*Size,5*Size);
    txCircle(x-20*Size,y-41*Size,5*Size);
    txArc(x-35*Size,y-15*Size,x+14*Size,y-32*Size,190,160);
    }
    txSetFillColor(BodyColor);
    txLine(x-19*Size,y+10*Size,x-15*Size,y);
    txLine(x,y,x+5*Size,y+10*Size);
    txLine(x-44*Size,y+10*Size,x+31*Size,y+10*Size);


    txArc(x-32*Size,y+34*Size, x-56*Size, y+10*Size, 90, 60);
    txLine(x-44*Size,y+34*Size,x-78*Size,y+134*Size);
    txLine(x-54*Size,y+14*Size,x-90*Size,y+134*Size);

    txLine(x-81*Size,y+153*Size,x-81*Size,y+144*Size);
    txLine(x-44*Size,y+34*Size,x-44*Size,y+134*Size);
    txLine(x-44*Size,y+34*Size,x-68*Size,y+54*Size) ;
    txLine(x-68*Size,y+104*Size,x-86*Size,y+114*Size) ;
    txRectangle(x-90*Size,y+134*Size,x-77*Size,y+154*Size);
    txArc(x+19*Size,y+34*Size, x+43*Size, y+10*Size, 30,60);

    txLine(x+38*Size,y+12*Size,x+75*Size,y+134*Size);
    txRectangle(x+63*Size,y+134*Size,x+76*Size,y+154*Size);



    txLine(x+67*Size,y+153*Size,x+67*Size,y+144*Size);
    txLine(x+72*Size,y+153*Size,x+72*Size,y+144*Size);

    txLine(x-86*Size,y+153*Size,x-86*Size,y+144*Size );
    txLine(x-82*Size,y+153*Size,x-82*Size,y+144*Size );

    txLine(x+30*Size,y+34*Size,x+63*Size,y+134*Size);
    txLine(x+30*Size,y+34*Size,x+30*Size,y+134*Size);
    txLine(x+30*Size,y+34*Size,x+51*Size,y+54*Size) ;
    txLine(x+52*Size,y+104*Size,x+70*Size,y+114*Size) ;

    POINT RightLeg [7]={{x-44*Size,y+134*Size},{x-44*Size,y+(234+LegSize)*Size},{x-64*Size,y+(234+LegSize)*Size},{x-68*Size,y+(238+LegSize)*Size},{x-68*Size,y+(248+LegSize)*Size},{x-28*Size,y+(248+LegSize)*Size},{x-28*Size,y+134*Size}};
    txPolygon(RightLeg, 7);
    POINT LeftLeg [7]={{x+30*Size,y+134*Size},{x+30*Size,y+(234+LegSize)*Size},{x+50*Size,y+(234+LegSize)*Size},{x+54*Size,y+(238+LegSize)*Size},{x+54*Size,y+(248+LegSize)*Size},{x+14*Size,y+(248+LegSize)*Size},{x+14*Size,y+134*Size}};
    txPolygon(LeftLeg, 7);
    txLine(x+30*Size,y+134*Size,x-44*Size,y+134*Size);

    txLine(x-7*Size,y+54*Size,x-7*Size,y+99*Size);
    txLine(x-27*Size,y+69*Size,x+13*Size,y+69*Size);
    txLine(x-27*Size,y+84*Size,x+13*Size,y+84*Size);

    txLine(x-35*Size,y+10*Size,x-35*Size,y+134*Size);
    txLine(x-35*Size,y+134*Size,x-35*Size,y+(210+LegSize)*Size);
    txLine(x-35*Size,y+(210+LegSize)*Size,x-28*Size,y+(215+LegSize)*Size);

    txLine(x+20*Size,y+10*Size,x+20*Size,y+134*Size);
    txLine(x+20*Size,y+134*Size,x+20*Size,y+(210+LegSize)*Size);
    txLine(x+20*Size,y+(210+LegSize)*Size,x+13*Size,y+(215+LegSize)*Size);

    txLine(x-44*Size,y+(234+LegSize)*Size,x-28*Size,y+(248+LegSize)*Size);
    txLine(x+30*Size,y+(234+LegSize)*Size,x+14*Size,y+(248+LegSize)*Size);

    txSetFillColor(BodyColor);
    txFloodFill(x-8*Size,y+121*Size);
    txFloodFill(x-78*Size,y+101*Size);
    txFloodFill(x+62*Size,y+101*Size);

    txFloodFill(x-12*Size,y+1*Size);
    txSetFillColor(SecondColor);
    txFloodFill(x-78*Size,y+111*Size);
    txFloodFill(x+62*Size,y+111*Size);
    txFloodFill(x-38*Size,y+101*Size);
    txFloodFill(x+22*Size,y+101*Size);

    txFloodFill(x-38*Size,y+135*Size);
    txFloodFill(x+22*Size,y+135*Size);

    txSetFillColor(BLACK);
    txFloodFill(x-38*Size,y+(242+LegSize)*Size);
    txFloodFill(x+22*Size,y+(242+LegSize)*Size);
    txSetFillColor(DEADPOOLSHANDS) ;
    txFloodFill(x-81*Size,y+143*Size);
    txFloodFill(x+72*Size,y+143*Size);
    if(Belt)
    {
    txSetColor(DEADPOOLSBROWN);
    txSetFillColor(DEADPOOLSBROWN);
    txRectangle(x+30*Size,y+119*Size,x-44*Size,y+109*Size);
    txSetColor(BodyColor);
    txSetFillColor(BLACK);
    txCircle(x-7*Size,y+114*Size,10*Size);
    txSetColor(WHITE);
    txSetFillColor(WHITE);
    txEllipse (x-12*Size, y+117*Size, x-2*Size,y+111*Size);
    txSetColor(BLACK);
    txLine(x-8*Size,y+122*Size,x-8*Size,y+104*Size);
    txLine(x-7*Size,y+122*Size,x-7*Size,y+104*Size);
    }
    if(Swords)
    {
    txSetFillColor(DEADPOOLSHANDS) ;
    POINT RightSword [4]={{x+13*Size,y+10*Size},{x+34*Size,y-27*Size},{x+36*Size,y-21*Size},{x+18*Size,y+10*Size}};
    txPolygon(RightSword,4);
    POINT LeftSword [4]={{x-27*Size,y+10*Size},{x-48*Size,y-27*Size},{x-50*Size,y-21*Size},{x-32*Size,y+10*Size}};
    txPolygon(LeftSword,4);
    }
    }

    void drawIceBird(int x,int y,double Size,bool Nose,int BodyColor,string Eyes,int EyesColor,bool Eyebrows,bool Tail,bool Feather,COLORREF BLACK,COLORREF BIRDSYELLOW,COLORREF BIRDSORANGE,COLORREF BIRDSBROWN)
    {
    txSetColor(BLACK);
    txSetFillColor(BodyColor);
    txRectangle(x,y,x+100*Size,y-100*Size);
    if(Eyes=="Open")
    {
    txSetFillColor(EyesColor);
    txCircle(x+38*Size,y-52*Size,13*Size);
    txCircle(x+67*Size,y-52*Size,13*Size);
    txSetFillColor(BLACK);
    txCircle(x+41*Size,y-52*Size,5*Size);
    txCircle(x+70*Size,y-52*Size,5*Size);
    }
    if(Eyes=="Close")
    {
    txSetFillColor(BodyColor);
    txCircle(x+38*Size,y-52*Size,13*Size);
    txCircle(x+67*Size,y-52*Size,13*Size);
    }
    txSetFillColor(BIRDSYELLOW);
    POINT BirdsNose[3]={{x+50*Size,y-50*Size},{x+120*Size,y-35*Size},{x+30*Size,y-35*Size}} ;
    txPolygon(BirdsNose , 3);
    txSetFillColor(BIRDSORANGE);
    if(Nose==TRUE)
    {
    POINT Birds2Nose[3]={{x+50*Size,y-20*Size},{x+95*Size,y-35*Size},{x+35*Size,y-35*Size}} ;
    txPolygon(Birds2Nose , 3);
    }
    else{
    POINT Birds2Nose[3]={{x+49*Size,y-20},{x+94*Size,y-22*Size},{x+35*Size,y-35*Size}} ;
    txPolygon(Birds2Nose , 3);
     }
    if(Feather)
    {
    txSetFillColor(BodyColor);
    POINT SecondFeather[4]={{x+47*Size,y-100*Size},{x+54*Size,y-130*Size},{x+44*Size,y-135*Size},{x+40*Size,y-100*Size}} ;
    txPolygon( SecondFeather, 4);
    POINT FirstFeather[4]={{x+28*Size,y-100*Size},{x+26*Size,y-118*Size},{x+33*Size,y-115*Size},{x+35*Size,y-100*Size}} ;
    txPolygon( FirstFeather, 4);
    }
    if(Tail)
    {
    txSetFillColor(BodyColor);
    POINT FirstTail[4]={{x,y-12*Size},{x-20*Size,y-5*Size},{x-24*Size,y-15*Size},{x,y-22*Size}} ;
    txPolygon( FirstTail, 4);
    POINT SecondTail[4]={{x,y-22*Size},{x-14*Size,y-25*Size},{x-18*Size,y-35*Size},{x,y-32*Size}} ;
    txPolygon( SecondTail, 4);
    }
    if(Eyebrows)
    {
    txSetFillColor(BIRDSBROWN);
    POINT LeftEyebrow[4]={{x+50*Size,y-67*Size},{x+50*Size,y-72*Size},{x+3*Size,y-77*Size},{x+3*Size,y-70*Size}} ;
    txPolygon(LeftEyebrow, 4);
    POINT RightEyebrow[4]={{x+53*Size,y-67*Size},{x+53*Size,y-72*Size},{x+96*Size,y-77*Size},{x+96*Size,y-70*Size}} ;
    txPolygon( RightEyebrow, 4);
    }
    }

    void drawMinion(int x,int y,int Suit,bool Glasses,string Eyes,int BodyColor,int EyesColor,double Size,int LegSize,bool Mouth,COLORREF BLACK,COLORREF MINIONSGREY,COLORREF MINIONSBROWN)
    {
    txSetColor( BodyColor);
    txSetFillColor( BodyColor);
    txCircle(x+50*Size,y,50*Size);
    txSetFillColor(Suit);
    txSetColor(Suit);
    txRectangle(x+17*Size,(y+165+LegSize)*Size,x+28*Size,y+137*Size);
    txRectangle(x+84*Size,(y+165+LegSize)*Size,x+73*Size,y+137*Size);
    txCircle(x+50*Size,y+100*Size,50*Size);
    txSetColor(BLACK);
    txSetFillColor( BodyColor);
    txRectangle(x,y,x+100*Size,y+100*Size);
    txSetColor(Suit);
    txSetFillColor(Suit);
    txRectangle(x+17*Size,y+75*Size,x+83*Size,y+135*Size);
    txSetColor(BLACK);
    txSetFillColor(BLACK);
   if(Glasses)
   {
    txLine(x,y+15*Size,x+100*Size,y+15*Size);
    txFloodFill(x+1*Size,y+14*Size);
    txSetFillColor(MINIONSGREY);
    txCircle(x+27*Size,y+8*Size,22*Size);
    txCircle(x+73*Size,y+8*Size,22*Size);
    }
    if(Eyes=="Open")
    {
    txSetFillColor(EyesColor);
    txCircle(x+27*Size,y+8*Size,17*Size);
    txCircle(x+73*Size,y+8*Size,17*Size);
    txSetFillColor(MINIONSBROWN);
    txCircle(x+28*Size,y+8*Size,7*Size);
    txCircle(x+71*Size,y+8*Size,7*Size);
    txSetFillColor(BLACK);
    txCircle(x+28*Size,y+8*Size,3*Size);
    txCircle(x+71*Size,y+8*Size,3*Size);
    }
    if(Eyes=="Close")
    {
    txSetFillColor( BodyColor);
    txCircle(x+27*Size,y+8*Size,17*Size);
    txCircle(x+73*Size,y+8*Size,17*Size);
    }
    txSetFillColor(Suit);
    txSetColor(Suit);
    POINT LeftStrap [4]={{x+17*Size,y+75*Size},{x+17*Size,y+85*Size},{x,y+65*Size},{x,y+55*Size}} ;
    txPolygon (LeftStrap ,4);
    POINT RightStrap [4]={{x+82*Size,y+75*Size},{x+82*Size,y+85*Size},{x+99*Size,y+65*Size},{x+99*Size,y+55*Size}} ;
    txPolygon (RightStrap ,4);


    txSetFillColor(BLACK);
    txSetColor(BLACK);
    if(Mouth)
    {
    txArc(x+17*Size,y+60*Size,x+83*Size,y+40*Size,190,160);
    }
    if(!Mouth)
    {
    txArc(x+17*Size,y+60*Size,x+83*Size,y+40*Size,10,160);
    }
    txCircle(x+7*Size,(y+170+LegSize)*Size,5*Size);
    txLine(x+17*Size,(y+165+LegSize)*Size,x+7*Size,(y+165+LegSize)*Size);
    txLine(x+7*Size,(y+174+LegSize)*Size,x+27*Size,(y+174+LegSize)*Size);
    txLine(x+27*Size,(y+174+LegSize)*Size,x+27*Size,(y+142+LegSize)*Size);

    txCircle(x+93*Size,(y+170+LegSize)*Size,5*Size);
    txLine(x+83*Size,(y+165+LegSize)*Size,x+93*Size,(y+165+LegSize)*Size);
    txLine(x+93*Size,(y+174+LegSize)*Size,x+73*Size,(y+174+LegSize)*Size);
    txLine(x+73*Size,(y+174+LegSize)*Size,x+73*Size,(y+142+LegSize)*Size);


    txSetFillColor(BLACK);
    txLine(x,y+75*Size,x-20*Size,y+125*Size);
    txLine(x,y+85*Size,x-20*Size,y+135*Size);
    txCircle(x-20*Size,y+135*Size,10*Size);
    txCircle(x-20*Size,y+144*Size,5*Size);
    txCircle(x-29*Size,y+135*Size,5*Size);
    txCircle(x-27*Size,y+144*Size,5*Size);
    txSetFillColor( BodyColor);
    txFloodFill(x-10*Size,y+105*Size);

    txSetFillColor(BLACK);
    txLine(x+100*Size,y+75*Size,x+120*Size,y+125*Size);
    txLine(x+100*Size,y+85*Size,x+120*Size,y+135*Size);
    txCircle(x+120*Size,y+135*Size,10*Size);
    txCircle(x+120*Size,y+144*Size,5*Size);
    txCircle(x+128*Size,y+135*Size,5*Size);
    txCircle(x+127*Size,y+144*Size,5*Size);
    txSetFillColor( BodyColor);
    txFloodFill(x+101*Size,y+84*Size);


    txSetFillColor(BLACK);
    txFloodFill(x+17*Size,(y+170+LegSize)*Size);
    txFloodFill(x+83*Size,(y+170+LegSize)*Size);
    }

    void drawPlankton(int x,int y,double Size,string Face,string Arms,int BodyColor,int EyesColor,int LegSize, bool Antennae, int EyebrowColor,COLORREF BLACK,COLORREF PUPILPLANKTONSEYE )
    {
    txSetFillColor(BodyColor);
    txSetColor(BodyColor);
    txCircle(x+30*Size,y,30*Size);
    txCircle(x+30*Size,y+80*Size,30*Size);
    txLine(x+13*Size,(y+130+LegSize)*Size,x+14*Size,y+96*Size);
    txLine(x+13*Size,(y+130+LegSize)*Size,x+16*Size,(y+130+LegSize)*Size);
    txLine(x+16*Size,(y+130+LegSize)*Size,x+16*Size,(y+127+LegSize)*Size);
    txLine(x+16*Size,(y+127+LegSize)*Size,x+20*Size,(y+123+LegSize)*Size);
    txLine(x+20*Size,(y+123+LegSize)*Size,x+21*Size,(y+123+LegSize)*Size);
    txLine(x+21*Size,(y+123+LegSize)*Size,x+22*Size,y+103*Size);
    txFloodFill(x+18*Size,y+111*Size);
    txLine(x+47*Size,(y+130+LegSize)*Size,x+46*Size,y+96*Size);
    txLine(x+47*Size,(y+130+LegSize)*Size,x+44*Size,(y+130+LegSize)*Size);
    txLine(x+44*Size,(y+130+LegSize)*Size,x+44*Size,(y+127+LegSize)*Size);
    txLine(x+44*Size,(y+127+LegSize)*Size,x+40*Size,(y+123+LegSize)*Size);
    txLine(x+40*Size,(y+123+LegSize)*Size,x+39*Size,(y+123+LegSize)*Size);
    txLine(x+39*Size,(y+123+LegSize)*Size,x+38*Size,y+103*Size);
    txFloodFill(x+42*Size,y+111*Size);



    if(Arms=="Down")
    {
    POINT RightHand [5]={{x,y+45*Size},{x-20*Size,y+97*Size},{x-24*Size,y+98*Size},{x-25*Size,y+94*Size},{x,y+24*Size}} ;
    txPolygon(RightHand,5);
    POINT LeftHand [5]={{x+58*Size,y+45*Size},{x+80*Size,y+97*Size},{x+84*Size,y+98*Size},{x+85*Size,y+94*Size},{x+60*Size,y+24*Size}} ;
    txPolygon(LeftHand,5);
    }
    if(Arms=="Up")
    {
    POINT RightArm [5]={{x,y+45*Size},{x-25*Size,y-4*Size},{x-24*Size,y-8*Size},{x-20*Size,y-7*Size},{x,y+24*Size}} ;
    txPolygon(RightArm,5);
    POINT LeftArm [5]={{x+58*Size,y+45*Size},{x+85*Size,y-4*Size},{x+84*Size,y-8*Size},{x+80*Size,y-7*Size},{x+60*Size,y+24*Size}} ;
    txPolygon(LeftArm,5);
    }
    txRectangle(x,y,x+60*Size,y+80*Size);
    txSetColor(BLACK);
    if(Antennae)
    {
    txLine(x+20*Size,y-30*Size,x+5*Size,y-80*Size);
    txLine(x+35*Size,y-30*Size,x+50*Size,y-80*Size);
    }
    if(Face=="Usual")
    {
    txSetColor( EyesColor);
    txSetFillColor( EyesColor);
    txEllipse(x+15*Size,y,x+45*Size,y+40*Size);
    txSetColor(PUPILPLANKTONSEYE);
    txSetFillColor(PUPILPLANKTONSEYE);
    txEllipse(x+22*Size,y+5*Size,x+37*Size,y+25*Size);
    txSetColor(BLACK);
    txArc(x+10*Size,y+50*Size,x+50*Size,y+70*Size,25,130);
    }
    if(Face=="Squinted")
    {
    txSetColor(BLACK);
    txLine(x+10*Size,y+50*Size,x+50*Size,y+50*Size);
    txSetColor( EyesColor);
    txSetFillColor( EyesColor);
    txEllipse(x+15*Size,y,x+45*Size,y+40*Size);
    txSetColor(PUPILPLANKTONSEYE);
    txSetFillColor(PUPILPLANKTONSEYE);
    txCircle(x+30*Size,y+20*Size,8);
    txSetFillColor(BodyColor);
    txSetColor(BodyColor);
    txRectangle(x+15*Size,y,x+45*Size,y+15*Size);
    txRectangle(x+15*Size,y+40*Size,x+45*Size,y+25*Size);

    }
    if(Face=="Close")
    {
    txSetColor(BLACK);
    txSetFillColor(BodyColor);
    txEllipse(x+15*Size,y,x+45*Size,y+40*Size);

    txSetColor(BLACK);
    txArc(x+10*Size,y+50*Size,x+50*Size,y+70*Size,25,130);
    }
    txSetColor(EyebrowColor);
    txArc(x+5*Size,y,x+55*Size,y-20*Size,200,150);
    txArc(x+5*Size,y-1*Size,x+55*Size,y-21*Size,200,150);
    txArc(x+5*Size,y-2*Size,x+55*Size,y-22*Size,200,150);
    txArc(x+5*Size,y-3*Size,x+55*Size,y-23*Size,200,150);
    txArc(x+5*Size,y-4*Size,x+55*Size,y-24*Size,200,150);
    txArc(x+5*Size,y-5*Size,x+55*Size,y-25*Size,200,150);}

    void drawKaramelka(int x,int y,int  HeadColor,int ArmsColor,int EarsColor,string Arms,string Eyes,int EyesColor, int LegSize,bool Bow, double Size,COLORREF BLACK,COLORREF RED,COLORREF KARAMELKASMOUTH)
    {
    txSetColor(BLACK);
    txSetFillColor( HeadColor);
    POINT KaramelkasLeftEar [3]={{x-113*Size,y-133*Size},{x-61*Size,y-45*Size},{x-39*Size,y-88*Size}};
    txPolygon( KaramelkasLeftEar , 3);
    POINT KaramelkasRightEar [3]={{x+32*Size,y-155*Size},{x+48*Size,y-81*Size},{x+2*Size,y-97*Size}};
    txPolygon( KaramelkasRightEar , 3);
    txSetFillColor(ArmsColor);
    txEllipse(x-14*Size,y+(95+LegSize)*Size,x+3*Size,y+(90+LegSize)*Size);
    txEllipse(x+4*Size,y+(95+LegSize)*Size,x+17*Size,y+(90+LegSize)*Size);
    txRectangle(x-10*Size,y+(91+LegSize)*Size,x-14*Size,y+58*Size);
    txRectangle(x+4*Size,y+(91+LegSize)*Size,x+7*Size,y+58*Size);
    txSetFillColor(RED);
    POINT KaramelkasBody [3]={{x,y},{x+17*Size,y+60*Size},{x-21*Size,y+60*Size}};
    txPolygon(KaramelkasBody ,3);
    txSetFillColor( HeadColor);
    txEllipse(x-61*Size,y-98*Size,x+63*Size,y+7*Size);
    txSetFillColor(EarsColor);
    POINT KaramelkasLeftInsideEar [3]={{x-87*Size,y-104*Size},{x-46*Size,y-82*Size},{x-60*Size,y-60*Size}} ;
    txPolygon(KaramelkasLeftInsideEar ,3);
    POINT KaramelkasRightInsideEar [3]={{x+30*Size,y-141*Size},{x+13*Size,y-101*Size},{x+40*Size,y-88*Size}} ;
    txPolygon(KaramelkasRightInsideEar ,3);
    if(Eyes=="Open")
    {
    txSetFillColor( EyesColor);
    txEllipse(x-17*Size,y-38*Size,x+12*Size,y-66*Size);
    txEllipse(x+26*Size,y-49*Size,x+52*Size,y-76*Size);
    txSetFillColor(BLACK);
    txCircle(x+38*Size,y-62*Size,4*Size);
    txCircle(x-2*Size,y-52*Size,5*Size);
    }
    if(Eyes=="Close")
    {
    txSetFillColor( HeadColor);
    txEllipse(x-17*Size,y-38*Size,x+12*Size,y-66*Size);
    txEllipse(x+26*Size,y-49*Size,x+52*Size,y-76*Size);
    }
    if(Bow)
    {
    txSetFillColor(RED);
    txLine(x-48*Size,y-82*Size,x-66*Size,y-125*Size);
    txLine(x-66*Size,y-125*Size,x-23*Size,y-112*Size);
    txLine(x-48*Size,y-82*Size,x-20*Size,y-99*Size);
    txEllipse(x-24*Size,y-97*Size,x-11*Size,y-116*Size);
    txLine(x-12*Size,y-102*Size,x+18*Size,y-98*Size);
    txLine(x+18*Size,y-98*Size,x+2*Size,y-143*Size);
    txLine(x+2*Size,y-143*Size,x-17*Size,y-115*Size);
    txFloodFill(x+1*Size,y-117*Size);
    txFloodFill(x-46*Size,y-100*Size);
    }

    txLine(x-49*Size,y-31*Size,x-84*Size,y-25*Size);
    txLine(x-47*Size,y-27*Size,x-85*Size,y-14*Size);
    txLine(x-46*Size,y-21*Size,x-77*Size,y-6*Size);

    txLine(x+54*Size,y-58*Size,x+86*Size,y-70*Size);
    txLine(x+55*Size,y-53*Size,x+90*Size,y-65*Size);
    txLine(x+55*Size,y-47*Size,x+90*Size,y-55*Size);

    txSetFillColor(BLACK);
    txEllipse(x+20*Size,y-34*Size,x+38*Size,y-45*Size);

    txLine(x-3*Size,y-66*Size,x-4*Size,y-83*Size);
    txLine(x-9*Size,y-66*Size,x-16*Size,y-80*Size);
    txLine(x-13*Size,y-62*Size,x-27*Size,y-75*Size);

    txLine(x+28*Size,y-72*Size,x+14*Size,y-83*Size);
    txLine(x+33*Size,y-75*Size,x+26*Size,y-88*Size);
    txLine(x+39*Size,y-75*Size,x+39*Size,y-91*Size);

    txSetColor(BLACK);
    txSetFillColor(KARAMELKASMOUTH);
    txLine(x-1*Size,y-22*Size,x-1*Size,y-17*Size);
    txLine(x-1*Size,y-17*Size,x+4*Size,y-9*Size);
    txLine(x+4*Size,y-9*Size,x+11*Size,y-5*Size);
    txLine(x+11*Size,y-5*Size,x+15*Size,y-4*Size);
    txLine(x+15*Size,y-4*Size,x+24*Size,y-4*Size);
    txLine(x+24*Size,y-4*Size,x+32*Size,y-8*Size);
    txLine(x+32*Size,y-8*Size,x+39*Size,y-17*Size);
    txLine(x+39*Size,y-17*Size,x+39*Size,y-21*Size);
    txLine(x+39*Size,y-21*Size,x+25*Size,y-16*Size);
    txLine(x+25*Size,y-16*Size,x+13*Size,y-16*Size);
    txLine(x+13*Size,y-16*Size,x-1*Size,y-22*Size);
    /*
    txArc(x-5*Size,y-15*Size,x+40*Size,y-38*Size,194,156);
    txArc(x-4*Size,y-3*Size,x+38*Size,y-39*Size,180,184);
    KARAMELKASMOUTH
    */
    txFloodFill(x+12*Size,y-10*Size);
    txSetColor(BLACK);
    txSetFillColor(ArmsColor);
    if(Arms=="Down"){
    POINT KaramelkasRightArm [12]={{x-8*Size,y+23*Size},{x-32*Size,y+47*Size},{x-42*Size,y+49*Size},{x-43*Size,y+51*Size},{x-36*Size,y+51*Size},{x-40*Size,y+57*Size},{x-38*Size,y+58*Size},{x-34*Size,y+55*Size},{x-32*Size,y+60*Size},{x-29*Size,y+59*Size},{x-29*Size,y+49*Size},{x-11*Size,y+30*Size}};
    txPolygon (KaramelkasRightArm,12);
    POINT KaramelkasLeftArm [12]={{x+5*Size,y+23*Size},{x+28*Size,y+49*Size},{x+28*Size,y+59*Size},{x+31*Size,y+59*Size},{x+31*Size,y+55*Size},{x+36*Size,y+60*Size},{x+38*Size,y+58*Size},{x+35*Size,y+53*Size},{x+41*Size,y+53*Size},{x+41*Size,y+50*Size},{x+32*Size,y+49*Size},{x+5*Size,y+16*Size}};
    txPolygon (KaramelkasLeftArm,12);
    }
    if(Arms=="Up"){
    POINT KaramelkasRightArm [12]={{x-8*Size,y+23*Size},{x-32*Size,y-47*Size},{x-42*Size,y-49*Size},{x-43*Size,y-51*Size},{x-36*Size,y-51*Size},{x-40*Size,y-57*Size},{x-38*Size,y-58*Size},{x-34*Size,y-55*Size},{x-32*Size,y-60*Size},{x-29*Size,y-59*Size},{x-29*Size,y-49*Size},{x-11*Size,y+30*Size}};
    txPolygon (KaramelkasRightArm,12);
    POINT KaramelkasLeftArm [12]={{x+5*Size,y+23*Size},{x+28*Size,y-49*Size},{x+28*Size,y-59*Size},{x+31*Size,y-59*Size},{x+31*Size,y-55*Size},{x+36*Size,y-60*Size},{x+38*Size,y-58*Size},{x+35*Size,y-53*Size},{x+41*Size,y-53*Size},{x+41*Size,y-50*Size},{x+32*Size,y-49*Size},{x+5*Size,y+16*Size}};
    txPolygon (KaramelkasLeftArm,12);
    }


    txLine(x-7*Size,y+60*Size,x-14*Size,y+74*Size);
    txLine(x-14*Size,y+75*Size,x-25*Size,y+80*Size);

    txLine(x-25*Size,y+80*Size,x-43*Size,y+80*Size);
    txLine(x-43*Size,y+80*Size,x-54*Size,y+75*Size);
    txLine(x-19*Size,y+67*Size,x-34*Size,y+67*Size);
    txLine(x-34*Size,y+67*Size,x-46*Size,y+61*Size);
    txLine(x-14*Size,y+65*Size,x-21*Size,y+67*Size);
    txLine(x-26*Size,y+66*Size,x-23*Size,y+79*Size);
    txLine(x-33*Size,y+80*Size,x-33*Size,y+66*Size);
    txLine(x-37*Size,y+80*Size,x-37*Size,y+65*Size);
    txLine(x-48*Size,y+78*Size,x-42*Size,y+63*Size);
    txLine(x-46*Size,y+61*Size,x-55*Size,y+75*Size);

    txLine(x-46*Size,y+61*Size,x-52*Size,y+60*Size);
    txLine(x-52*Size,y+60*Size,x-58*Size,y+65*Size);
    txLine(x-58*Size,y+65*Size,x-58*Size,y+69*Size);
    txLine(x-58*Size,y+69*Size,x-53*Size,y+76*Size);
     /*
    txArc(x-61*Size,y+76*Size,x-41*Size,y+59*Size,55,215);
    */
    txSetFillColor( HeadColor);
    txFloodFill(x-54*Size,y+67*Size);
    txFloodFill(x-42*Size,y+72*Size);
    txFloodFill(x-28*Size,y+73*Size);

    txSetFillColor(ArmsColor);
    txFloodFill(x-48*Size,y+68*Size);
    txFloodFill(x-34*Size,y+74*Size);
    txFloodFill(x-21*Size,y+72*Size);



  }

    void drawHedgehog(int x, int y,bool Niddles,int EyesColor,double Size,bool Glasses,string Eyes,int BodyColor,bool Orange,string Pupil,COLORREF BLACK,COLORREF HEDGEHOGSGLASSIES,COLORREF HEDGEHOGSEYEBROWS,int NiddlesColor,COLORREF ORANGE )
    {
    txSetColor(BLACK);
    txSetFillColor(BodyColor);
    txEllipse(x-1*Size,y+59*Size,x+131*Size,y-73*Size);

    if(Niddles)
    {
    txLine(x,y,x-33*Size,y-35*Size);
    txLine(x-33*Size,y-35*Size,x-1*Size,y-56*Size);
    txLine(x-1*Size,y-56*Size,x-1*Size,y-94*Size);
    txLine(x-1*Size,y-94*Size,x+40*Size,y-85*Size);
    txLine(x+40*Size,y-85*Size,x+64*Size,y-121*Size);
    txLine(x+64*Size,y-121*Size,x+89*Size,y-84*Size);
    txLine(x+89*Size,y-84*Size,x+132*Size,y-94*Size);
    txLine(x+132*Size,y-94*Size,x+132*Size,y-54*Size);
    txLine(x+132*Size,y-54*Size,x+161*Size,y-36*Size);
    txLine(x+161*Size,y-36*Size,x+130*Size,y-6*Size);
    txSetFillColor(NiddlesColor);
    txFloodFill(x+64*Size,y-88*Size);
    }
    txSetFillColor(BodyColor);
    txArc(x-4*Size,y-26*Size,x+12*Size,y-43*Size,35,241);
    txArc(x+117*Size,y-25*Size,x+132*Size,y-41*Size,282,208);
    txFloodFill(x+2*Size,y-31*Size);
    txFloodFill(x+128*Size,y-31*Size);
    if(Orange)
    {
     txSetFillColor(ORANGE);
     txEllipse(x+135*Size,y-131*Size,x+72*Size,y-68*Size);
     txSetFillColor(BLACK);
     txEllipse(x+114*Size,y-122*Size,x+119*Size,y-127*Size);
    }
     if(Glasses)
     {
    txSetFillColor(HEDGEHOGSGLASSIES);
    txSetColor(HEDGEHOGSGLASSIES);
    txEllipse(x+18*Size,y+6*Size,x+67*Size,y-44*Size);
    txEllipse(x+62*Size,y+6*Size,x+111*Size,y-44*Size);
    txEllipse(x+7*Size,y-41*Size,x+18*Size,y-52*Size);
    txEllipse(x+110*Size,y-41*Size,x+124*Size,y-52*Size);
    txLine(x+118*Size,y-42*Size,x+107*Size,y-30*Size);
    txLine(x+100*Size,y-37*Size,x+111*Size,y-48*Size);
    txLine(x+22*Size,y-30*Size,x+11*Size,y-42*Size);
    txLine(x+28*Size,y-37*Size,x+17*Size,y-48*Size);
    txFloodFill(x+110*Size,y-39*Size);
    txFloodFill(x+19*Size,y-39*Size);
    }
    txSetColor(BLACK);
    if( Eyes=="Open")
    {
    txSetFillColor(EyesColor);
    txEllipse(x+24*Size,y,x+61*Size,y-37*Size);
    txEllipse(x+68*Size,y,x+104*Size,y-37*Size);
    if(Pupil=="Usual")
    {
    txSetFillColor(BLACK);
    txEllipse(x+69*Size,y-10*Size,x+80*Size,y-24*Size);
    txEllipse(x+48*Size,y-10*Size,x+59*Size,y-24*Size);
    }
    if(Pupil=="Middle")
    {
    txSetFillColor(BLACK);
    txEllipse(x+79*Size,y-10*Size,x+90*Size,y-24*Size);
    txEllipse(x+38*Size,y-10*Size,x+49*Size,y-24*Size);
    }
    if(Pupil=="3")
    {
    txSetFillColor(BLACK);
    txEllipse(x+89*Size,y-10*Size,x+100*Size,y-24*Size);
    txEllipse(x+28*Size,y-10*Size,x+39*Size,y-24*Size);
    }
    }
    if(Eyes=="Close")
    {
    txSetFillColor(BodyColor);
    txEllipse(x+24*Size,y,x+61*Size,y-37*Size);
    txEllipse(x+68*Size,y,x+104*Size,y-37*Size);
    }
    txSetFillColor(HEDGEHOGSEYEBROWS);
    POINT HEDGEHOGSNOSE [8] = {{x+60*Size,y-1*Size},{x+59*Size,y+2*Size},{x+63*Size,y+8*Size},{x+63*Size,y+15*Size},
    {x+65*Size,y+15*Size},{x+65*Size,y+8*Size},{x+70*Size,y+3*Size},{x+67*Size,y-1*Size}};
    txPolygon(HEDGEHOGSNOSE,8);
    txSetFillColor(HEDGEHOGSGLASSIES);
    POINT HEDGEHOGSMOUTH [6] = {{x+56*Size,y+14*Size},{x+60*Size,y+16*Size},{x+67*Size,y+16*Size},
                                {x+72*Size,y+14*Size},{x+65*Size,y+21*Size},{x+64*Size,y+21*Size}};
    txPolygon(HEDGEHOGSMOUTH,6);
    txSetFillColor(HEDGEHOGSEYEBROWS);
    POINT HEDGEHOGSLeftEyebrow [5] ={{x+43*Size,y-48*Size},{x+40*Size,y-51*Size},{x+45*Size,y-57*Size},
                                     {x+52*Size,y-60*Size},{x+55*Size,y-57*Size}};
    txPolygon(HEDGEHOGSLeftEyebrow,5);
    POINT HEDGEHOGSRightEyebrow [5] ={{x+77*Size,y-60*Size},{x+74*Size,y-57*Size},{x+85*Size,y-49*Size},
                                      {x+88*Size,y-52*Size},{x+84*Size,y-57*Size}};
    txPolygon(HEDGEHOGSRightEyebrow,5);
    txSetFillColor(BodyColor);
    POINT HEDGEHOGSLeftLeg [6] ={{x+49*Size,y+56*Size},{x+38*Size,y+87*Size},{x+41*Size,y+91*Size},{x+61*Size,y+91*Size},{x+65*Size,y+87*Size},{x+55*Size,y+57*Size}};
    txPolygon(HEDGEHOGSLeftLeg,6);
    POINT HEDGEHOGSRightLeg [6] ={{x+65*Size,y+87*Size},{x+69*Size,y+91*Size},{x+87*Size,y+91*Size},{x+91*Size,y+87*Size},{x+80*Size,y+56*Size},{x+75*Size,y+57*Size}};
    txPolygon(HEDGEHOGSRightLeg,6);

    txLine(x+5*Size,y+20*Size,x,y+26*Size);
    txLine(x,y+26*Size,x-3*Size,y+31*Size);
    txLine(x-3*Size,y+31*Size,x-4*Size,y+44*Size);
    txLine(x-4*Size,y+44*Size,x,y+55*Size);
    txLine(x,y+55*Size,x+7*Size,y+58*Size);
    txLine(x+7*Size,y+58*Size,x+13*Size,y+56*Size);
    txLine(x+13*Size,y+56*Size,x+14*Size,y+56*Size);
    /*
    txArc(x-6*Size,y+60*Size,x+19*Size,y+20*Size,95,212);
    */
    txLine(x+7*Size,y+21*Size,x+7*Size,y+42*Size);
    txLine(x+14*Size,y+56*Size,x+7*Size,y+40*Size);

    txLine(x+125*Size,y+20*Size,x+130*Size,y+26*Size);
    txLine(x+130*Size,y+26*Size,x+133*Size,y+31*Size);
    txLine(x+133*Size,y+31*Size,x+134*Size,y+44*Size);
    txLine(x+134*Size,y+44*Size,x+130*Size,y+55*Size);
    txLine(x+130*Size,y+55*Size,x+123*Size,y+58*Size);
    txLine(x+123*Size,y+58*Size,x+117*Size,y+56*Size);
    txLine(x+117*Size,y+56*Size,x+115*Size,y+56*Size);

    /*
    txArc(x+110*Size,y+59*Size,x+135*Size,y+20*Size,240,205);
    */

    txLine(x+123*Size,y+21*Size,x+123*Size,y+41*Size);
    txLine(x+123*Size,y+41*Size,x+115*Size,y+56*Size);
    txFloodFill(x+128*Size,y+48*Size);
    txFloodFill(x+1*Size,y+48*Size);}

