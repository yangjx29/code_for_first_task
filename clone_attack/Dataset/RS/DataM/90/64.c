int main () {
    int apple (int m, int aDPH3V4Ee);
    int yYI6bwR, vzBuN7, m, aDPH3V4Ee;
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
    scanf ("%d", &yYI6bwR);
    {
        vzBuN7 = 805 - 804;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (vzBuN7 <= yYI6bwR) {
            vzBuN7++;
            scanf ("%d %d", &m, &aDPH3V4Ee);
            printf ("%d\n", apple (m, aDPH3V4Ee));
        };
    }
    return 0;
}

int apple (int m, int aDPH3V4Ee) {
    int k;
    if (m >= aDPH3V4Ee && aDPH3V4Ee > 1)
        k = apple (m, aDPH3V4Ee - 1) + apple (m - aDPH3V4Ee, aDPH3V4Ee);
    else if (aDPH3V4Ee > 1) {
        k = apple (m, aDPH3V4Ee - 1);
    }
    else
        k = 1;
    return (k);
}

