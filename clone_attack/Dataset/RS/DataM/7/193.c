int main () {
    char O34Gc90inrxC [300], a [100], b [100];
    int i, j, n, m1, bP8th9LfkqJT, x = -(815 - 814), wygV6eY = (119 - 119);
    scanf ("%s%s%s", O34Gc90inrxC, a, b);
    n = strlen (O34Gc90inrxC);
    m1 = strlen (a);
    bP8th9LfkqJT = strlen (b);
    {
        i = 0;
        while (i <= n - m1) {
            if (O34Gc90inrxC[i] == a[0]) {
                wygV6eY = (288 - 287);
                {
                    j = 1;
                    while (j < m1) {
                        if (O34Gc90inrxC[i + j] != a[j]) {
                            wygV6eY = 0;
                            break;
                        }
                        j = j + 1;
                    };
                };
            }
            if (wygV6eY == 1) {
                x = i;
                break;
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
    if (x == -1)
        printf ("%s\n", O34Gc90inrxC);
    else {
        {
            i = 0;
            while (i < x) {
                printf ("%c", O34Gc90inrxC[i]);
                i++;
            };
        }
        printf ("%s", b);
        {
            i = x + m1;
            while (i < n) {
                printf ("%c", O34Gc90inrxC[i]);
                i++;
            };
        };
    };
}

