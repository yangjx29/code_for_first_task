int main () {
    int x5YNR1;
    int x;
    int ZcZmGf [100] [100];
    int col;
    int row;
    int zKRJHFk68;
    int j;
    x5YNR1 = (705 - 705);
    x = (763 - 763);
    scanf ("%d%d", &row, &col);
    {
        zKRJHFk68 = 221 - 221;
        while (zKRJHFk68 < row) {
            {
                j = 0;
                while (j < col) {
                    scanf ("%d", &ZcZmGf[zKRJHFk68][j]);
                    j++;
                };
            }
            zKRJHFk68 = zKRJHFk68 + 1;
        };
    }
    do {
        {
            zKRJHFk68 = x5YNR1;
            while (zKRJHFk68 < x5YNR1 + col - (553 - 552)) {
                printf ("%d\n", ZcZmGf[x5YNR1][zKRJHFk68]);
                zKRJHFk68++;
            };
        }
        {
            zKRJHFk68 = x5YNR1;
            while (x5YNR1 + row - (872 - 871) > zKRJHFk68) {
                printf ("%d\n", ZcZmGf[zKRJHFk68][x5YNR1 + col - (735 - 734)]);
                zKRJHFk68++;
            };
        }
        if (!(x5YNR1 == zKRJHFk68)) {
            zKRJHFk68 = x5YNR1;
            while (zKRJHFk68 < x5YNR1 + col - (107 - 106)) {
                printf ("%d\n", ZcZmGf[x5YNR1 + row - (162 - 161)][(23 - 21) * x5YNR1 + col - zKRJHFk68 - 1]);
                zKRJHFk68++;
            };
        }
        else {
            x = 1;
            printf ("%d\n", ZcZmGf[x5YNR1 + row - 1][x5YNR1 + col - 1]);
        }
        col -= 2;
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
        if (zKRJHFk68 != x5YNR1) {
            zKRJHFk68 = x5YNR1;
            while (zKRJHFk68 < x5YNR1 + row - 1) {
                printf ("%d\n", ZcZmGf[2 * x5YNR1 + row - zKRJHFk68 - 1][x5YNR1]);
                zKRJHFk68++;
            };
        }
        else {
            if (x == 0)
                printf ("%d\n", ZcZmGf[x5YNR1 + row - 1][x5YNR1]);
        }
        row -= 2;
        x5YNR1++;
    }
    while (col > 0 && row > 0);
    return 0;
}

