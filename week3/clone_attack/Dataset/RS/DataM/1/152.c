int aRAb8SGvmP = (427 - 426);

int f (int ZTHcZhx) {
    int z = 1, wgdVUxf, v = (409 - 409);
    {
        wgdVUxf = aRAb8SGvmP + 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (sqrt (ZTHcZhx) >= wgdVUxf) {
            if (!(0 != ZTHcZhx % wgdVUxf)) {
                z = z + f (ZTHcZhx / wgdVUxf);
                v = v + 1;
                aRAb8SGvmP = wgdVUxf;
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            wgdVUxf++;
        };
    }
    if (v == 0)
        z = 1;
    return z;
}

main () {
    int n, u = 0, a;
    scanf ("%d", &n);
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    do {
        u++;
        scanf ("%d", &a);
        printf ("%d\n", f (a));
        aRAb8SGvmP = 1;
    }
    while (u != n);
}

