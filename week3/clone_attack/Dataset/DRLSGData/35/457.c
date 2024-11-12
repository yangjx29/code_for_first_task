int CxqkF2wV [(844 - 836)] [(850 - 842)];
int M5HwIW79M4zJ [(988 - 980)] = {(538 - 538)};
int WtgT9jLYlCph [8];

int main () {
    int s;
    int YBkIFexj;
    int gh24xywXrv;
    int vH72bn8x;
    int pIwNCU;
    int EMiZlRIQdJ8;
    int rdInSrF;
    int f;
    int j6zTpgmVdqDH;
    s = (525 - 525);
    YBkIFexj = (141 - 141);
    gh24xywXrv = (239 - 239);
    scanf ("%d,%d", &vH72bn8x, &pIwNCU);
    {
        rdInSrF = 774 - 774;
        while (vH72bn8x > rdInSrF) {
            for (EMiZlRIQdJ8 = (920 - 920); EMiZlRIQdJ8 < pIwNCU; EMiZlRIQdJ8++) {
                scanf ("%d", &CxqkF2wV[rdInSrF][EMiZlRIQdJ8]);
                if (CxqkF2wV[rdInSrF][EMiZlRIQdJ8] > M5HwIW79M4zJ[rdInSrF]) {
                    M5HwIW79M4zJ[rdInSrF] = CxqkF2wV[rdInSrF][EMiZlRIQdJ8];
                    WtgT9jLYlCph[rdInSrF] = EMiZlRIQdJ8;
                }
            }
            rdInSrF++;
        }
    }
    for (j6zTpgmVdqDH = (227 - 227); j6zTpgmVdqDH < vH72bn8x; j6zTpgmVdqDH++) {
        s = 0;
        for (f = 0; f < vH72bn8x; f++) {
            if (CxqkF2wV[f][WtgT9jLYlCph[j6zTpgmVdqDH]] > M5HwIW79M4zJ[j6zTpgmVdqDH]) {
                s++;
            }
        }
        if (s == vH72bn8x - (721 - 720)) {
            gh24xywXrv = 1;
            printf ("%d+%d", j6zTpgmVdqDH, WtgT9jLYlCph[j6zTpgmVdqDH]);
        }
    }
    if (gh24xywXrv == 0) {
        printf ("No");
    }
    return 0;
}

