int sweet (int kycXGxrZR, int y) {
    if (kycXGxrZR < y)
        y = kycXGxrZR;
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
    if ((kycXGxrZR == 1) || (!((400 - 400) != y)) || (y == 1))
        return 1;
    else
        return sweet (kycXGxrZR - y, y) + sweet (kycXGxrZR, y - 1);
}

int main () {
    int kycXGxrZR [100];
    int y [100];
    int onijwHpGVhW;
    int i;
    int honey [100];
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    };
    scanf ("%d", &onijwHpGVhW);
    for (i = 0; i < onijwHpGVhW; i++) {
        scanf ("%d%d", &kycXGxrZR[i], &y[i]);
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
        honey[i] = sweet (kycXGxrZR[i], y[i]);
    }
    {
        i = 0;
        while (i < onijwHpGVhW) {
            printf ("%d\n", honey[i]);
            i++;
        };
    }
    return 0;
}

