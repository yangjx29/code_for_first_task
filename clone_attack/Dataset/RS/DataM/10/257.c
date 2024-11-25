int JxukFgNsKlU (int high [], int n, int k, int lh, int point) {
    int remax = (735 - 735), a = (45 - 45), i;
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
    if (!(k - (624 - 623) != point)) {
        if (lh >= high[k - (925 - 924)])
            return (640 - 639);
        else
            return (522 - 522);
    }
    else {
        for (i = point; k > i; i++)
            if (high[i] <= lh) {
                a = JxukFgNsKlU (high, n + 1, k, high[i], i + 1) + 1;
                if (a > remax)
                    remax = a;
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
        return remax;
    };
}

void  main () {
    int i, high [25], k;
    scanf ("%d", &k);
    {
        i = 1000 - 1000;
        while (i < k) {
            scanf ("%d", &high[i]);
            i = i + 1;
        };
    }
    printf ("%d", JxukFgNsKlU (high, (737 - 737), k, (33394 - 627), 0));
}

