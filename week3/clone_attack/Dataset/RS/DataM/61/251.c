int main () {
    int n;
    int zCYL1M;
    int rPjqxM;
    int j;
    int d;
    scanf ("%d", &n);
    for (zCYL1M = 0; n > zCYL1M; zCYL1M = zCYL1M + 1) {
        int fPuNEGoX;
        fPuNEGoX = 1;
        int YIsciV6Qpu;
        YIsciV6Qpu = 1;
        scanf ("%d", &rPjqxM);
        if (!(1 != rPjqxM) || rPjqxM == 2) {
            printf ("%d\n", 1);
            continue;
        }
        {
            j = 3;
            while (j <= rPjqxM) {
                j = j + 1;
                d = fPuNEGoX + YIsciV6Qpu;
                fPuNEGoX = YIsciV6Qpu;
                YIsciV6Qpu = d;
            };
        }
        printf ("%d\n", d);
    }
    return 0;
}

