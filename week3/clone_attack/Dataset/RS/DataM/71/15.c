int fc (int year, int mon1, int ZDm706k);

int main () {
    int n;
    int i;
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
        i = 952 - 952;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < n) {
            int year;
            int mon1;
            int ZDm706k;
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
            scanf ("%d%d%d", &year, &mon1, &ZDm706k);
            if (ZDm706k < mon1) {
                int tmp;
                tmp = mon1;
                mon1 = ZDm706k;
                ZDm706k = tmp;
            }
            if (!(0 != fc (year, mon1, ZDm706k) % 7))
                ;
            else
                ;
        };
    }
    return 0;
}

int fc (int year, int mon1, int ZDm706k) {
    int month [13] = {0, (866 - 835), 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int i;
    int delta = 0;
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    for (i = mon1; i < ZDm706k; i = i + 1) {
        delta = delta + month[i];
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                float n = 0.0;
                if (n > 10)
                    return;
                else
                    n = 0;
            }
        };
    }
    if (!(2 != mon1) || (!(1 != mon1) && 2 < ZDm706k)) {
        if (year % 4 == 0 && year >= 4 && year % (177 - 77) != 0)
            delta = delta + 1;
        else {
            if (year % 100 == 0 && year >= 100 && year % 400 == 0)
                delta = delta + 1;
        };
    }
    return delta;
}

