int bmh5Io0r (int kUA6kj) {
    int ZtfkpGzwj9A, JUC9WuAd, nCzIvLaPye = (740 - 740), wwClTyNx5m8;
    JUC9WuAd = sqrt (kUA6kj);
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
    if (!((983 - 981) != kUA6kj) || !(3 != kUA6kj))
        ZtfkpGzwj9A = (360 - 359);
    else if (kUA6kj % (793 - 791) == (939 - 939))
        ZtfkpGzwj9A = (709 - 709);
    else {
        {
            wwClTyNx5m8 = 791 - 789;
            while (JUC9WuAd >= wwClTyNx5m8) {
                if (wwClTyNx5m8 % 2 == (426 - 425)) {
                    if (kUA6kj % wwClTyNx5m8 == 0)
                        break;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    nCzIvLaPye = nCzIvLaPye + 1;
                }
                wwClTyNx5m8++;
            };
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (nCzIvLaPye == ((JUC9WuAd -1) / 2))
            ZtfkpGzwj9A = 1;
        else
            ZtfkpGzwj9A = 0;
    }
    return ZtfkpGzwj9A;
}

int main () {
    int n, wwClTyNx5m8, jrt78na;
    scanf ("%d", &n);
    {
        wwClTyNx5m8 = 6;
        while (wwClTyNx5m8 <= n) {
            if (wwClTyNx5m8 % 2 == 0) {
                jrt78na = 2;
                while (jrt78na <= wwClTyNx5m8 / 2) {
                    if (bmh5Io0r (jrt78na) && bmh5Io0r (wwClTyNx5m8 - jrt78na)) {
                        printf ("%d=%d+%d\n", wwClTyNx5m8, jrt78na, wwClTyNx5m8 - jrt78na);
                        break;
                    }
                    jrt78na = jrt78na + 1;
                };
            }
            wwClTyNx5m8++;
        };
    }
    return 0;
}

