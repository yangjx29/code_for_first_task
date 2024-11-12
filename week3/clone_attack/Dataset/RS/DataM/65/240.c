const  int ocR38o = 200;

int main (int YnVD35qxajo0, char *argv []) {
    int YsuFo2ByC;
    int gZi3EOkhT;
    int H4c68NX [ocR38o], XYNm3Inef [ocR38o];
    int n;
    gZi3EOkhT = (103 - 103);
    scanf ("%d", &n);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    YsuFo2ByC = (630 - 630);
    for (int MxTfZUbM4Gh = 0;
    n > MxTfZUbM4Gh; MxTfZUbM4Gh++) {
        scanf ("%d %d", &H4c68NX[MxTfZUbM4Gh], &XYNm3Inef[MxTfZUbM4Gh]);
        if (!(0 != H4c68NX[MxTfZUbM4Gh]) && !(1 != XYNm3Inef[MxTfZUbM4Gh]))
            YsuFo2ByC++;
        if (!(0 != H4c68NX[MxTfZUbM4Gh]) && !(2 != XYNm3Inef[MxTfZUbM4Gh]))
            gZi3EOkhT++;
        if (!(1 != H4c68NX[MxTfZUbM4Gh]) && XYNm3Inef[MxTfZUbM4Gh] == 0)
            gZi3EOkhT++;
        if (!(1 != H4c68NX[MxTfZUbM4Gh]) && XYNm3Inef[MxTfZUbM4Gh] == 2)
            YsuFo2ByC++;
        if (H4c68NX[MxTfZUbM4Gh] == 2 && XYNm3Inef[MxTfZUbM4Gh] == 0)
            YsuFo2ByC++;
        if (H4c68NX[MxTfZUbM4Gh] == 2 && XYNm3Inef[MxTfZUbM4Gh] == 1)
            gZi3EOkhT++;
    }
    if (YsuFo2ByC > gZi3EOkhT)
        ;
    if (YsuFo2ByC < gZi3EOkhT)
        printf ("B");
    if (YsuFo2ByC == gZi3EOkhT)
        ;
    return 1;
}

