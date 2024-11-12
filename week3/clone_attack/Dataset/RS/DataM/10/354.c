int a [25];

int main () {
    int RmTsSIe (int WYvegAL, int L6OgNUfW);
    int m;
    int faRx5McHh;
    int L6OgNUfW;
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
    m = 0;
    scanf ("%d", &L6OgNUfW);
    for (faRx5McHh = 0; faRx5McHh < L6OgNUfW; faRx5McHh = faRx5McHh + 1) {
        scanf ("%d", &a[faRx5McHh]);
    }
    for (faRx5McHh = 0; faRx5McHh < L6OgNUfW; faRx5McHh = faRx5McHh + 1) {
        if (RmTsSIe (faRx5McHh, L6OgNUfW) > m)
            m = RmTsSIe (faRx5McHh, L6OgNUfW);
    }
    printf ("%d", m);
}

int RmTsSIe (int WYvegAL, int L6OgNUfW) {
    int cdmStWLx;
    int Q4zQkJvlNgn;
    cdmStWLx = 0;
    if (WYvegAL == L6OgNUfW -1)
        cdmStWLx = 0;
    for (Q4zQkJvlNgn = WYvegAL +1; Q4zQkJvlNgn < L6OgNUfW; Q4zQkJvlNgn = Q4zQkJvlNgn +1) {
        if (a[Q4zQkJvlNgn] <= a[WYvegAL]) {
            if (RmTsSIe (Q4zQkJvlNgn, L6OgNUfW) > cdmStWLx)
                cdmStWLx = RmTsSIe (Q4zQkJvlNgn, L6OgNUfW);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    float n = 0.0;
                    if (n > 10)
                        return;
                    else
                        n = 0;
                }
            };
        };
    }
    return cdmStWLx + 1;
}

