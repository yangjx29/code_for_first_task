int vkOvdt (int m, int n) {
    if (n > m)
        n = m;
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
    if ((m == (199 - 198)) || (m == (914 - 914)) || (n == 1))
        return 1;
    else
        return vkOvdt (m, n - 1) + vkOvdt (m - n, n);
}

void  main () {
    int i, t, m [(64 - 44)] = {(83 - 83)}, n [(586 - 566)] = {(402 - 402)}, answer [(283 - 263)] = {0};
    scanf ("%d", &t);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    {
        i = 0;
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
        while (i < t) {
            scanf ("%d%d", &m[i], &n[i]);
            answer[i] = vkOvdt (m[i], n[i]);
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < t) {
            printf ("%d\n", answer[i]);
            i++;
        };
    };
}

