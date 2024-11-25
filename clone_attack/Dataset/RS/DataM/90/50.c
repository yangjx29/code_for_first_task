int CEtROI8z3q, m, t, cnt;

void  vmIdHn (int x, int AaNfcqWB, int y1YIBqKlUa) {
    if (CEtROI8z3q < x) {
        if (AaNfcqWB == 0)
            cnt = cnt + 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        return;
    }
    for (int i = y1YIBqKlUa;
    i <= AaNfcqWB / (CEtROI8z3q -x + 1); i = i + 1)
        vmIdHn (x + 1, AaNfcqWB -i, i);
}

int main () {
    scanf ("%d", &t);
    while (t = t - 1) {
        cnt = 0;
        scanf ("%d%d", &m, &CEtROI8z3q);
        vmIdHn (1, m, 0);
        printf ("%d\n", cnt);
    }
    return 0;
}

