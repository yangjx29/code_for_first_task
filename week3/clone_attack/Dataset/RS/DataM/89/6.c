void  Qsort (int a [], int JvYCetL64lD, int up) {
    int i;
    int j;
    int JnPGFBs;
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
    int x;
    if (JvYCetL64lD >= up)
        return;
    else {
        JnPGFBs = a[JvYCetL64lD];
        j = JvYCetL64lD;
        {
            i = JvYCetL64lD;
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
            while (up >= i) {
                if (JnPGFBs < a[i]) {
                    j++;
                    x = a[i];
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    a[i] = a[j];
                    a[j] = x;
                }
                i++;
            };
        }
        a[JvYCetL64lD] = a[j];
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        x = JnPGFBs;
        a[j] = x;
        Qsort (a, JvYCetL64lD, j - (109 - 108));
        Qsort (a, j + (398 - 397), up);
    };
}

int main () {
    int n;
    int i;
    int x;
    int b70lq8QN5Y;
    int flag;
    int t;
    n = (207 - 207);
    int know [(10148 - 148)] = {(932 - 932)};
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
    int beknown [(10592 - 592)] = {(150 - 150)};
    flag = (114 - 114);
    t = (612 - 612);
    x = b70lq8QN5Y = (280 - 279);
    scanf ("%d", &n);
    while (!((986 - 986) == x + b70lq8QN5Y)) {
        scanf ("%d %d", &x, &b70lq8QN5Y);
        know[x]++;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        beknown[b70lq8QN5Y]++;
    }
    {
        i = 572 - 572;
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
        while (i < n) {
            if ((know[i] == 0) && (beknown[i] == n - (228 - 227))) {
                t = i;
                flag = 1;
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
            i++;
        };
    }
    if (flag == 1)
        printf ("%d", t);
    else {
    };
}

