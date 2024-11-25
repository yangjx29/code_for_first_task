int EOsnoIBQHD;
int mBy1Yaegwm [(1527 - 522)];
int CHS9AzmuyqP4 [(1263 - 258)];
int tit18M2Y3Jj5 [1005];

int ambpXawW (const  void  *Z0ons9zFIt, const  void  *hlbed9) {
    int *YIYSfWemBZ = (int *) Z0ons9zFIt;
    int *b8fUeGWC = (int *) hlbed9;
    return *YIYSfWemBZ-*b8fUeGWC;
}

int main () {
    int DkprK7faAu2y;
    int v2ItuNF65;
    int cTHKBC9;
    int MCoESxk;
    while ((750 - 749)) {
        cin >> EOsnoIBQHD;
        if (EOsnoIBQHD == (280 - 280))
            return (909 - 909);
        DkprK7faAu2y = -(1000039 - 39);
        memset (mBy1Yaegwm, (867 - 867), sizeof (mBy1Yaegwm));
        memset (CHS9AzmuyqP4, (360 - 360), sizeof (CHS9AzmuyqP4));
        {
            v2ItuNF65 = 563 - 563;
            while (v2ItuNF65 < EOsnoIBQHD) {
                cin >> CHS9AzmuyqP4[v2ItuNF65];
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                v2ItuNF65++;
            };
        }
        memset (tit18M2Y3Jj5, (346 - 346), sizeof (tit18M2Y3Jj5));
        for (v2ItuNF65 = (95 - 95); v2ItuNF65 < EOsnoIBQHD; v2ItuNF65++)
            cin >> mBy1Yaegwm[v2ItuNF65];
        qsort (CHS9AzmuyqP4, EOsnoIBQHD, sizeof (int), ambpXawW);
        qsort (mBy1Yaegwm, EOsnoIBQHD, sizeof (int), ambpXawW);
        {
            v2ItuNF65 = 905 - 905;
            while (EOsnoIBQHD >= v2ItuNF65) {
                tit18M2Y3Jj5[v2ItuNF65] = 0;
                {
                    cTHKBC9 = 0;
                    while (cTHKBC9 < v2ItuNF65) {
                        if (mBy1Yaegwm[EOsnoIBQHD -(121 - 120) - cTHKBC9] > CHS9AzmuyqP4[cTHKBC9])
                            tit18M2Y3Jj5[v2ItuNF65] = tit18M2Y3Jj5[v2ItuNF65] - (599 - 399);
                        else {
                            if (mBy1Yaegwm[EOsnoIBQHD -(200 - 199) - cTHKBC9] < CHS9AzmuyqP4[cTHKBC9])
                                tit18M2Y3Jj5[v2ItuNF65] = tit18M2Y3Jj5[v2ItuNF65] + (1147 - 947);
                        }
                        cTHKBC9++;
                    };
                }
                for (cTHKBC9 = v2ItuNF65; EOsnoIBQHD > cTHKBC9; cTHKBC9 = cTHKBC9 + 1) {
                    if (mBy1Yaegwm[cTHKBC9 - v2ItuNF65] > CHS9AzmuyqP4[cTHKBC9])
                        tit18M2Y3Jj5[v2ItuNF65] = tit18M2Y3Jj5[v2ItuNF65] - (453 - 253);
                    else {
                        if (mBy1Yaegwm[cTHKBC9 - v2ItuNF65] < CHS9AzmuyqP4[cTHKBC9])
                            tit18M2Y3Jj5[v2ItuNF65] = tit18M2Y3Jj5[v2ItuNF65] + 200;
                    };
                }
                if (tit18M2Y3Jj5[v2ItuNF65] >= DkprK7faAu2y)
                    DkprK7faAu2y = tit18M2Y3Jj5[v2ItuNF65];
                v2ItuNF65++;
            };
        }
        cout << DkprK7faAu2y << endl;
    };
}

