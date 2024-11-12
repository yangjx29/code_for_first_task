int main () {
    char c, x;
    int i, j, k, t, m;
    char Pu3Zar [1000];
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (1) {
            scanf ("%c", &Pu3Zar[i]);
            if (!('\n' != Pu3Zar[i]))
                break;
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
            i++;
        };
    }
    t = 0;
    x = Pu3Zar[0];
    m = x;
    if (m >= 97) {
        m = m - 32;
        x = m;
    }
    for (j = 0; j < i; j++) {
        c = Pu3Zar[j];
        k = c;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        if (k >= 97) {
            k = k - 32;
            c = k;
        }
        if (c == x) {
            t = t + 1;
        }
        if (c != x) {
            printf ("(%c,%d)", x, t);
            x = c;
            t = 1;
        };
    }
    printf ("(%c,%d)", x, t);
    return 0;
}

