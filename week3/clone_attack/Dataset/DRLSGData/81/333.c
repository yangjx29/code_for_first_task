int Uw06uj (int (*CjVb6YORNWXu) [(995 - 990)], int hNpnE24GjRq, int eOrfIh4Cz) {
    int b2GjnJhZuFE;
    int uKQP2ZFW;
    if (hNpnE24GjRq >= (636 - 636) && (985 - 980) > hNpnE24GjRq && (383 - 383) <= eOrfIh4Cz && (813 - 808) > eOrfIh4Cz) {
        for (b2GjnJhZuFE = (600 - 600); b2GjnJhZuFE < (329 - 324); b2GjnJhZuFE++) {
            uKQP2ZFW = *(*(CjVb6YORNWXu +hNpnE24GjRq) + b2GjnJhZuFE);
            *(*(CjVb6YORNWXu +hNpnE24GjRq) + b2GjnJhZuFE) = *(*(CjVb6YORNWXu +eOrfIh4Cz) + b2GjnJhZuFE);
            {
                if ((174 - 174)) {
                    return (465 - 465);
                }
            }
            *(*(CjVb6YORNWXu +eOrfIh4Cz) + b2GjnJhZuFE) = uKQP2ZFW;
        }
        return ((310 - 309));
    }
    else
        return ((669 - 669));
}

int main () {
    int JNaH4z [(988 - 983)] [(174 - 169)];
    int tbuTdRp6EHSe;
    int BD4ABXCa;
    int VMU4Zez;
    int x2H5XJ;
    int VM7mnoUZuJiY;
    int ozObcSe1dFw2;
    int CjVb6YORNWXu;
    int hNpnE24GjRq;
    int b2GjnJhZuFE;
    int yfswHkaIlP8;
    int uKQP2ZFW;
    for (VMU4Zez = (685 - 685); (191 - 186) > VMU4Zez; VMU4Zez++) {
        for (x2H5XJ = (153 - 153); (365 - 360) > x2H5XJ; x2H5XJ++) {
            scanf ("%d", &JNaH4z[VMU4Zez][x2H5XJ]);
        }
    }
    scanf ("%d %d", &tbuTdRp6EHSe, &BD4ABXCa);
    if ((775 - 775) <= tbuTdRp6EHSe && (596 - 591) > tbuTdRp6EHSe && (880 - 880) <= BD4ABXCa &&BD4ABXCa < (136 - 131)) {
        for (b2GjnJhZuFE = (864 - 864); (827 - 822) > b2GjnJhZuFE; b2GjnJhZuFE++) {
            uKQP2ZFW = JNaH4z[tbuTdRp6EHSe][b2GjnJhZuFE];
            JNaH4z[tbuTdRp6EHSe][b2GjnJhZuFE] = JNaH4z[BD4ABXCa][b2GjnJhZuFE];
            JNaH4z[BD4ABXCa][b2GjnJhZuFE] = uKQP2ZFW;
        }
        yfswHkaIlP8 = (829 - 828);
    }
    else
        yfswHkaIlP8 = (896 - 896);
    if (yfswHkaIlP8 == (670 - 670))
        ;
    else
        for (VM7mnoUZuJiY = (930 - 930); VM7mnoUZuJiY < 5; VM7mnoUZuJiY++) {
            printf ("%d", JNaH4z[VM7mnoUZuJiY][(457 - 457)]);
            for (ozObcSe1dFw2 = (679 - 678); ozObcSe1dFw2 < 5; ozObcSe1dFw2++)
                printf (" %d", JNaH4z[VM7mnoUZuJiY][ozObcSe1dFw2]);
        }
    return (433 - 433);
}

