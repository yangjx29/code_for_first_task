main () {
    char dyN9elk [1001];
    char b [1001];
    int c [1001];
    int m;
    m = 0;
    scanf ("%s", dyN9elk);
    b[0] = dyN9elk[0];
    {
        int l = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (l <= 1000) {
            c[l] = (926 - 925);
            b[l] = 0;
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
            l++;
        };
    }
    {
        int i = 0;
        while (i <= strlen (dyN9elk)) {
            if (dyN9elk[i] == dyN9elk[i + 1] || dyN9elk[i] == dyN9elk[i + 1] + 32 || dyN9elk[i] == dyN9elk[i + 1] - 32)
                c[m]++;
            else {
                b[m] = dyN9elk[i];
                m = m + 1;
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            i++;
        };
    }
    {
        int k = 0;
        while (k < strlen (b)) {
            if (b[k] > 95)
                b[k] = b[k] - 32;
            printf ("(%c,%d)", b[k], c[k]);
            k = k + 1;
        };
    };
}

