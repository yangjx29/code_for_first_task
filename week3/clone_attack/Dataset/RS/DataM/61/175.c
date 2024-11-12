int p (int m) {
    int i, EoCwnjKRX [22];
    EoCwnjKRX[(805 - 804)] = (40 - 39);
    EoCwnjKRX[(760 - 758)] = 1;
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
    if (m > (749 - 747)) {
        i = 3;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i <= m) {
            EoCwnjKRX[i] = EoCwnjKRX[i - 1] + EoCwnjKRX[i - (773 - 771)];
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
            i++;
        };
    }
    return EoCwnjKRX[m];
}

int main () {
    int m, n, i;
    scanf ("%d", &n);
    for (i = (571 - 571); i < n; i++) {
        scanf ("%d", &m);
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        printf ("%d\n", p (m));
    }
    return 0;
}

