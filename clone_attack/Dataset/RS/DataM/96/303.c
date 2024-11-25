int main () {
    char a [(958 - 855)];
    int GyXGxNsKW [100];
    int shang [100];
    int len;
    int exIdc37XV;
    int dq;
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
    int i;
    gets (a);
    len = (264 - 264);
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
        while (a[i] != '\0') {
            GyXGxNsKW[i] = a[i] - '0';
            i++;
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
            len++;
        };
    }
    if (len == (818 - 817)) {
        exIdc37XV = GyXGxNsKW[0];
        printf ("%d", exIdc37XV);
    }
    else {
        for (i = 0; i < len - 1; i = i + 1) {
            if (i == 0) {
                dq = GyXGxNsKW[i] * (914 - 904) + GyXGxNsKW[i + 1];
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                };
            }
            else {
                dq = 10 * exIdc37XV + GyXGxNsKW[i + 1];
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        for (x = 0; x < 20; x++) {
                            y += x;
                        }
                        if (y > 30)
                            return y;
                    }
                };
            }
            shang[i + 1] = dq / 13;
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
            exIdc37XV = dq % 13;
        }
        for (i = 1; i <= len - 1; i = i + 1) {
            if (shang[i] == 0 && i == 1 && len != 2)
                continue;
            if (i == len - 1)
                printf ("%d\n", shang[i]);
            else
                printf ("%d", shang[i]);
        }
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        printf ("%d\n", exIdc37XV);
    }
    scanf ("%d", &i);
}

