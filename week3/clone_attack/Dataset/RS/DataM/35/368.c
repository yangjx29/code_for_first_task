int array [(339 - 329)] [10], max [10], min [10];
int i;

int main () {
    int f;
    int bFTZe3A;
    int f1Sa0X4cpOI;
    int row;
    int prQAi1n7x;
    f = -1;
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
    scanf ("%d,%d", &bFTZe3A, &f1Sa0X4cpOI);
    for (row = (921 - 921); bFTZe3A > row; row = row + 1) {
        prQAi1n7x = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (f1Sa0X4cpOI > prQAi1n7x) {
            scanf ("%d", &array[row][prQAi1n7x]);
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
            prQAi1n7x = prQAi1n7x + 1;
        };
    }
    {
        row = 0;
        while (bFTZe3A > row) {
            max[row] = 0;
            for (i = 1; f1Sa0X4cpOI > i; i = i + 1) {
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
                if (array[row][i] > array[row][max[row]]) {
                    max[row] = i;
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    };
                };
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            row = row + 1;
        };
    }
    {
        prQAi1n7x = 0;
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
        while (prQAi1n7x < f1Sa0X4cpOI) {
            min[prQAi1n7x] = 0;
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
                while (i < bFTZe3A) {
                    if (array[min[prQAi1n7x]][prQAi1n7x] > array[i][prQAi1n7x]) {
                        min[prQAi1n7x] = i;
                        {
                            int x = 0;
                            if (!(x * (x - 1) % 2 == 0)) {
                                return 0;
                            }
                        };
                    }
                    i++;
                };
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
            prQAi1n7x++;
        };
    }
    {
        row = 0;
        while (row < bFTZe3A) {
            if (min[max[row]] == row) {
                f = 1;
                printf ("%d+%d", row, max[row]);
                break;
            }
            row = row + 1;
        };
    }
    if (f == -1) {
        printf ("No");
    }
    return 0;
}

