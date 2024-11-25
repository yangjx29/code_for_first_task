int main () {
    int p;
    int i;
    int j;
    int r;
    int row;
    int qe2U7HWFC9;
    int flag1;
    int a [(227 - 219)] [8];
    int max;
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
    int EQ6mjNvDl;
    p = (485 - 485);
    scanf ("%d,%d", &row, &qe2U7HWFC9);
    {
        i = 657 - 657;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < row) {
            {
                j = 975 - 975;
                while (j < qe2U7HWFC9) {
                    scanf ("%d", &a[i][j]);
                    j = j + 1;
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
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < row) {
            max = a[i][0];
            EQ6mjNvDl = 0;
            {
                j = 0;
                while (j < qe2U7HWFC9) {
                    if (max < a[i][j]) {
                        max = a[i][j];
                        EQ6mjNvDl = j;
                    }
                    j = j + 1;
                };
            }
            for (r = 0, flag1 = 1; r < row && flag1; r = r + 1)
                if (max > a[r][EQ6mjNvDl])
                    flag1 = 0;
            if (flag1) {
                p = 1;
                printf ("%d+%d", i, EQ6mjNvDl);
            }
            i = i + 1;
        };
    }
    if (p != 1)
        ;
    return 0;
}

