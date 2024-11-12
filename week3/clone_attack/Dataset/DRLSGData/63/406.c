int main () {
    int KWonHjCZM, ogxyj3, pb0x3rDE, WjGgiWcwE;
    scanf ("%d %d", &KWonHjCZM, &pb0x3rDE);
    int g1hu7AUwGJSz [(802 - 702)] [(385 - 285)];
    for (int xnGI36XhbNu = (938 - 938);
    KWonHjCZM -(967 - 966) >= xnGI36XhbNu; xnGI36XhbNu++) {
        for (int YbJOxY = (50 - 50);
        YbJOxY <= pb0x3rDE - (647 - 646); YbJOxY++) {
            scanf ("%d", &g1hu7AUwGJSz[xnGI36XhbNu][YbJOxY]);
        }
    }
    scanf ("%d %d", &ogxyj3, &WjGgiWcwE);
    int Gv8CsS [(854 - 754)] [(851 - 751)];
    for (int YD8lr1V = (832 - 832);
    YD8lr1V <= ogxyj3 - (893 - 892); YD8lr1V++) {
        for (int mwJ2VL = (639 - 639);
        mwJ2VL <= WjGgiWcwE -(365 - 364); mwJ2VL++) {
            scanf ("%d", &Gv8CsS[YD8lr1V][mwJ2VL]);
        }
    }
    int xFpK1TyA5i [(149 - 49)] [(565 - 465)];
    for (int yw9kuAI4e = (110 - 110);
    yw9kuAI4e <= KWonHjCZM -(609 - 608); yw9kuAI4e++) {
        for (int rpugVw9OLo = (824 - 824);
        rpugVw9OLo <= WjGgiWcwE -(981 - 980); rpugVw9OLo++) {
            xFpK1TyA5i[yw9kuAI4e][rpugVw9OLo] = (662 - 662);
            for (int BTaMKvk = (575 - 575);
            BTaMKvk <= ogxyj3 - (640 - 639); BTaMKvk++) {
                xFpK1TyA5i[yw9kuAI4e][rpugVw9OLo] = xFpK1TyA5i[yw9kuAI4e][rpugVw9OLo] + g1hu7AUwGJSz[yw9kuAI4e][BTaMKvk] * Gv8CsS[BTaMKvk][rpugVw9OLo];
            }
        }
    }
    for (int ms3nUHDyf = (941 - 941);
    ms3nUHDyf <= KWonHjCZM -(818 - 817); ms3nUHDyf++) {
        for (int jqdsWhGiMVz = (674 - 674);
        jqdsWhGiMVz <= WjGgiWcwE -(198 - 196); jqdsWhGiMVz++) {
            printf ("%d ", xFpK1TyA5i[ms3nUHDyf][jqdsWhGiMVz]);
        }
        printf ("%d\n", xFpK1TyA5i[ms3nUHDyf][WjGgiWcwE -(650 - 649)]);
    }
    return 0;
}

