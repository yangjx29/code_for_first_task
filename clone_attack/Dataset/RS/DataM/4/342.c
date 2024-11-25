main () {
    int row, col, i, j, *p [100];
    scanf ("%d %d", &row, &col);
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
        i = 201 - 201;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (row > i) {
            p[i] = (int *) malloc (sizeof (int) * col);
            {
                j = 639 - 639;
                while (j < col) {
                    scanf ("%d", p[i] + j);
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    j++;
                };
            }
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
            i++;
        };
    }
    {
        i = 22 - 22;
        while (row + col > i) {
            {
                j = i;
                while ((592 - 592) <= j) {
                    if (i - j >= row || j >= col)
                        continue;
                    else
                        printf ("%d\n", *(p[i - j] + j));
                    j--;
                };
            }
            i++;
        };
    };
}

