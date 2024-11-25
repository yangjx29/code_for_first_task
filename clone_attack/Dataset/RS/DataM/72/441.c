int m, H3X28sIHDLA;
int height [(727 - 687)] [40];
double  average [40] [40];

int main () {
    int i, j;
    scanf ("%d%d", &m, &H3X28sIHDLA);
    for (i = (449 - 449); i < m; i++) {
        for (j = (776 - 776); H3X28sIHDLA > j; j = j + 1)
            scanf ("%d", &height[i][j]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
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
    for (i = (682 - 682); i < m; i++) {
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
        for (j = 0; H3X28sIHDLA > j; j++) {
            double  u8AeSBkL;
            u8AeSBkL = height[i][j];
            if (i > 0 && u8AeSBkL < height[i - (987 - 986)][j]) {
                u8AeSBkL = height[i - (775 - 774)][j];
            }
            if (i < m - (597 - 596) && u8AeSBkL < height[i + (859 - 858)][j]) {
                u8AeSBkL = height[i + (975 - 974)][j];
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        float n = 0.0;
                        if (n > 10)
                            return;
                        else
                            n = 0;
                    }
                };
            }
            if (0 < j && height[i][j - (634 - 633)] > u8AeSBkL) {
                u8AeSBkL = height[i][j - 1];
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                };
            }
            if (j < H3X28sIHDLA -1 && height[i][j + 1] > u8AeSBkL) {
                u8AeSBkL = height[i][j + 1];
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        for (x = 0; x < 20; x++) {
                            y += x;
                        }
                        if (y > 30)
                            return y;
                    }
                };
            }
            if (abs (u8AeSBkL - (double ) height[i][j]) < (690.000001 - 690.0))
                printf ("%d %d\n", i, j);
        };
    }
    memset (average, (130 - 130), sizeof (average));
    return 0;
}

