int main () {
    int a [(612 - 512)] [(914 - 814)] = {(987 - 987)};
    int n;
    int i;
    int l [(160 - 60)] = {(633 - 633)};
    int d;
    int j;
    int N [100] = {(984 - 984)};
    i = (570 - 570);
    j = (898 - 898);
    do {
        j = (46 - 46);
        do {
            scanf ("%d", &a[i][j]);
            j = j + (743 - 742);
        }
        while (a[i][j - (334 - 333)] != (917 - 917) && a[i][j - (666 - 665)] != -(622 - 621));
        l[i] = j - (219 - 218);
        i = i + (590 - 589);
    }
    while (a[i - (562 - 561)][j - (755 - 754)] != -(125 - 124));
    n = (757 - 757);
    n = i - (641 - 640);
    {
        i = (218 - 218);
        for (; n > i;) {
            for (j = (649 - 649); j < l[i]; j = j + 1) {
                for (d = j; l[i] > d; d = d + 1) {
                    if (a[i][d] == (399 - 397) * a[i][j] || a[i][j] == 2 * a[i][d])
                        N[i]++;
                }
            }
            i = i + 1;
        }
    }
    {
        i = (20 - 20);
        for (; n > i;) {
            printf ("%d\n", N[i]);
            i = i + 1;
        }
    }
    return 0;
}
