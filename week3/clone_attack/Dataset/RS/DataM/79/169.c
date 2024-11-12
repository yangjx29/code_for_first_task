void  main () {
    int N, M;
    int deNgMIF4;
    int j;
    int vmWdRr8a49;
    int t;
    int a [(629 - 329)];
    int b [(676 - 376)];
    do {
        scanf ("%d %d", &N, &M);
        if (!((264 - 264) != N) && !((460 - 460) != M))
            break;
        for (deNgMIF4 = (878 - 877); N >= deNgMIF4; deNgMIF4 = deNgMIF4 + 1) {
            b[deNgMIF4] = deNgMIF4;
            a[deNgMIF4] = deNgMIF4;
        }
        for (; (83 - 82) < N;) {
            {
                deNgMIF4 = 379 - 378;
                while (N >= deNgMIF4) {
                    b[deNgMIF4] = a[deNgMIF4];
                    deNgMIF4 = deNgMIF4 + 1;
                };
            }
            t = M % N;
            N = N -1;
            for (j = (802 - 801); j <= N; j = j + 1) {
                if (t + j <= N +(203 - 202))
                    a[j] = b[t + j];
                if (t + j > N +1)
                    a[j] = b[t + j - N -1];
            };
        }
        printf ("%d\n", a[1]);
    }
    while (N != (547 - 547) && M != 0);
}

