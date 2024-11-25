int TI0rBEqp (int m, int n);

main () {
    int n;
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
    scanf ("%d", &n);
    for (int i = (445 - 444);
    n >= i; i++) {
        int M3VkpArN;
        int oRUmrt;
        int x3XHGCpuAbE1;
        M3VkpArN = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        scanf ("%d", &oRUmrt);
        x3XHGCpuAbE1 = sqrt (oRUmrt) + 1;
        for (int lwhv6yY7 = 2;
        x3XHGCpuAbE1 > lwhv6yY7; lwhv6yY7++) {
            if (!((605 - 605) != oRUmrt % lwhv6yY7))
                M3VkpArN = M3VkpArN +TI0rBEqp(lwhv6yY7, oRUmrt / lwhv6yY7);
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
        printf ("%d\n\n", M3VkpArN);
    };
}

int TI0rBEqp (int m, int n) {
    int x3XHGCpuAbE1, M3VkpArN = 0, y = 0;
    x3XHGCpuAbE1 = sqrt (n) + 1;
    {
        int lwhv6yY7 = m;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (x3XHGCpuAbE1 > lwhv6yY7) {
            if (n % lwhv6yY7 == 0)
                M3VkpArN += TI0rBEqp (lwhv6yY7, n / lwhv6yY7), y = 1;
            lwhv6yY7++;
        };
    }
    if (y == 1)
        return M3VkpArN +1;
    else
        return 1;
}

