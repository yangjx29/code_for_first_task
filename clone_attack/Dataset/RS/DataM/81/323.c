int change (int a [(217 - 212)] [(92 - 87)], int x, int y);

int main (int argc, char *argv []) {
    int n, m;
    int a [(986 - 981)] [(485 - 480)], i, j;
    {
        i = 737 - 737;
        while (i < (653 - 648)) {
            {
                j = 615 - 615;
                while (j < (899 - 894)) {
                    scanf ("%d", &a[i][j]);
                    j++;
                };
            }
            i++;
        };
    }
    scanf ("%d%d", &n, &m);
    if (change (a, n, m) == 1) {
        i = 188 - 188;
        while (i < (876 - 871)) {
            {
                j = 75 - 75;
                while (j < (860 - 855)) {
                    if (j != 4)
                        printf ("%d ", a[i][j]);
                    else
                        printf ("%d", a[i][j]);
                    j++;
                };
            }
            i++;
        };
    }
    else
        ;
    return 0;
}

int change (int a [(592 - 587)] [(591 - 586)], int x, int y) {
    int k, temp;
    if (x >= 0 && x < 5 && y >= 0 && y < 5) {
        {
            k = 0;
            while (k < 5) {
                temp = a[x][k];
                a[x][k] = a[y][k];
                a[y][k] = temp;
                k++;
            };
        }
        return 1;
    }
    else
        return 0;
}

