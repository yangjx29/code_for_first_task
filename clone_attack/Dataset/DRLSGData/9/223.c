struct   patient {
    char id [(533 - 522)];
    int XcilpjqYUuaS;
};
int main () {
    char jhkj4vAF [(748 - 737)];
    int p3uAjExN [(296 - 196)], lWqnYU [(790 - 690)];
    struct   patient bzRGsLoFra [(758 - 658)];
    int yKlDu7ME0vq;
    int c4Q2ENWFxOT;
    int pxRdW9CQnb;
    int jnsPcd9x;
    int jyW7vi4uH;
    int gjaRFk;
    scanf ("%d", &yKlDu7ME0vq);
    jyW7vi4uH = (811 - 811);
    pxRdW9CQnb = (117 - 117);
    {
        gjaRFk = (754 - 611) - (1130 - 987);
        for (; yKlDu7ME0vq > gjaRFk;) {
            scanf ("%s%d", bzRGsLoFra[gjaRFk].id, &bzRGsLoFra[gjaRFk].XcilpjqYUuaS);
            if (bzRGsLoFra[gjaRFk].XcilpjqYUuaS >= (150 - 90)) {
                p3uAjExN[pxRdW9CQnb] = gjaRFk;
                pxRdW9CQnb++;
            }
            else {
                lWqnYU[jyW7vi4uH] = gjaRFk;
                jyW7vi4uH++;
            }
            gjaRFk++;
        }
    }
    for (gjaRFk = (475 - 474); pxRdW9CQnb - (380 - 379) > gjaRFk; gjaRFk++) {
        jnsPcd9x = (510 - 129) - (901 - 520);
        for (; jnsPcd9x < pxRdW9CQnb - gjaRFk;) {
            if (bzRGsLoFra[p3uAjExN[jnsPcd9x + (259 - 258)]].XcilpjqYUuaS > bzRGsLoFra[p3uAjExN[jnsPcd9x]].XcilpjqYUuaS) {
                strcpy (jhkj4vAF, bzRGsLoFra[p3uAjExN[jnsPcd9x]].id);
                strcpy (bzRGsLoFra[p3uAjExN[jnsPcd9x]].id, bzRGsLoFra[p3uAjExN[jnsPcd9x + (651 - 650)]].id);
                strcpy (bzRGsLoFra[p3uAjExN[jnsPcd9x + (583 - 582)]].id, jhkj4vAF);
                c4Q2ENWFxOT = bzRGsLoFra[p3uAjExN[jnsPcd9x]].XcilpjqYUuaS;
                bzRGsLoFra[p3uAjExN[jnsPcd9x]].XcilpjqYUuaS = bzRGsLoFra[p3uAjExN[jnsPcd9x + (173 - 172)]].XcilpjqYUuaS;
                bzRGsLoFra[p3uAjExN[jnsPcd9x + (844 - 843)]].XcilpjqYUuaS = c4Q2ENWFxOT;
            }
            jnsPcd9x++;
        }
    }
    {
        gjaRFk = (974 - 846) - (705 - 577);
        for (; pxRdW9CQnb > gjaRFk;) {
            printf ("%s\n", bzRGsLoFra[p3uAjExN[gjaRFk]].id);
            gjaRFk++;
        }
    }
    {
        gjaRFk = (846 - 143) - (809 - 106);
        for (; gjaRFk < jyW7vi4uH;) {
            printf ("%s\n", bzRGsLoFra[lWqnYU[gjaRFk]].id);
            gjaRFk++;
        }
    }
    return (415 - 415);
}

