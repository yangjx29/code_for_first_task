int sushu (int x) {
    int z;
    int MeTvt6ZMygJ2;
    z = 0;
    if (!(0 != x % 2))
        z = 1;
    else {
        MeTvt6ZMygJ2 = 3;
        while (MeTvt6ZMygJ2 <= sqrt (x)) {
            if (!(0 != x % MeTvt6ZMygJ2)) {
                z = 1;
                break;
            }
            MeTvt6ZMygJ2 += 2;
        };
    }
    return (z);
}

main () {
    int max;
    int i;
    int MeTvt6ZMygJ2;
    int Tnj4ZKu;
    int b;
    scanf ("%d", &max);
    for (i = 6; i <= max; i += 2) {
        MeTvt6ZMygJ2 = 2;
        while (MeTvt6ZMygJ2 <= i / 2) {
            Tnj4ZKu = sushu (MeTvt6ZMygJ2);
            b = sushu (i - MeTvt6ZMygJ2);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            if (Tnj4ZKu == 0 && b == 0) {
                printf ("%d=%d+%d\n", i, MeTvt6ZMygJ2, i - MeTvt6ZMygJ2);
                break;
            }
            MeTvt6ZMygJ2 = MeTvt6ZMygJ2 +1;
        };
    }
    return 0;
}

