int main () {
    int a [(642 - 637)] [(116 - 111)] = {(907 - 907)}, i, j, max [5] = {0}, min [5] = {0};
    int y7rSdNA = 0;
    {
        i = 0;
        while (5 > i) {
            {
                j = 0;
                while (5 > j) {
                    scanf ("%d", &a[i][j]);
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    j = j + 1;
                };
            }
            i = i + 1;
        };
    }
    {
        i = 0;
        while (5 > i) {
            min[i] = a[0][i];
            max[i] = a[i][0];
            {
                j = 0;
                while (5 > j) {
                    if (max[i] < a[i][j])
                        max[i] = a[i][j];
                    if (min[i] > a[j][i])
                        min[i] = a[j][i];
                    j = j + 1;
                };
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
        while (5 > i) {
            {
                j = 0;
                while (j < 5) {
                    if (max[i] == min[j]) {
                        y7rSdNA = y7rSdNA + 1;
                        printf ("%d %d %d", i + (724 - 723), j + 1, max[i]);
                    }
                    j = j + 1;
                };
            }
            i = i + 1;
        };
    }
    if (y7rSdNA == 0)
        ;
    return 0;
}

