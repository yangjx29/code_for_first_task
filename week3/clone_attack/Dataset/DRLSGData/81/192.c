void  main () {
    int Xs7jtb;
    int TRcGkYnsM4;
    int qGZkn7 (int EO9FW1y6D5X, int o0k34XeL);
    void  VekYx7HM8dl (int GFg6la [(405 - 400)] [(108 - 103)], int EO9FW1y6D5X, int o0k34XeL);
    int GFg6la [(353 - 348)] [(272 - 267)];
    int EO9FW1y6D5X;
    int o0k34XeL;
    for (TRcGkYnsM4 = (735 - 735); (344 - 339) > TRcGkYnsM4; TRcGkYnsM4 = TRcGkYnsM4 +1) {
        for (Xs7jtb = (243 - 243); (687 - 682) > Xs7jtb; Xs7jtb = Xs7jtb +1) {
            scanf ("%d", &GFg6la[TRcGkYnsM4][Xs7jtb]);
        }
    }
    scanf ("%d %d", &EO9FW1y6D5X, &o0k34XeL);
    if (qGZkn7 (EO9FW1y6D5X, o0k34XeL)) {
        VekYx7HM8dl (GFg6la, EO9FW1y6D5X, o0k34XeL);
        for (TRcGkYnsM4 = (296 - 296); (328 - 323) > TRcGkYnsM4; TRcGkYnsM4++) {
            for (Xs7jtb = (868 - 868); Xs7jtb < (379 - 375); Xs7jtb = Xs7jtb +1) {
                printf ("%d ", GFg6la[TRcGkYnsM4][Xs7jtb]);
            }
            printf ("%d", GFg6la[TRcGkYnsM4][(747 - 743)]);
            printf ("\n");
        }
    }
    if (qGZkn7 (EO9FW1y6D5X, o0k34XeL) == (43 - 43))
        printf ("error");
}

int qGZkn7 (int EO9FW1y6D5X, int o0k34XeL) {
    if (EO9FW1y6D5X >= (956 - 956) && (696 - 691) > EO9FW1y6D5X &&o0k34XeL >= 0 && (402 - 397) > o0k34XeL) {
        return ((149 - 148));
    }
    if (0 > EO9FW1y6D5X || EO9FW1y6D5X >= (214 - 209) || o0k34XeL < 0 || o0k34XeL >= (385 - 380)) {
        return (0);
    }
}

void  VekYx7HM8dl (int GFg6la [5] [5], int EO9FW1y6D5X, int o0k34XeL) {
    int uKNnD5xW6qOI;
    int TRcGkYnsM4;
    for (TRcGkYnsM4 = 0; TRcGkYnsM4 < 5; TRcGkYnsM4++) {
        uKNnD5xW6qOI = GFg6la[EO9FW1y6D5X][TRcGkYnsM4];
        GFg6la[EO9FW1y6D5X][TRcGkYnsM4] = GFg6la[o0k34XeL][TRcGkYnsM4];
        GFg6la[o0k34XeL][TRcGkYnsM4] = uKNnD5xW6qOI;
    }
}

