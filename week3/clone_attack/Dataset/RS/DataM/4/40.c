int main () {
    int row, col, k, A8lYQVKRXc, j;
    int a [100] [100] = {{0}, {0}};
    scanf ("%d%d", &row, &col);
    {
        A8lYQVKRXc = 0;
        while (row > A8lYQVKRXc) {
            {
                j = 0;
                while (col > j) {
                    scanf ("%d", &a[A8lYQVKRXc][j]);
                    j = j + 1;
                };
            }
            A8lYQVKRXc = A8lYQVKRXc +1;
        };
    }
    for (k = 0; row + col - 1 > k;) {
        {
            A8lYQVKRXc = 0;
            while (A8lYQVKRXc < row) {
                {
                    j = 0;
                    while (col > j) {
                        if (A8lYQVKRXc +j == k) {
                            printf ("%d\n", a[A8lYQVKRXc][j]);
                        }
                        j++;
                    };
                }
                A8lYQVKRXc = A8lYQVKRXc +1;
            };
        }
        k = k + 1;
    };
}

