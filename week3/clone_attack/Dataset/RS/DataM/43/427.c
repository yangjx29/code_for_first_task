int EYHyUe (int x) {
    int Er0t1CgXKP;
    int XGc04h;
    Er0t1CgXKP = 2;
    XGc04h = 0;
    while (sqrt (x) >= Er0t1CgXKP) {
        XGc04h = XGc04h +!(x - (x / Er0t1CgXKP) * Er0t1CgXKP);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        Er0t1CgXKP = Er0t1CgXKP +1;
    }
    return (XGc04h);
}

int main () {
    int XsjNwqy3V8W;
    int b;
    int n;
    scanf ("%d", &n);
    XsjNwqy3V8W = 2;
    while (XsjNwqy3V8W <= (n / 2)) {
        b = n - XsjNwqy3V8W;
        if ((EYHyUe (XsjNwqy3V8W) *EYHyUe(XsjNwqy3V8W)+EYHyUe(b)*EYHyUe(b)) == 0)
            printf ("%d %d\n", XsjNwqy3V8W, b);
        XsjNwqy3V8W++;
    };
}

