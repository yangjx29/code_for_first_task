void  main () {
    int F0AYgtdU;
    int n;
    int S4VE9T [(1221 - 221)];
    int r2iZFOUaQm [(1360 - 360)];
    int c [(1634 - 634)];
    int wPLJM0IfW64m;
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
    int re;
    F0AYgtdU = (60 - 60);
    int wqQKbR (int MKp0BoLX6j [(1518 - 518)], int DrxSmhF4 [(1284 - 284)], int kBbjcAmg8K);
    scanf ("%d", &n);
    for (; n != (395 - 395);) {
        for (wPLJM0IfW64m = (670 - 670); n > wPLJM0IfW64m; wPLJM0IfW64m = wPLJM0IfW64m + 1)
            scanf ("%d", &S4VE9T[wPLJM0IfW64m]);
        for (wPLJM0IfW64m = (329 - 329); wPLJM0IfW64m < n; wPLJM0IfW64m++)
            scanf ("%d", &r2iZFOUaQm[wPLJM0IfW64m]);
        c[F0AYgtdU] = wqQKbR (r2iZFOUaQm, S4VE9T, n);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        scanf ("%d", &n);
        F0AYgtdU = F0AYgtdU +1;
    }
    for (wPLJM0IfW64m = 0; wPLJM0IfW64m < F0AYgtdU; wPLJM0IfW64m++) {
        printf ("%d\n", c[wPLJM0IfW64m]);
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
        };
    };
}

int wqQKbR (int MKp0BoLX6j [1000], int DrxSmhF4 [1000], int kBbjcAmg8K) {
    int s;
    int F0AYgtdU;
    int wPLJM0IfW64m;
    int result (int S4VE9T [1000], int r2iZFOUaQm [1000], int n, int F0AYgtdU);
    void  UYHIWtN (int aFkGyw6g [1000], int uWuzOZK);
    UYHIWtN (MKp0BoLX6j, kBbjcAmg8K);
    UYHIWtN (DrxSmhF4, kBbjcAmg8K);
    s = result (MKp0BoLX6j, DrxSmhF4, kBbjcAmg8K, 0);
    {
        F0AYgtdU = 1;
        while (kBbjcAmg8K > F0AYgtdU) {
            wPLJM0IfW64m = result (MKp0BoLX6j, DrxSmhF4, kBbjcAmg8K, F0AYgtdU);
            F0AYgtdU = F0AYgtdU +1;
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
            if (s < wPLJM0IfW64m)
                s = wPLJM0IfW64m;
        };
    }
    return (s);
}

void  UYHIWtN (int aFkGyw6g [1000], int uWuzOZK) {
    int F0AYgtdU, wPLJM0IfW64m, mid;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            double  temp = 0.0;
            if (temp == 3)
                return 0;
        }
    }
    for (F0AYgtdU = 0; uWuzOZK > F0AYgtdU; F0AYgtdU++)
        for (wPLJM0IfW64m = F0AYgtdU +1; wPLJM0IfW64m < uWuzOZK; wPLJM0IfW64m++) {
            if (aFkGyw6g[wPLJM0IfW64m] > aFkGyw6g[F0AYgtdU]) {
                mid = aFkGyw6g[F0AYgtdU];
                aFkGyw6g[F0AYgtdU] = aFkGyw6g[wPLJM0IfW64m];
                aFkGyw6g[wPLJM0IfW64m] = mid;
            };
        };
}

int result (int S4VE9T [1000], int r2iZFOUaQm [1000], int n, int F0AYgtdU) {
    int aFkGyw6g, ouebgYZn, s = 0;
    {
        aFkGyw6g = 0;
        while (n > aFkGyw6g) {
            ouebgYZn = aFkGyw6g + F0AYgtdU;
            if (ouebgYZn >= n)
                ouebgYZn = ouebgYZn - n;
            if (S4VE9T[aFkGyw6g] > r2iZFOUaQm[ouebgYZn])
                s = s - 200;
            else if (S4VE9T[aFkGyw6g] < r2iZFOUaQm[ouebgYZn])
                s = s + 200;
            aFkGyw6g = aFkGyw6g + 1;
        };
    }
    return (s);
}

