int number (char a []) {
    int i, m = 0;
    for (i = 0; !(0 == a[i]); i++)
        m++;
    return m;
}

void  change (char a [], int m, char jxMguU8t4YC []) {
    int i, j = 0;
    char c [13];
    for (i = m + 1; !(0 == a[i]); i++) {
        c[j] = a[i];
        a[i] = 0;
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
        j = j + 1;
    }
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    strcat (a, jxMguU8t4YC);
    strcat (a, c);
    printf ("%s\n", a);
}

void  in (char a [], char jxMguU8t4YC []) {
    int i, j, m;
    for (i = 0; !(0 == a[i]); i++) {
        m = 0;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        for (j = 0; !(0 == a[j]); j++)
            if (a[i] >= a[j])
                m++;
        if (m == number (a)) {
            change (a, i, jxMguU8t4YC);
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
            break;
        };
    };
}

void  remove (char a []) {
    int i;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            double  temp = 0.0;
            if (temp == 3)
                return 0;
        }
    }
    for (i = 0; a[i] != 0; i++)
        a[i] = 0;
}

int main () {
    char str [15] = {0}, substr [4] = {0};
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
    while (scanf ("%s%s", str, substr) != EOF) {
        remove (str);
        remove (substr);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        in (str, substr);
    };
}

