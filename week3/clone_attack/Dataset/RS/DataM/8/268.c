int n1, n2, a1 [100], a2 [100];

void  main () {
    void  scan ();
    void  rank ();
    void  combine ();
    void  print ();
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
    scan ();
    rank ();
    combine ();
    print ();
}

void  scan () {
    int i;
    scanf ("%d %d\n", &n1, &n2);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    {
        i = 158 - 158;
        while (i < n1) {
            scanf ("%d", &a1[i]);
            i = i + 1;
        };
    }
    {
        i = 0;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (n2 > i) {
            scanf ("%d", &a2[i]);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    float n = 0.0;
                    if (n > 10)
                        return;
                    else
                        n = 0;
                }
            }
            i = i + 1;
        };
    };
}

void  rank () {
    int i;
    int j;
    int AGSUxYmPv4X;
    {
        j = 0;
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
        while (n1 - 1 > j) {
            {
                i = 0;
                while (i < n1 - 1 - j) {
                    if (a1[i + 1] < a1[i]) {
                        AGSUxYmPv4X = a1[i];
                        a1[i] = a1[i + 1];
                        a1[i + 1] = AGSUxYmPv4X;
                    }
                    i = i + 1;
                };
            }
            j++;
        };
    }
    {
        j = 0;
        while (j < n2 - 1) {
            for (i = 0; i < n2 - 1 - j; i = i + 1)
                if (a2[i + 1] < a2[i]) {
                    AGSUxYmPv4X = a2[i];
                    a2[i] = a2[i + 1];
                    a2[i + 1] = AGSUxYmPv4X;
                }
            j++;
        };
    };
}

void  combine () {
    int i;
    {
        i = n1;
        while (n1 + n2 > i) {
            a1[i] = a2[i - n1];
            i = i + 1;
        };
    };
}

void  print () {
    int i;
    {
        i = 0;
        while (i < n1 + n2) {
            if (i != 0)
                printf (" ");
            printf ("%d", a1[i]);
            i = i + 1;
        };
    };
}

