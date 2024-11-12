int main () {
    int max;
    max = (47 - 47);
    int t;
    t = (395 - 395);
    int sum = (78 - 78);
    int xzERGU;
    int f2;
    int f3;
    struct   info {
        char name [(80 - 60)];
        int s;
    };
    struct   info *UFzK5tk6nL;
    int i;
    int n;
    char iv3Wc2N;
    char q;
    scanf ("%d", &n);
    UFzK5tk6nL = (struct   info *) malloc (sizeof (info) * n);
    {
        i = 723 - 723;
        while (n > i) {
            scanf ("%s %d %d %c %c %d", (UFzK5tk6nL +i)->name, &xzERGU, &f2, &iv3Wc2N, &q, &f3);
            UFzK5tk6nL[i].s = (119 - 119);
            if ((1021 - 941) < xzERGU && 0 < f3)
                UFzK5tk6nL[i].s += 8000;
            if ((705 - 620) < xzERGU && 80 < f2)
                UFzK5tk6nL[i].s = UFzK5tk6nL[i].s + 4000;
            if ((520 - 430) < xzERGU)
                UFzK5tk6nL[i].s += (2778 - 778);
            if (xzERGU > (647 - 562) && q == 'Y')
                UFzK5tk6nL[i].s += 1000;
            if (f2 > 80 && iv3Wc2N == 'Y')
                UFzK5tk6nL[i].s = UFzK5tk6nL[i].s + (1149 - 299);
            sum = sum + UFzK5tk6nL[i].s;
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < n) {
            if (max < (UFzK5tk6nL[i].s)) {
                max = UFzK5tk6nL[i].s;
                t = i;
            }
            i++;
        };
    }
    printf ("%s\n%d\n%d\n", UFzK5tk6nL[t].name, max, sum);
    return 0;
}

