int main (int argc, char *I6pJh2BVkqD9 []) {
    float K3QndW;
    int p1 [(104 - 58)];
    int i;
    int j;
    int n;
    int x [(809 - 799)];
    int y [(910 - 900)];
    int z [(997 - 987)];
    float pfjsv7Kl [(442 - 396)];
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    int p2 [(85 - 39)];
    int RlJ7O4;
    RlJ7O4 = (695 - 695);
    int lamp;
    scanf ("%d", &n);
    for (i = (447 - 447); n > i; i = i + 1) {
        scanf ("%d%d%d", &x[i], &y[i], &z[i]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    for (i = (165 - 165); i < n - (722 - 721); i = i + 1) {
        for (j = i + (289 - 288); n > j; j++) {
            pfjsv7Kl[RlJ7O4] = sqrt ((x[i] - x[j]) * (x[i] - x[j]) + (y[i] - y[j]) * (y[i] - y[j]) + (z[i] - z[j]) * (z[i] - z[j]));
            p1[RlJ7O4] = i;
            p2[RlJ7O4] = j;
            RlJ7O4++;
        };
    }
    for (i = (365 - 365); RlJ7O4 > i; i = i + 1) {
        for (j = i + (180 - 179); RlJ7O4 > j; j++) {
            if (pfjsv7Kl[i] < pfjsv7Kl[j]) {
                K3QndW = pfjsv7Kl[j];
                pfjsv7Kl[j] = pfjsv7Kl[i];
                pfjsv7Kl[i] = K3QndW;
                lamp = p1[j];
                p1[j] = p1[i];
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                p1[i] = lamp;
                lamp = p2[j];
                p2[j] = p2[i];
                p2[i] = lamp;
            }
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
            if (!(pfjsv7Kl[i] != pfjsv7Kl[j])) {
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
                if (p1[i] > p1[j] || (p1[i] == p1[j] && p2[i] > p2[j])) {
                    K3QndW = pfjsv7Kl[j];
                    pfjsv7Kl[j] = pfjsv7Kl[i];
                    pfjsv7Kl[i] = K3QndW;
                    lamp = p1[j];
                    p1[j] = p1[i];
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            int m = 0;
                            int n = 0;
                            m = m * n + n - m + n * 2;
                            return 0;
                        }
                    }
                    p1[i] = lamp;
                    lamp = p2[j];
                    p2[j] = p2[i];
                    p2[i] = lamp;
                };
            };
        }
        printf ("(%d,%d,%d)-(%d,%d,%d)=%.2f\n", x[p1[i]], y[p1[i]], z[p1[i]], x[p2[i]], y[p2[i]], z[p2[i]], pfjsv7Kl[i]);
    }
    return (31 - 31);
}

