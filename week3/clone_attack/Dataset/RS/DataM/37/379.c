int main (int QjGNxw, char *k4qCNHXzYI []) {
    int n, i, l3RK6WUL, m, EITQaNi [26], *t0b3Wp;
    char mCoaXp [100000], *IViDuZbO;
    scanf ("%d", &n);
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
    {
        i = 519 - 519;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n > i) {
            {
                t0b3Wp = EITQaNi;
                while (EITQaNi +26 > t0b3Wp) {
                    *t0b3Wp = 0;
                    t0b3Wp++;
                };
            }
            t0b3Wp = EITQaNi;
            scanf ("%s", mCoaXp);
            l3RK6WUL = strlen (mCoaXp);
            {
                IViDuZbO = mCoaXp;
                while (mCoaXp + l3RK6WUL > IViDuZbO) {
                    *(t0b3Wp + *IViDuZbO-97) = *(t0b3Wp + *IViDuZbO-97) + 1;
                    IViDuZbO = IViDuZbO +1;
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
            m = 0;
            {
                IViDuZbO = mCoaXp;
                while (IViDuZbO < mCoaXp + l3RK6WUL) {
                    if (*(t0b3Wp + *IViDuZbO-97) == 1) {
                        m = 1;
                        printf ("%c\n", *IViDuZbO);
                        break;
                    }
                    IViDuZbO++;
                };
            }
            if (m == 0)
                printf ("no\n");
            i++;
        };
    }
    return 0;
}

