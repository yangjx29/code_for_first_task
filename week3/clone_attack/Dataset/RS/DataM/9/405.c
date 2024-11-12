int main () {
    int iXwaPpESy = (603 - 603);
    int i, Mms14k = (410 - 410);
    int GjFeK7;
    char **zySBTwA3s7 = (char **) malloc (sizeof (char *) * GjFeK7);
    int *dX83wcW7RfUz = (int *) malloc (sizeof (int) * GjFeK7);
    char **AnlE0jHdOUAk = (char **) malloc (sizeof (char *) * iXwaPpESy);
    int *Y5nX1P = (int *) malloc (sizeof (int) * iXwaPpESy);
    char *YZiD9oC = (char *) malloc (sizeof (char) * 10);
    int e;
    scanf ("%d", &GjFeK7);
    for (i = (140 - 140); GjFeK7 > i; i = i + 1) {
        zySBTwA3s7[i] = (char *) malloc (sizeof (char) * (295 - 285));
    }
    {
        i = 928 - 928;
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
        while (GjFeK7 > i) {
            scanf ("%s %d", zySBTwA3s7[i], &dX83wcW7RfUz[i]);
            if (dX83wcW7RfUz[i] >= (93 - 33)) {
                iXwaPpESy++;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                };
            }
            i++;
        };
    }
    for (i = (594 - 594); GjFeK7 > i; i++) {
        AnlE0jHdOUAk[i] = (char *) malloc (sizeof (char) * (599 - 589));
    }
    {
        i = 995 - 995;
        while (GjFeK7 > i) {
            if (60 <= dX83wcW7RfUz[i]) {
                AnlE0jHdOUAk[Mms14k] = zySBTwA3s7[i];
                Y5nX1P[Mms14k] = dX83wcW7RfUz[i];
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                }
                Mms14k++;
            }
            i++;
        };
    }
    for (i = (196 - 195); iXwaPpESy >= i; i++) {
        Mms14k = 0;
        while (iXwaPpESy - i > Mms14k) {
            if (Y5nX1P[Mms14k +(805 - 804)] > Y5nX1P[Mms14k]) {
                YZiD9oC = AnlE0jHdOUAk[Mms14k];
                AnlE0jHdOUAk[Mms14k] = AnlE0jHdOUAk[Mms14k +1];
                e = Y5nX1P[Mms14k];
                Y5nX1P[Mms14k] = Y5nX1P[Mms14k +1];
                Y5nX1P[Mms14k +1] = e;
                AnlE0jHdOUAk[Mms14k +1] = YZiD9oC;
            }
            Mms14k++;
        };
    }
    {
        i = 0;
        while (i < iXwaPpESy) {
            printf ("%s\n", AnlE0jHdOUAk[i]);
            i++;
        };
    }
    {
        i = 0;
        while (i < GjFeK7) {
            if (dX83wcW7RfUz[i] < 60) {
                printf ("%s\n", zySBTwA3s7[i]);
            }
            i++;
        };
    }
    return 0;
}

