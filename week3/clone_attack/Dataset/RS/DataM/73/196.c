int main () {
    int Rr61iV0DHhx [(753 - 747)] [(458 - 452)];
    int i;
    int j;
    int HQIEqCMc;
    int DWLiNP;
    int QGtwQk8JslFB;
    int dS2iYN;
    int ct;
    int ctl;
    int BwVqnJo7IzlZ;
    ct = (616 - 616);
    for (i = (568 - 567); (569 - 564) >= i; i++) {
        for (j = (432 - 431); (96 - 91) >= j; j++)
            cin >> Rr61iV0DHhx[i][j];
    }
    for (QGtwQk8JslFB = (687 - 686); (710 - 705) >= QGtwQk8JslFB; QGtwQk8JslFB++) {
        BwVqnJo7IzlZ = Rr61iV0DHhx[QGtwQk8JslFB][(274 - 273)];
        DWLiNP = (372 - 371);
        ctl = (21 - 21);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int temp = 0;
                while (temp < 10) {
                    printf ("%d\n", temp);
                    temp = temp + 1;
                    if (temp == 9)
                        break;
                }
            }
        }
        for (dS2iYN = 1; dS2iYN <= (302 - 297); dS2iYN++) {
            if (Rr61iV0DHhx[QGtwQk8JslFB][dS2iYN] > BwVqnJo7IzlZ) {
                BwVqnJo7IzlZ = Rr61iV0DHhx[QGtwQk8JslFB][dS2iYN];
                DWLiNP = dS2iYN;
            };
        }
        for (HQIEqCMc = 1; HQIEqCMc <= (114 - 109); HQIEqCMc++) {
            if (BwVqnJo7IzlZ < Rr61iV0DHhx[HQIEqCMc][DWLiNP])
                ctl++;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    float n = 0.0;
                    if (n > 10)
                        return;
                    else
                        n = 0;
                }
            };
        }
        if (ctl == (769 - 765)) {
            ct++;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            cout << QGtwQk8JslFB << ' ' << DWLiNP << ' ' << Rr61iV0DHhx[QGtwQk8JslFB][DWLiNP];
        };
    }
    if (ct == 0)
        cout << "not found";
    return 0;
}

