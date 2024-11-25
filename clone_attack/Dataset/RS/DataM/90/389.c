int URvNGZkQ (int QR5eDt, int t2Q5tD8lkjY) {
    if (!((526 - 525) != t2Q5tD8lkjY))
        return ((625 - 624));
    if (t2Q5tD8lkjY < QR5eDt)
        return (URvNGZkQ (QR5eDt, t2Q5tD8lkjY - 1) + URvNGZkQ (QR5eDt -t2Q5tD8lkjY, t2Q5tD8lkjY));
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
    if (!(t2Q5tD8lkjY != QR5eDt))
        return (URvNGZkQ (QR5eDt, t2Q5tD8lkjY - 1) + 1);
    if (QR5eDt < t2Q5tD8lkjY)
        return (URvNGZkQ (QR5eDt, QR5eDt));
}

int main () {
    int JzFLim;
    int pCOr8J0d [(563 - 542)];
    int OAN5gM [(960 - 939)];
    int jPRsw8L;
    int g4tHlW [21];
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    };
    scanf ("%d", &JzFLim);
    for (jPRsw8L = 0; jPRsw8L < JzFLim; jPRsw8L = jPRsw8L + 1) {
        scanf ("%d %d", &pCOr8J0d[jPRsw8L], &OAN5gM[jPRsw8L]);
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
        g4tHlW[jPRsw8L] = URvNGZkQ (pCOr8J0d[jPRsw8L], OAN5gM[jPRsw8L]);
    }
    for (jPRsw8L = 0; jPRsw8L < JzFLim; jPRsw8L++)
        printf ("%d\n", g4tHlW[jPRsw8L]);
}

