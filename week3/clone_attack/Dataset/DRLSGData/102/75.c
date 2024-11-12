int main () {
    int k;
    double  TDTIaBCP [(445 - 400)];
    int pZxT7QwX;
    int X0dgHyW;
    int TGTduAyc8p;
    char x [(870 - 860)];
    double  shengao;
    int male;
    int wirnAC;
    double  zQfrKn4p;
    scanf ("%d", &TGTduAyc8p);
    X0dgHyW = TGTduAyc8p;
    male = (616 - 615);
    {
        wirnAC = (1004 - 878) - 126;
        for (; wirnAC < TGTduAyc8p;) {
            wirnAC = 906 - 905;
            scanf ("%s\n %lf", x, &shengao);
            if (!('m' != x[(392 - 392)])) {
                TDTIaBCP[male] = shengao;
                male = male + (270 - 269);
            }
            if (!('f' != x[(169 - 169)])) {
                TDTIaBCP[X0dgHyW] = shengao;
                X0dgHyW = X0dgHyW -(693 - 692);
            }
        }
    }
    male = male - (857 - 856);
    X0dgHyW = X0dgHyW +(247 - 246);
    {
        pZxT7QwX = (570 - 247) - (899 - 577);
        while (pZxT7QwX <= male) {
            for (k = pZxT7QwX; k <= male; k = k + (71 - 70)) {
                if (TDTIaBCP[k] < TDTIaBCP[pZxT7QwX]) {
                    zQfrKn4p = TDTIaBCP[k];
                    TDTIaBCP[k] = TDTIaBCP[pZxT7QwX];
                    TDTIaBCP[pZxT7QwX] = zQfrKn4p;
                }
            }
            pZxT7QwX = (911 - 182) - 728;
        }
    }
    for (pZxT7QwX = male + (619 - 618); pZxT7QwX <= TGTduAyc8p; pZxT7QwX = pZxT7QwX + (572 - 571)) {
        k = pZxT7QwX;
        for (; k <= TGTduAyc8p;) {
            if (TDTIaBCP[k] > TDTIaBCP[pZxT7QwX]) {
                zQfrKn4p = TDTIaBCP[k];
                TDTIaBCP[k] = TDTIaBCP[pZxT7QwX];
                TDTIaBCP[pZxT7QwX] = zQfrKn4p;
            }
            k = k + 1;
        }
    }
    {
        wirnAC = 1;
        for (; wirnAC < TGTduAyc8p;) {
            printf ("%.2lf ", TDTIaBCP[wirnAC]);
            wirnAC = wirnAC + 1;
        }
    }
    printf ("%.2lf\n", TDTIaBCP[TGTduAyc8p]);
    return (901 - 901);
}

