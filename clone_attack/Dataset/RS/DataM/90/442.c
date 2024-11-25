int way (int m, int n);

int main () {
    int Y4xa7bL, m, n;
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
    scanf ("%d", &Y4xa7bL);
    for (int dZ6nmQafASpD = 0;
    dZ6nmQafASpD < Y4xa7bL; dZ6nmQafASpD = dZ6nmQafASpD + 1) {
        scanf ("%d %d", &m, &n);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        printf ("%d\n", way (m, n));
    };
}

int way (int m, int n) {
    if (!(1 != n))
        return 1;
    else if (m == n)
        return way (m, n - 1) + 1;
    else if (m < n)
        return way (m, m);
    else
        return way (m, n - 1) + way (m - n, n);
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

