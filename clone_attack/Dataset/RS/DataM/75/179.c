int main () {
    char Ln6eEz;
    int QYk6iwq7ht;
    int mRKTYO8j;
    int NzwgSs36H;
    int ZqemTKC3dvPM;
    int HZtG9HW [(1498 - 398)];
    int sL7f42 [1100];
    int c6ORJgcx4;
    int onrzcsoAXSKf;
    int r7neoGY;
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
    QYk6iwq7ht = (239 - 239);
    mRKTYO8j = 0;
    NzwgSs36H = 1000;
    ZqemTKC3dvPM = 0;
    do {
        Ln6eEz = getchar ();
        scanf ("%d", &HZtG9HW[QYk6iwq7ht]);
        QYk6iwq7ht++;
    }
    while (Ln6eEz == ',');
    QYk6iwq7ht = 0;
    do {
        scanf ("%d", &sL7f42[QYk6iwq7ht]);
        QYk6iwq7ht++;
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
        Ln6eEz = getchar ();
    }
    while (Ln6eEz == ',');
    printf ("%d ", QYk6iwq7ht);
    for (c6ORJgcx4 = 0; c6ORJgcx4 < QYk6iwq7ht; c6ORJgcx4++) {
        if (HZtG9HW[c6ORJgcx4] < NzwgSs36H)
            NzwgSs36H = HZtG9HW[c6ORJgcx4];
        if (sL7f42[c6ORJgcx4] > mRKTYO8j)
            mRKTYO8j = sL7f42[c6ORJgcx4];
    }
    for (c6ORJgcx4 = NzwgSs36H; mRKTYO8j > c6ORJgcx4; c6ORJgcx4++) {
        r7neoGY = 0;
        for (onrzcsoAXSKf = 0; QYk6iwq7ht > onrzcsoAXSKf; onrzcsoAXSKf++)
            if (HZtG9HW[onrzcsoAXSKf] <= c6ORJgcx4 && sL7f42[onrzcsoAXSKf] > c6ORJgcx4)
                r7neoGY++;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        if (r7neoGY > ZqemTKC3dvPM)
            ZqemTKC3dvPM = r7neoGY;
    }
    printf ("%d\n", ZqemTKC3dvPM);
}

