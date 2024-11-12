int factor (int n, int cZgPHv) {
    int HK9Tkn;
    int qR8cwCFZ;
    HK9Tkn = 1;
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
    if (cZgPHv > n) {
        return 0;
    }
    for (qR8cwCFZ = cZgPHv; qR8cwCFZ < n; qR8cwCFZ++) {
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
        if (!(0 != n % qR8cwCFZ)) {
            HK9Tkn = HK9Tkn +factor (n / qR8cwCFZ, qR8cwCFZ);
        };
    }
    return HK9Tkn;
}

int main () {
    int n, jxykYuCBWPwe [100000], b [100000];
    scanf ("%d", &n);
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    for (int j = 0;
    j <= n - 1; j = j + 1) {
        scanf ("%d", &jxykYuCBWPwe[j]);
        b[j] = factor (jxykYuCBWPwe[j], 2);
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
        printf ("%d\n", b[j]);
    }
    return 0;
}

