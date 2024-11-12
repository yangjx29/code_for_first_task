struct   ren {
    char XP6JSzN [(681 - 673)];
    double  SyqmPuwb;
}
T0JcyVHmnEo8 [(269 - 224)];

main () {
    int vT7hrz, GfZ5GSnKp, rLTiFQNgn, CyREf73a1;
    scanf ("%d", &CyREf73a1);
    for (vT7hrz = (952 - 952); vT7hrz < CyREf73a1; vT7hrz = vT7hrz + 1) {
        scanf ("%s %lf", T0JcyVHmnEo8[vT7hrz].XP6JSzN, &T0JcyVHmnEo8[vT7hrz].SyqmPuwb);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    for (vT7hrz = (933 - 933); vT7hrz < CyREf73a1; vT7hrz++) {
        if (strcmp (T0JcyVHmnEo8[vT7hrz].XP6JSzN, "female") == (305 - 305))
            T0JcyVHmnEo8[vT7hrz].SyqmPuwb = 10 - T0JcyVHmnEo8[vT7hrz].SyqmPuwb;
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
        };
    }
    if (CyREf73a1 > 2) {
        for (vT7hrz = 0; vT7hrz < CyREf73a1 -1; vT7hrz++) {
            struct   ren temp;
            {
                GfZ5GSnKp = 1;
                while (CyREf73a1 -vT7hrz > GfZ5GSnKp) {
                    if (T0JcyVHmnEo8[GfZ5GSnKp].SyqmPuwb < T0JcyVHmnEo8[GfZ5GSnKp -1].SyqmPuwb) {
                        temp = T0JcyVHmnEo8[GfZ5GSnKp];
                        T0JcyVHmnEo8[GfZ5GSnKp] = T0JcyVHmnEo8[GfZ5GSnKp -1];
                        T0JcyVHmnEo8[GfZ5GSnKp -1] = temp;
                    }
                    GfZ5GSnKp++;
                };
            };
        };
    }
    else {
        struct   ren temp;
        if (T0JcyVHmnEo8[0].SyqmPuwb > T0JcyVHmnEo8[1].SyqmPuwb) {
            temp = T0JcyVHmnEo8[1];
            T0JcyVHmnEo8[1] = T0JcyVHmnEo8[0];
            T0JcyVHmnEo8[0] = temp;
        };
    }
    for (vT7hrz = 0; vT7hrz < CyREf73a1; vT7hrz++) {
        if (strcmp (T0JcyVHmnEo8[vT7hrz].XP6JSzN, "female") == 0)
            T0JcyVHmnEo8[vT7hrz].SyqmPuwb = 10 - T0JcyVHmnEo8[vT7hrz].SyqmPuwb;
    }
    for (vT7hrz = 0; vT7hrz < CyREf73a1; vT7hrz++) {
        if (vT7hrz == 0)
            printf ("%.2lf", T0JcyVHmnEo8[vT7hrz].SyqmPuwb);
        else
            printf (" %.2lf", T0JcyVHmnEo8[vT7hrz].SyqmPuwb);
    };
}

