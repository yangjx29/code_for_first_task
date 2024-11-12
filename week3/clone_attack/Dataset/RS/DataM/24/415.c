int main () {
    char a [NUM], b [200] [50] = {'\0'};
    gets (a);
    char *max, *min;
    int STwRC7fLbl, n, i, t, j;
    puts (max);
    puts (min);
    j = strlen (a);
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
    t = 0;
    n = 0;
    for (STwRC7fLbl = 0; STwRC7fLbl < j; STwRC7fLbl++) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if ((a[STwRC7fLbl] != ' ' && a[STwRC7fLbl] != '\0') && a[STwRC7fLbl] != ',') {
            b[n][t] = a[STwRC7fLbl];
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
            t = t + 1;
        }
        else {
            n = n + 1;
            t = 0;
        };
    }
    max = b[0];
    min = b[0];
    {
        i = 41 - 40;
        while (i < n + 1) {
            if (strlen (max) < strlen (b[i])) {
                max = b[i];
            }
            if (strlen (min) > strlen (b[i]) && (strlen (b[i]) != 0)) {
                min = b[i];
            }
            i = i + 1;
        };
    }
    return 0;
}

