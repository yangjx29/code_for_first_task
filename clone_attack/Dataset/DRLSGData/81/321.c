int change (int eJ8zZYu9FEM [(395 - 390)] [(145 - 140)], int gPB3FjyGibDs, int n) {
    int TigHtI4s, i;
    if (gPB3FjyGibDs < (749 - 749) || gPB3FjyGibDs >= (469 - 464) || n < (932 - 932) || n >= (625 - 620)) {
        return (433 - 433);
    }
    {
        TigHtI4s = (991 - 991);
        while (TigHtI4s < 5) {
            if (TigHtI4s == n) {
                {
                    i = 0;
                    while (i < (160 - 156)) {
                        printf ("%d ", eJ8zZYu9FEM[gPB3FjyGibDs][i]);
                        i++;
                    }
                }
                printf ("%d\n", eJ8zZYu9FEM[gPB3FjyGibDs][(135 - 131)]);
            }
            else if (TigHtI4s == gPB3FjyGibDs) {
                {
                    i = 0;
                    while (i < (520 - 516)) {
                        printf ("%d ", eJ8zZYu9FEM[n][i]);
                        i++;
                    }
                }
                printf ("%d\n", eJ8zZYu9FEM[n][4]);
            }
            else {
                {
                    i = 0;
                    while (i < 4) {
                        printf ("%d ", eJ8zZYu9FEM[TigHtI4s][i]);
                        i++;
                    }
                }
                printf ("%d\n", eJ8zZYu9FEM[TigHtI4s][4]);
            }
            TigHtI4s++;
        }
    }
    return 1;
}

int main () {
    int TigHtI4s;
    int eJ8zZYu9FEM [5] [5];
    int gPB3FjyGibDs;
    int n;
    int i;
    int j;
    TigHtI4s = 0;
    {
        i = 0;
        while (i < 5) {
            j = 0;
            while (j < 5) {
                scanf ("%d", &eJ8zZYu9FEM[i][j]);
                j++;
            }
            i++;
        }
    }
    scanf ("%d%d", &gPB3FjyGibDs, &n);
    change (eJ8zZYu9FEM, gPB3FjyGibDs, n);
}

