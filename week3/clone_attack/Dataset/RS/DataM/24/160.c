int main () {
    char G5NPty6 [2000], N0gKX8Eo3bf5 [201] [50];
    int TkCyUK, NgdYOF6nhDX [(238 - 37)] = {(716 - 716)}, ZnyGKJ9F [201] = {(534 - 534)}, flag, fTvHZz, m, tem, obzlopre, vtXo6Qd;
    scanf ("\n");
    gets (G5NPty6);
    scanf ("%d", &TkCyUK);
    fTvHZz = strlen (G5NPty6);
    flag = (788 - 788);
    m = (849 - 849);
    {
        obzlopre = 753 - 753;
        while (fTvHZz > obzlopre) {
            if ((!(' ' == G5NPty6[obzlopre])) && (!((491 - 490) != flag)))
                N0gKX8Eo3bf5[m][NgdYOF6nhDX[m]++] = G5NPty6[obzlopre];
            if ((G5NPty6[obzlopre] != ' ') && (!(0 != flag))) {
                N0gKX8Eo3bf5[m][NgdYOF6nhDX[m]++] = G5NPty6[obzlopre];
                flag = (774 - 773);
            }
            if ((!(' ' != G5NPty6[obzlopre])) && (!(1 != flag))) {
                m++;
                flag = 0;
            }
            obzlopre = obzlopre + 1;
        };
    }
    {
        obzlopre = 0;
        while (m >= obzlopre) {
            ZnyGKJ9F[obzlopre] = NgdYOF6nhDX[obzlopre];
            obzlopre = obzlopre + 1;
        };
    }
    {
        obzlopre = 0;
        while (obzlopre <= m) {
            {
                vtXo6Qd = obzlopre + 1;
                while (vtXo6Qd <= m) {
                    if (ZnyGKJ9F[obzlopre] < ZnyGKJ9F[vtXo6Qd]) {
                        tem = ZnyGKJ9F[obzlopre];
                        ZnyGKJ9F[obzlopre] = ZnyGKJ9F[vtXo6Qd];
                        ZnyGKJ9F[vtXo6Qd] = tem;
                    }
                    vtXo6Qd++;
                };
            }
            obzlopre++;
        };
    }
    {
        obzlopre = 0;
        while (obzlopre <= m) {
            if (NgdYOF6nhDX[obzlopre] == ZnyGKJ9F[0]) {
                {
                    vtXo6Qd = 0;
                    while (vtXo6Qd < NgdYOF6nhDX[obzlopre]) {
                        printf ("%c", N0gKX8Eo3bf5[obzlopre][vtXo6Qd]);
                        vtXo6Qd++;
                    };
                }
                break;
            }
            obzlopre++;
        };
    }
    {
        obzlopre = 0;
        while (obzlopre <= m) {
            if (NgdYOF6nhDX[obzlopre] == ZnyGKJ9F[m]) {
                {
                    vtXo6Qd = 0;
                    while (vtXo6Qd < NgdYOF6nhDX[obzlopre]) {
                        printf ("%c", N0gKX8Eo3bf5[obzlopre][vtXo6Qd]);
                        vtXo6Qd++;
                    };
                }
                break;
            }
            obzlopre++;
        };
    }
    printf ("\n");
    return 0;
}

