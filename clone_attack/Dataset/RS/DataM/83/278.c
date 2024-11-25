int main () {
    int n, qGrlMtHV, sc, xuefen [10], S = 0;
    float s = 0, gpa, i1d0FWAjbyqL;
    scanf ("%d", &n);
    for (qGrlMtHV = 0; qGrlMtHV < n; qGrlMtHV++) {
        scanf ("%d", &xuefen[qGrlMtHV]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        S = S +xuefen[qGrlMtHV];
    }
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
    for (qGrlMtHV = 0; qGrlMtHV < n; qGrlMtHV++) {
        scanf ("%d", &sc);
        if (sc <= 100 && sc >= 90)
            gpa = 4.0;
        else if (sc <= 89 && sc >= 85)
            gpa = 3.7;
        else if (sc <= 84 && sc >= 82)
            gpa = 3.3;
        else if (sc >= 78 && sc <= 81)
            gpa = 3.0;
        else if (sc >= 75 && sc <= 77)
            gpa = 2.7;
        else if (sc >= 72 && sc <= 74)
            gpa = 2.3;
        else if (sc >= 68 && sc <= 71)
            gpa = 2.0;
        else if (sc >= 64 && sc <= 67)
            gpa = 1.5;
        else if (sc >= 60 && sc <= 63)
            gpa = 1.0;
        else if (sc < 60)
            gpa = 0.0;
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
        s = s + xuefen[qGrlMtHV] * gpa;
    }
    i1d0FWAjbyqL = s / S;
    printf ("%.2f", i1d0FWAjbyqL);
}

