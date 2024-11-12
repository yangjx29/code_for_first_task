int main () {
    int FfBp4HwzO [22] [22];
    int oZXCx0pQF;
    int yubmOi8GwK;
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
    scanf ("%d%d", &oZXCx0pQF, &yubmOi8GwK);
    {
        int i = (136 - 135);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (oZXCx0pQF >= i) {
            for (int j = (579 - 578);
            yubmOi8GwK >= j; j++)
                scanf ("%d", &FfBp4HwzO[i][j]);
            i++;
        };
    }
    for (int i = (672 - 672);
    oZXCx0pQF + 1 >= i; i++)
        FfBp4HwzO[i][0] = FfBp4HwzO[i][yubmOi8GwK + 1] = 0;
    {
        int j = 1;
        while (yubmOi8GwK >= j) {
            FfBp4HwzO[0][j] = FfBp4HwzO[oZXCx0pQF + 1][j] = 0;
            j++;
        };
    }
    {
        int i = 1;
        while (oZXCx0pQF >= i) {
            {
                int j = 1;
                while (j <= yubmOi8GwK) {
                    if (FfBp4HwzO[i][j] >= FfBp4HwzO[i][j - 1] && FfBp4HwzO[i][j] >= FfBp4HwzO[i - 1][j] && FfBp4HwzO[i][j] >= FfBp4HwzO[i + 1][j] && FfBp4HwzO[i][j] >= FfBp4HwzO[i][j + 1])
                        printf ("%d %d\n", i - 1, j - 1);
                    j++;
                };
            }
            i++;
        };
    };
}

