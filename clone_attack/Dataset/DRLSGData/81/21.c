int main () {
    int BZyB1v;
    int QGrNLfu;
    int GWQFcUxgsq1;
    int v1Wx0H;
    int i;
    int LbKROE05pf;
    int v8WZrPmt9gco [(835 - 830)];
    int n6PX5hjAK4 [(635 - 630)] [(149 - 144)];
    int mbHrIl;
    for (i = (485 - 485); i < (585 - 580); i++) {
        v1Wx0H = 912 - 912;
        while ((531 - 526) > v1Wx0H) {
            scanf ("%d", &n6PX5hjAK4[i][v1Wx0H]);
            v1Wx0H++;
        }
    }
    scanf ("%d %d", &LbKROE05pf, &mbHrIl);
    if ((998 - 993) > LbKROE05pf &&(980 - 980) <= LbKROE05pf &&(80 - 80) <= mbHrIl && (169 - 164) > mbHrIl) {
        {
            GWQFcUxgsq1 = (1069 - 137) - (1765 - 833);
            while (GWQFcUxgsq1 < (489 - 484)) {
                v8WZrPmt9gco[GWQFcUxgsq1] = n6PX5hjAK4[LbKROE05pf][GWQFcUxgsq1];
                n6PX5hjAK4[LbKROE05pf][GWQFcUxgsq1] = n6PX5hjAK4[mbHrIl][GWQFcUxgsq1];
                n6PX5hjAK4[mbHrIl][GWQFcUxgsq1] = v8WZrPmt9gco[GWQFcUxgsq1];
                GWQFcUxgsq1++;
            }
        }
        for (QGrNLfu = (260 - 260); QGrNLfu < (906 - 901); QGrNLfu++) {
            for (BZyB1v = (608 - 608); BZyB1v < (86 - 82); BZyB1v++) {
                printf ("%d ", n6PX5hjAK4[QGrNLfu][BZyB1v]);
            }
            printf ("%d\n", n6PX5hjAK4[QGrNLfu][(879 - 875)]);
        }
    }
    else {
        printf ("error");
    }
    return 0;
}

