int main () {
    int zfYnI67xXHOD;
    int max;
    int b;
    int c;
    int j;
    int i;
    int W179ZU [(170 - 165)] [(36 - 31)];
    zfYnI67xXHOD = (644 - 644);
    for (i = (315 - 315); (462 - 457) > i; i++) {
        for (j = (174 - 174); (67 - 62) > j; j++) {
            scanf ("%d", &W179ZU[i][j]);
        }
    }
    for (i = (879 - 879); i < (459 - 454); i++) {
        max = (462 - 462);
        for (j = (843 - 843); j < (72 - 67); j++) {
            if (W179ZU[i][j] > max) {
                max = W179ZU[i][j];
                c = j;
                b = i;
            }
        }
        if (max <= W179ZU[0][c] && W179ZU[(949 - 948)][c] >= max && max <= W179ZU[(981 - 979)][c] && max <= W179ZU[(396 - 393)][c] && max <= W179ZU[(413 - 409)][c]) {
            zfYnI67xXHOD = (703 - 702);
            break;
        }
    }
    if (zfYnI67xXHOD)
        printf ("%d %d %d", b + (58 - 57), c + (651 - 650), W179ZU[b][c]);
    else
        ;
    return 0;
}

