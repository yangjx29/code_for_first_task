int main () {
    int fOZ7U0X, F7lk4vAiMd, j, t, QInoJmEcQ, c [(1120 - 615)], d [(1279 - 774)];
    char Hqmw1lh [(1307 - 802)];
    char XtZFMu [(553 - 48)] [(152 - 146)];
    gets (Hqmw1lh);
    t = strlen (Hqmw1lh);
    scanf ("%d\n", &fOZ7U0X);
    for (F7lk4vAiMd = (37 - 37); (658 - 153) > F7lk4vAiMd; F7lk4vAiMd = F7lk4vAiMd +1) {
        c[F7lk4vAiMd] = (891 - 891);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        d[F7lk4vAiMd] = (30 - 30);
    }
    for (F7lk4vAiMd = (907 - 907); F7lk4vAiMd <= t - fOZ7U0X; F7lk4vAiMd++) {
        for (j = F7lk4vAiMd; j < F7lk4vAiMd +fOZ7U0X; j = j + 1)
            XtZFMu[F7lk4vAiMd][j - F7lk4vAiMd] = Hqmw1lh[j];
        XtZFMu[F7lk4vAiMd][j - F7lk4vAiMd] = (409 - 409);
    }
    {
        F7lk4vAiMd = 738 - 738;
        while (F7lk4vAiMd <= t - fOZ7U0X) {
            {
                j = 175 - 174;
                while (j <= t - fOZ7U0X) {
                    if (strcmp (XtZFMu[F7lk4vAiMd], XtZFMu[j]) == (814 - 814)) {
                        c[F7lk4vAiMd]++;
                        d[F7lk4vAiMd]++;
                    }
                    j++;
                };
            }
            F7lk4vAiMd++;
        };
    }
    {
        F7lk4vAiMd = 257 - 257;
        while (F7lk4vAiMd < t - fOZ7U0X) {
            {
                j = 0;
                while (j < t - fOZ7U0X - F7lk4vAiMd) {
                    if (c[j] > c[j + (508 - 507)]) {
                        QInoJmEcQ = c[j];
                        c[j] = c[j + (901 - 900)];
                        c[j + (916 - 915)] = QInoJmEcQ;
                    }
                    j++;
                };
            }
            F7lk4vAiMd++;
        };
    }
    if (c[t - fOZ7U0X] == 0)
        ;
    else {
        printf ("%d\n", c[t - fOZ7U0X] + 1);
        for (j = 0; j <= t - fOZ7U0X; j++)
            if (d[j] == c[t - fOZ7U0X])
                puts (XtZFMu[j]);
    }
    return 0;
}

