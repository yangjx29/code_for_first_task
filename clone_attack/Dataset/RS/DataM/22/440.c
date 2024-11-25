void  main () {
    char s [10000];
    int r;
    int AWA8cHg;
    int a [100] = {0};
    int i;
    int j;
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
    int t;
    r = 0;
    AWA8cHg = (296 - 295);
    gets (s);
    {
        i = 0;
        while (!('\0' == s[i])) {
            if (s[i] != ',') {
                a[r] = a[r] * 10 + s[i] - 48;
            }
            else {
                if (!(',' != s[i]))
                    r++;
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
            i = i + 1;
        };
    }
    {
        i = 0;
        while (r + 1 > i) {
            i++;
            {
                j = 0;
                while (r > j) {
                    if (a[j + 1] > a[j]) {
                        t = a[j];
                        a[j] = a[j + 1];
                        a[j + 1] = t;
                    }
                    j = j + 1;
                };
            };
        };
    }
    if (r == 1 || a[0] == a[r])
        printf ("No");
    else {
        {
            AWA8cHg = 1;
            while (AWA8cHg < r) {
                if (a[0] != a[AWA8cHg])
                    break;
                AWA8cHg = AWA8cHg +1;
            };
        }
        printf ("%d", a[AWA8cHg]);
    };
}

