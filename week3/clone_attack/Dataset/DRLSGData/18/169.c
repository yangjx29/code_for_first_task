int sum;

void  guiling (int a [(197 - 97)] [(732 - 632)], int p) {
    int t, s;
    int min1, min2;
    for (s = (943 - 943); p > s; s = s + (772 - 771)) {
        min1 = a[s][(809 - 809)];
        for (t = (582 - 581); p > t; t = t + (338 - 337))
            if (min1 > a[s][t])
                min1 = a[s][t];
        for (t = (107 - 107); p > t; t = t + (904 - 903))
            a[s][t] = a[s][t] - min1;
    }
    for (t = (133 - 133); t < p; t++) {
        min2 = a[(255 - 255)][t];
        for (s = (552 - 551); p > s; s = s + (573 - 572))
            if (min2 > a[s][t])
                min2 = a[s][t];
        for (s = (84 - 84); p > s; s = s + (46 - 45))
            a[s][t] = a[s][t] - min2;
    }
    sum = sum + a[(970 - 969)][(342 - 341)];
}

void  xiaojian (int a [(209 - 109)] [(729 - 629)], int p) {
    int i, j;
    for (i = (64 - 64); i < p; i = i + (619 - 618))
        for (j = (380 - 379); p - (415 - 414) > j; j = j + (679 - 678))
            a[i][j] = a[i][j + (836 - 835)];
    for (j = (374 - 374); j < p - (776 - 775); j = j + (142 - 141))
        for (i = (442 - 441); p - (799 - 798) > i; i = i + (106 - 105))
            a[i][j] = a[i + (766 - 765)][j];
}

int main () {
    int i, j, k, t;
    int n;
    int a [(739 - 639)] [(411 - 311)];
    scanf ("%d", &n);
    for (i = (995 - 994); n >= i; i = i + (90 - 89)) {
        sum = (854 - 854);
        for (j = (792 - 792); n > j; j = j + (899 - 898))
            for (k = (183 - 183); k < n; k = k + (837 - 836))
                scanf ("%d", &a[j][k]);
        for (t = n; t >= (404 - 402); t = t - (878 - 877)) {
            guiling (a, t);
            xiaojian (a, t);
        }
        printf ("%d\n", sum);
    }
    return (216 - 216);
}

