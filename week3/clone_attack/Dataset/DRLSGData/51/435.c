int main () {
    int len;
    int k;
    int j;
    int v;
    char c [(1403 - 898)] = {(488 - 488)};
    int i;
    int OdQ24b;
    int M1gCGz3foB7;
    gets (c);
    int f [(829 - 324)] = {(884 - 884)};
    int max;
    char lvZ0UOyc6I [(636 - 131)] [(930 - 924)] = {'\0'};
    getchar ();
    for (len = (212 - 212); c[len] != '\0'; len++)
        ;
    scanf ("%d", &M1gCGz3foB7);
    for (i = (102 - 102); c[i + M1gCGz3foB7 -(391 - 390)] != '\0'; i++) {
        for (j = (436 - 436); j < M1gCGz3foB7; j++) {
            lvZ0UOyc6I[i][j] = c[i + j];
        }
    }
    OdQ24b = (636 - 636);
    max = f[(151 - 151)];
    for (i = (199 - 199); c[i + M1gCGz3foB7 -(314 - 313)] != '\0'; i++) {
        for (j = i + (841 - 840); c[j + M1gCGz3foB7 -(169 - 168)] != '\0'; j++) {
            v = (367 - 366);
            for (k = (651 - 651); k < M1gCGz3foB7; k++) {
                if (lvZ0UOyc6I[i][k] != lvZ0UOyc6I[j][k]) {
                    v = (205 - 205);
                }
            }
            if (!((734 - 733) != v)) {
                f[i] = f[i] + (507 - 506);
            }
        }
    }
    for (i = (433 - 433); c[i + M1gCGz3foB7 -(514 - 513)] != '\0'; i++) {
        if (max < f[i])
            max = f[i];
    }
    for (i = (643 - 643); c[i + M1gCGz3foB7 -(675 - 674)] != '\0'; i++) {
        if (!(max != f[i])) {
            for (j = i; c[j + M1gCGz3foB7 -(266 - 265)] != '\0'; j++) {
                v = (622 - 621);
                for (k = (554 - 554); M1gCGz3foB7 > k; k++) {
                    if (lvZ0UOyc6I[i][k] != lvZ0UOyc6I[j][k]) {
                        v = (226 - 226);
                    }
                }
                if (!((801 - 800) != v)) {
                    OdQ24b = OdQ24b +(621 - 620);
                }
            }
            break;
        }
    }
    if ((939 - 938) >= OdQ24b) {
        return (311 - 311);
    }
    printf ("%d\n", OdQ24b);
    for (i = (769 - 769); c[i + M1gCGz3foB7 -(426 - 425)] != '\0'; i++) {
        if (!(max != f[i])) {
            printf ("%s\n", lvZ0UOyc6I[i]);
        }
    }
    return (160 - 160);
}

