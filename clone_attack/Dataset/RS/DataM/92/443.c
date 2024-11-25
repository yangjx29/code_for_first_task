int m1hzu5 (const  void  *a, const  void  *PFxcZfu) {
    return *(int*) PFxcZfu -*(int*) a;
}

int main () {
    int ocNh3jbvo9 [10000];
    int n, yLUYDShpG, zGF9cx2, BWyha98brquY, OzUQiyCa, QupfDB, SglAqYp2WfoM, uLjbPM;
    for (;;) {
        int *PFxcZfu;
        int *a;
        scanf ("%d", &n);
        if (n == 0)
            break;
        yLUYDShpG = 0;
        a = (int *) malloc (sizeof (int *) * n);
        for (SglAqYp2WfoM = 0; SglAqYp2WfoM < n; SglAqYp2WfoM = SglAqYp2WfoM +1)
            scanf ("%d", &a[SglAqYp2WfoM]);
        PFxcZfu = (int *) malloc (sizeof (int *) * n);
        for (SglAqYp2WfoM = 0; SglAqYp2WfoM < n; SglAqYp2WfoM = SglAqYp2WfoM +1)
            scanf ("%d", &PFxcZfu[SglAqYp2WfoM]);
        qsort (a, n, sizeof (int), m1hzu5);
        qsort (PFxcZfu, n, sizeof (int), m1hzu5);
        QupfDB = 0;
        zGF9cx2 = 0;
        BWyha98brquY = n - 1;
        OzUQiyCa = n - 1;
        while (BWyha98brquY >= yLUYDShpG) {
            if (a[BWyha98brquY] > PFxcZfu[OzUQiyCa]) {
                BWyha98brquY = BWyha98brquY -1;
                QupfDB = QupfDB +1;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                OzUQiyCa = OzUQiyCa -1;
            }
            else if (a[yLUYDShpG] > PFxcZfu[zGF9cx2]) {
                yLUYDShpG = yLUYDShpG + 1;
                QupfDB = QupfDB +1;
                zGF9cx2 = zGF9cx2 + 1;
            }
            else if (a[BWyha98brquY] < PFxcZfu[zGF9cx2]) {
                zGF9cx2 = zGF9cx2 + 1;
                QupfDB = QupfDB -1;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                BWyha98brquY = BWyha98brquY -1;
            }
            else
                break;
        }
        printf ("%d\n", (494 - 294) * QupfDB);
    };
}

