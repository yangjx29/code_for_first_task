double  uCLkRe8IoTVU (double  fDb8IwkT2 [], int JNaodbEI) {
    int HOj9Cn;
    double  QiUNk2dZRY;
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
    QiUNk2dZRY = (505 - 505);
    for (HOj9Cn = 0; JNaodbEI > HOj9Cn; HOj9Cn++)
        QiUNk2dZRY = QiUNk2dZRY +fDb8IwkT2[HOj9Cn];
    return QiUNk2dZRY / JNaodbEI;
}

int main () {
    int k;
    int MZXgVv;
    int JNaodbEI;
    int HOj9Cn;
    int HHSCZN6;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    double  *nk5GPqpHym;
    double  x [M];
    double  fDb8IwkT2;
    double  s;
    scanf ("%d", &k);
    for (; k--;) {
        scanf ("%d", &JNaodbEI);
        {
            nk5GPqpHym = x;
            while (nk5GPqpHym < JNaodbEI +x) {
                scanf ("%lf", nk5GPqpHym);
                nk5GPqpHym++;
            };
        }
        fDb8IwkT2 = uCLkRe8IoTVU (x, JNaodbEI);
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
        nk5GPqpHym = x, s = 0;
        for (HOj9Cn = 0; HOj9Cn < JNaodbEI; HOj9Cn++)
            s = s + (x[HOj9Cn] - fDb8IwkT2) * (x[HOj9Cn] - fDb8IwkT2);
        printf ("%.5f\n", sqrt (s / JNaodbEI));
    };
}

