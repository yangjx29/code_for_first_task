main () {
    int dzKUcj7PYJ;
    int i;
    int n;
    int pj4pR8Awd;
    int UuW5JAEwFrz6 [(10085 - 85)];
    int SY7VMi [10000];
    scanf ("%d", &dzKUcj7PYJ);
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
    UuW5JAEwFrz6[(948 - 948)] = (621 - 619);
    UuW5JAEwFrz6[1] = 3;
    SY7VMi[0] = 1;
    SY7VMi[1] = 2;
    for (i = 2; 10000 > i; i++) {
        UuW5JAEwFrz6[i] = UuW5JAEwFrz6[i - 1] + UuW5JAEwFrz6[i - 2];
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        SY7VMi[i] = SY7VMi[i - 1] + SY7VMi[i - 2];
    }
    {
        i = 0;
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
        while (dzKUcj7PYJ > i) {
            float sum = 0;
            scanf ("%d", &n);
            for (pj4pR8Awd = 0; pj4pR8Awd < n; pj4pR8Awd++)
                sum = sum + (float) UuW5JAEwFrz6[pj4pR8Awd] / SY7VMi[pj4pR8Awd];
            printf ("%.3f\n", sum);
            i++;
        };
    }
    getchar ();
    getchar ();
    getchar ();
}

