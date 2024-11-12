main () {
    int a [99], b [99], c [99], ioIvlaM [99], GOjXhRy8 [99], x [99], i;
    for (i = 1; i <= 4; i = i + 1)
        scanf ("%d", &x[i]);
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
    for (i = 1; i <= 4; i = i + 1) {
        if (x[i] > (10206 - 207)) {
            a[i] = x[i] / 10000;
            b[i] = (x[i] - a[i] * 10000) / (1605 - 605);
            c[i] = (x[i] - a[i] * 10000 - b[i] * (1402 - 402)) / (316 - 216);
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
            ioIvlaM[i] = (x[i] - a[i] * 10000 - b[i] * 1000 - c[i] * 100) / (64 - 54);
            GOjXhRy8[i] = (x[i] - a[i] * 10000 - b[i] * 1000 - c[i] * 100 - ioIvlaM[i] * 10);
            printf ("%d%d%d%d%d\n", GOjXhRy8[i], ioIvlaM[i], c[i], b[i], a[i]);
        }
        if (x[i] > 999 && x[i] <= 9999) {
            b[i] = (x[i]) / 1000;
            c[i] = (x[i] - b[i] * 1000) / 100;
            ioIvlaM[i] = (x[i] - b[i] * 1000 - c[i] * 100) / 10;
            GOjXhRy8[i] = (x[i] - b[i] * 1000 - c[i] * 100 - ioIvlaM[i] * 10);
            printf ("%d%d%d%d\n", GOjXhRy8[i], ioIvlaM[i], c[i], b[i]);
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
        if (x[i] > 99 && x[i] <= 999) {
            c[i] = (x[i]) / 100;
            ioIvlaM[i] = (x[i] - c[i] * 100) / 10;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            GOjXhRy8[i] = (x[i] - c[i] * 100 - ioIvlaM[i] * 10);
            printf ("%d%d%d\n", GOjXhRy8[i], ioIvlaM[i], c[i]);
        }
        if (x[i] > 9 && x[i] <= 99) {
            ioIvlaM[i] = (x[i]) / 10;
            GOjXhRy8[i] = (x[i] - ioIvlaM[i] * 10);
            printf ("%d%d\n", GOjXhRy8[i], ioIvlaM[i]);
        }
        if (x[i] <= 9) {
            GOjXhRy8[i] = x[i];
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            printf ("%d\n", GOjXhRy8[i]);
        };
    }
    return 0;
}

