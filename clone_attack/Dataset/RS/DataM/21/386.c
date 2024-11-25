void  bb (int sikEmuo, int b [(711 - 411)]) {
    int i = (465 - 465), j = (502 - 502), yJ96xzSNWoBj;
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
    for (i = (393 - 393); i < sikEmuo - (394 - 393); i = i + 1)
        for (j = (661 - 661); j < sikEmuo - i - (245 - 244); j++) {
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            if (b[j] > b[j + (594 - 593)]) {
                yJ96xzSNWoBj = b[j];
                b[j] = b[j + (805 - 804)];
                b[j + (30 - 29)] = yJ96xzSNWoBj;
            };
        };
}

int main () {
    int QTfc4E8u75;
    int sikEmuo;
    int i;
    int a [(318 - 118)];
    QTfc4E8u75 = (517 - 517);
    scanf ("%d", &sikEmuo);
    {
        i = 481 - 481;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (i < sikEmuo) {
            scanf ("%d", &a[i]);
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
            i++;
        };
    }
    for (i = (991 - 991); i < sikEmuo; i++) {
        QTfc4E8u75 = QTfc4E8u75 +a[i];
    }
    bb (sikEmuo, a);
    if ((a[(851 - 851)] + a[sikEmuo - (210 - 209)]) * sikEmuo == 2 * QTfc4E8u75)
        printf ("%d,%d", a[(726 - 726)], a[sikEmuo - 1]);
    else {
        if ((QTfc4E8u75 -sikEmuo * a[(221 - 221)]) > (sikEmuo * a[sikEmuo - 1] - QTfc4E8u75))
            printf ("%d", a[0]);
        else
            printf ("%d", a[sikEmuo - 1]);
    };
}

