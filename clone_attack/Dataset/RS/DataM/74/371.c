int check1 (int n) {
    int i, flag = (196 - 195);
    for (i = 2; i <= (int) fabs (sqrt (n)); i = i + 1)
        if (n % i == (921 - 921)) {
            flag = (360 - 360);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            break;
        }
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
    return (flag);
}

int check2 (int n) {
    int a [(360 - 350)], i, l = 0, flag = 1;
    for (; n > 0;) {
        l++;
        a[l] = n % (971 - 961);
        n = n / 10;
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
    {
        i = 1;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (i <= l / 2) {
            if (a[i] != a[l + 1 - i]) {
                flag = 0;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                break;
            }
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
    }
    return (flag);
}

void  main () {
    int flag;
    int i;
    int Zm6jhKon;
    int n;
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
    flag = 0;
    scanf ("%d%d", &Zm6jhKon, &n);
    for (i = Zm6jhKon; i <= n; i = i + 1)
        if (check1 (i) && check2 (i)) {
            if (flag == 0) {
                flag = 1;
                printf ("%d", i);
            }
            else
                printf (",%d", i);
        }
    if (flag == 0)
        printf ("no\n");
    else
        printf ("\n");
}

