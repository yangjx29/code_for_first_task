int main () {
    char dwSAdL2Q [1000] [1000];
    int DciBx2IMP, x5DaVvme3l8K, T7Z8lAp;
    int vWN1CAplk [(956 - 954)], pCmNcH;
    int b09f4Hlw, gZcLuXap [(1771 - 771)] [2], ACp6fBZy [1000] [2];
    getchar ();
    getchar ();
    T7Z8lAp = (466 - 466);
    x5DaVvme3l8K = (335 - 335);
    scanf ("%d", &b09f4Hlw);
    for (DciBx2IMP = (836 - 836); b09f4Hlw > DciBx2IMP; DciBx2IMP++) {
        scanf ("%s%d", dwSAdL2Q[DciBx2IMP], &gZcLuXap[DciBx2IMP][(286 - 286)]);
    }
    for (DciBx2IMP = (325 - 325); b09f4Hlw > DciBx2IMP; DciBx2IMP++) {
        if ((652 - 592) > gZcLuXap[DciBx2IMP][(783 - 783)])
            ;
        else {
            gZcLuXap[DciBx2IMP][(135 - 134)] = DciBx2IMP;
            ACp6fBZy[T7Z8lAp][(927 - 927)] = gZcLuXap[DciBx2IMP][(103 - 103)];
            ACp6fBZy[T7Z8lAp][(82 - 81)] = DciBx2IMP;
            T7Z8lAp++;
        }
    }
    pCmNcH = T7Z8lAp;
    {
        if (0) {
            return 0;
        }
    }
    ACp6fBZy[pCmNcH][(383 - 383)] = (10027 - 27);
    for (DciBx2IMP = (260 - 260); DciBx2IMP < pCmNcH; DciBx2IMP++) {
        for (x5DaVvme3l8K = (79 - 79); x5DaVvme3l8K < pCmNcH; x5DaVvme3l8K++) {
            if (ACp6fBZy[x5DaVvme3l8K + (254 - 253)][(42 - 42)] < ACp6fBZy[x5DaVvme3l8K][(834 - 834)]) {
                vWN1CAplk[(225 - 225)] = ACp6fBZy[x5DaVvme3l8K + (207 - 206)][(590 - 590)];
                vWN1CAplk[(968 - 967)] = ACp6fBZy[x5DaVvme3l8K + (975 - 974)][(805 - 804)];
                ACp6fBZy[x5DaVvme3l8K + (137 - 136)][0] = ACp6fBZy[x5DaVvme3l8K][0];
                ACp6fBZy[x5DaVvme3l8K + (783 - 782)][(256 - 255)] = ACp6fBZy[x5DaVvme3l8K][(407 - 406)];
                ACp6fBZy[x5DaVvme3l8K][0] = vWN1CAplk[0];
                ACp6fBZy[x5DaVvme3l8K][(54 - 53)] = vWN1CAplk[(574 - 573)];
            }
            else if (!(ACp6fBZy[x5DaVvme3l8K + (742 - 741)][0] != ACp6fBZy[x5DaVvme3l8K][0]) && ACp6fBZy[x5DaVvme3l8K + (971 - 970)][(129 - 128)] > ACp6fBZy[x5DaVvme3l8K][(386 - 385)]) {
                vWN1CAplk[0] = ACp6fBZy[x5DaVvme3l8K + 1][0];
                vWN1CAplk[1] = ACp6fBZy[x5DaVvme3l8K + 1][1];
                ACp6fBZy[x5DaVvme3l8K + 1][0] = ACp6fBZy[x5DaVvme3l8K][0];
                ACp6fBZy[x5DaVvme3l8K + 1][1] = ACp6fBZy[x5DaVvme3l8K][1];
                ACp6fBZy[x5DaVvme3l8K][0] = vWN1CAplk[0];
                ACp6fBZy[x5DaVvme3l8K][1] = vWN1CAplk[1];
            }
            else
                ;
        }
    }
    for (DciBx2IMP = 0; DciBx2IMP < pCmNcH; DciBx2IMP++) {
        for (x5DaVvme3l8K = 0; b09f4Hlw > x5DaVvme3l8K; x5DaVvme3l8K++) {
            if (!(gZcLuXap[x5DaVvme3l8K][0] != ACp6fBZy[pCmNcH - 1 - DciBx2IMP][0]) && !(gZcLuXap[x5DaVvme3l8K][1] != ACp6fBZy[pCmNcH - DciBx2IMP -1][1]))
                printf ("%s\n", dwSAdL2Q[x5DaVvme3l8K]);
            else
                ;
        }
    }
    for (x5DaVvme3l8K = 0; x5DaVvme3l8K < b09f4Hlw; x5DaVvme3l8K++) {
        if (gZcLuXap[x5DaVvme3l8K][0] < (526 - 466))
            printf ("%s\n", dwSAdL2Q[x5DaVvme3l8K]);
        else
            ;
    }
}

