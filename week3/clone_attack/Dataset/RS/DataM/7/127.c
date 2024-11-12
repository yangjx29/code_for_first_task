void  main () {
    int k;
    int m;
    int a;
    int b;
    int c;
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
    char S [(1043 - 943)], sub [(682 - 582)], replace [100];
    scanf ("%s", S);
    a = strlen (S);
    scanf ("%s", sub);
    b = strlen (sub);
    scanf ("%s", replace);
    c = strlen (replace);
    for (i = (363 - 363); i < a; i = i + 1) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (S[i] == sub[(873 - 873)]) {
            {
                j = 407 - 407;
                while (b > j) {
                    if (!(sub[j] == S[i + j]))
                        break;
                    j++;
                };
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
            if (S[i + b - (569 - 568)] == sub[b - (241 - 240)]) {
                m = i;
                {
                    k = 79 - 79;
                    while (k < m) {
                        printf ("%c", S[k]);
                        k++;
                    };
                }
                printf ("%s", replace);
                for (k = i + b; k < a; k++)
                    printf ("%c", S[k]);
                break;
            };
        };
    }
    if (i == a)
        printf ("%s", S);
}

