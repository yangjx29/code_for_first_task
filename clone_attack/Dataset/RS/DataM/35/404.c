int t [10] [10], nEe0jm, b;

int andian (int x, int MEJfapvVb) {
    int i, j = 0;
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (b - 1 >= i) {
            if (t[x][i] > t[x][MEJfapvVb])
                j = j + 1;
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
            i = i + 1;
        };
    }
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
    {
        i = 0;
        while (nEe0jm - 1 >= i) {
            if (t[i][MEJfapvVb] < t[x][MEJfapvVb])
                j++;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            i++;
        };
    }
    if (!(0 != j)) {
        printf ("%d+%d", x, MEJfapvVb);
        return 1;
    }
    else
        return 0;
}

void  main () {
    int c, xojJh0 = 0, r, i, j;
    scanf ("%d,%d", &nEe0jm, &b);
    {
        i = 0;
        while (i <= nEe0jm - 1) {
            {
                j = 0;
                while (j <= b - 1) {
                    scanf ("%d", &t[i][j]);
                    j++;
                };
            }
            i++;
        };
    }
    {
        i = 0;
        while (i <= nEe0jm - 1) {
            for (j = 0; j <= b - 1; j++) {
                xojJh0 = andian (i, j) + xojJh0;
            }
            i++;
        };
    }
    if (xojJh0 == 0)
        ;
}

