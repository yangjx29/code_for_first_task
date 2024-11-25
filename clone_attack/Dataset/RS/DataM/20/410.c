int main () {
    int i, QVmRKf, n, m;
    char hfw6dILTRWyn [50];
    char str2 [50];
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
    for (; scanf ("%s%s", hfw6dILTRWyn, str2) != EOF;) {
        m = strlen (hfw6dILTRWyn);
        n = strlen (str2);
        QVmRKf = 0;
        for (i = 0; i < m; i++) {
            if (hfw6dILTRWyn[i] > hfw6dILTRWyn[QVmRKf])
                QVmRKf = i;
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
        }
        {
            i = hfw6dILTRWyn;
            while (i > QVmRKf) {
                hfw6dILTRWyn[i + n] = hfw6dILTRWyn[i];
                i--;
            };
        }
        {
            i = 0;
            while (i < n) {
                hfw6dILTRWyn[QVmRKf +1 + i] = str2[i];
                i++;
            };
        }
        printf ("%s\n", hfw6dILTRWyn);
    }
    return 0;
}

