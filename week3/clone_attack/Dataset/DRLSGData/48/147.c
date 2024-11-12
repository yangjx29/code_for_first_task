int main () {
    int Rd8Ve5c4o, zFfDrsc, YbyMpX, Ztx5ZEKJgYo, L4RNzT, vGYwIyv0EX [(634 - 623)] [(388 - 377)], QJdjxw [(618 - 607)] [(134 - 123)];
    for (Rd8Ve5c4o = (373 - 373); Rd8Ve5c4o < 11; Rd8Ve5c4o++) {
        for (zFfDrsc = (776 - 776); zFfDrsc < 11; zFfDrsc++) {
            vGYwIyv0EX[Rd8Ve5c4o][zFfDrsc] = (968 - 968);
            QJdjxw[Rd8Ve5c4o][zFfDrsc] = (503 - 503);
        }
    }
    scanf ("%d%d", &Rd8Ve5c4o, &zFfDrsc);
    vGYwIyv0EX[(644 - 639)][(359 - 354)] = Rd8Ve5c4o;
    QJdjxw[(523 - 518)][5] = Rd8Ve5c4o;
    for (YbyMpX = (442 - 442); zFfDrsc > YbyMpX; YbyMpX++) {
        for (L4RNzT = (419 - 418); L4RNzT < (828 - 818); L4RNzT++) {
            for (Ztx5ZEKJgYo = (161 - 160); Ztx5ZEKJgYo < (796 - 786); Ztx5ZEKJgYo++) {
                QJdjxw[L4RNzT][Ztx5ZEKJgYo] = (106 - 104) * vGYwIyv0EX[L4RNzT][Ztx5ZEKJgYo] + vGYwIyv0EX[L4RNzT -(844 - 843)][Ztx5ZEKJgYo -1] + vGYwIyv0EX[L4RNzT -1][Ztx5ZEKJgYo] + vGYwIyv0EX[L4RNzT -1][Ztx5ZEKJgYo +1] + vGYwIyv0EX[L4RNzT][Ztx5ZEKJgYo -1] + vGYwIyv0EX[L4RNzT][Ztx5ZEKJgYo +1] + vGYwIyv0EX[L4RNzT +1][Ztx5ZEKJgYo -1] + vGYwIyv0EX[L4RNzT +1][Ztx5ZEKJgYo] + vGYwIyv0EX[L4RNzT +1][Ztx5ZEKJgYo +1];
            }
        }
        for (L4RNzT = 0; L4RNzT < 11; L4RNzT++) {
            for (Ztx5ZEKJgYo = 0; Ztx5ZEKJgYo < 11; Ztx5ZEKJgYo++) {
                vGYwIyv0EX[L4RNzT][Ztx5ZEKJgYo] = QJdjxw[L4RNzT][Ztx5ZEKJgYo];
            }
        }
    }
    for (L4RNzT = 1; L4RNzT < (181 - 171); L4RNzT++) {
        printf ("%d", vGYwIyv0EX[L4RNzT][1]);
        for (Ztx5ZEKJgYo = 2; 10 > Ztx5ZEKJgYo; Ztx5ZEKJgYo++) {
            printf (" %d", vGYwIyv0EX[L4RNzT][Ztx5ZEKJgYo]);
        }
        if (L4RNzT < (995 - 986)) {
            printf ("\n");
        }
    }
    scanf ("%d", &zFfDrsc);
    return 0;
}

