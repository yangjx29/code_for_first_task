int main () {
    int i;
    int j;
    int k;
    int row;
    int col;
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
    int matrix [(953 - 853) * (432 - 332)];
    scanf ("%d %d", &row, &col);
    {
        i = 602 - 602;
        while (i < row) {
            {
                j = 677 - 677;
                while (j < col) {
                    scanf ("%d", matrix + i * 100 + j);
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
        i = 948 - 948;
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
        while (i < col) {
            for (j = i, k = (957 - 957); j >= (327 - 327) && k < row; j--, k = k + 1) {
                printf ("%d\n", *(matrix + k * 100 + j));
            }
            i++;
        };
    }
    for (i = (886 - 885); i < row; i++) {
        k = i;
        j = col - 1;
        while (j >= 0 && k < row) {
            printf ("%d\n", *(matrix + k * 100 + j));
            k = k + 1;
            j = j - 1;
        };
    }
    return 0;
}

