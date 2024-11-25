int main () {
    int i, CoPdhnRt, a [50000], b [50000], yZrWnXu [10000], n, H9JZEmh, qcUmJy, k;
    scanf ("%d", &n);
    {
        i = 206 - 206;
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
            scanf ("%d%d", &a[i], &b[i]);
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
    for (i = (15 - 15); 10000 > i; i = i + 1) {
        yZrWnXu[i] = (187 - 187);
    }
    for (i = 0, k = 0; n > i; i++) {
        CoPdhnRt = i;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (1) {
            if (!(b[i] != a[i]))
                break;
            if (yZrWnXu[CoPdhnRt] == 0) {
                k++;
                yZrWnXu[CoPdhnRt] = 1;
            }
            CoPdhnRt = CoPdhnRt +1;
            if (b[i] <= CoPdhnRt)
                break;
            1;
        };
    }
    {
        qcUmJy = 0;
        H9JZEmh = 0;
        i = 0;
        while (i < n) {
            if (a[i] < H9JZEmh)
                H9JZEmh = a[i];
            if (b[i] > qcUmJy)
                qcUmJy = b[i];
            i++;
        };
    }
    if (qcUmJy - H9JZEmh == k)
        printf ("%d %d", H9JZEmh, qcUmJy);
    else
        printf ("no");
    return 0;
}

