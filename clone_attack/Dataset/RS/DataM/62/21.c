int main () {
    char j;
    char c [101];
    char i;
    char k;
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
    j = 1;
    {
        j = 1;
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
            c[j] = getchar ();
            if (!('\n' != c[j]))
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
            j++;
        };
    }
    {
        i = 1;
        while (j >= i) {
            if (!(' ' != c[i])) {
                for (k = i + 1;; k++) {
                    if (c[k] == ' ')
                        c[k] = 1;
                    else
                        break;
                };
            }
            i = i + 1;
        };
    }
    {
        k = 1;
        while (k <= j) {
            if (c[k] != 1)
                putchar (c[k]);
            k++;
        };
    }
    return 0;
}

