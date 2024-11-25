int main () {
    int m, n, FBqVZTG7L [A] [A] = {(837 - 837)}, i, j;
    scanf ("%d%d", &m, &n);
    {
        i = 660 - 659;
        while (i < m + 1) {
            {
                j = 1;
                while (n + 1 > j) {
                    scanf ("%d", &FBqVZTG7L[i][j]);
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
            i = i + 1;
        };
    }
    {
        i = 1;
        while (i < m + 1) {
            {
                j = 1;
                while (j < n + 1) {
                    if (FBqVZTG7L[i][j] >= FBqVZTG7L[i + 1][j] && FBqVZTG7L[i][j + 1] <= FBqVZTG7L[i][j] && FBqVZTG7L[i][j] >= FBqVZTG7L[i - 1][j] && FBqVZTG7L[i][j] >= FBqVZTG7L[i][j - 1])
                        printf ("%d %d\n", i - 1, j - 1);
                    j++;
                };
            }
            i++;
        };
    }
    return 0;
}

