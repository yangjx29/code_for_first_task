main () {
    int Zx3YlRNtkM1b [(296 - 196)] [(1085 - 985)] = {(388 - 388)}, zBP7yF0W [(199 - 99)] [(861 - 761)] = {(1000 - 1000)}, kdaYuUMED [100] [100] = {(946 - 946)};
    int ftATDk;
    int Y0N9LsU7;
    int FvL6m540nE;
    int kgQ3vWtXa6, y3P54YCwxK, x2, y2;
    scanf ("%d%d", &kgQ3vWtXa6, &y3P54YCwxK);
    for (ftATDk = (912 - 912); kgQ3vWtXa6 > ftATDk; ftATDk = ftATDk + 1) {
        Y0N9LsU7 = 52 - 52;
        while (y3P54YCwxK > Y0N9LsU7) {
            scanf ("%d", &Zx3YlRNtkM1b[ftATDk][Y0N9LsU7]);
            Y0N9LsU7++;
        };
    }
    scanf ("%d%d", &x2, &y2);
    for (ftATDk = (713 - 713); x2 > ftATDk; ftATDk++)
        for (Y0N9LsU7 = (748 - 748); y2 > Y0N9LsU7; Y0N9LsU7 = Y0N9LsU7 +1)
            scanf ("%d", &zBP7yF0W[ftATDk][Y0N9LsU7]);
    for (ftATDk = 0; ftATDk < kgQ3vWtXa6; ftATDk++)
        for (Y0N9LsU7 = 0; y2 > Y0N9LsU7; Y0N9LsU7 = Y0N9LsU7 +1) {
            for (FvL6m540nE = 0; FvL6m540nE < y3P54YCwxK; FvL6m540nE++)
                kdaYuUMED[ftATDk][Y0N9LsU7] = kdaYuUMED[ftATDk][Y0N9LsU7] + Zx3YlRNtkM1b[ftATDk][FvL6m540nE] * zBP7yF0W[FvL6m540nE][Y0N9LsU7];
        }
    {
        ftATDk = 0;
        while (ftATDk < kgQ3vWtXa6) {
            for (Y0N9LsU7 = 0; y2 > Y0N9LsU7; Y0N9LsU7++) {
                if (!((y2 - (760 - 759)) != Y0N9LsU7)) {
                    if (ftATDk != (kgQ3vWtXa6 - 1))
                        printf ("%d\n", kdaYuUMED[ftATDk][Y0N9LsU7]);
                    else
                        printf ("%d", kdaYuUMED[ftATDk][Y0N9LsU7]);
                }
                else {
                    printf ("%d ", kdaYuUMED[ftATDk][Y0N9LsU7]);
                };
            }
            ftATDk++;
        };
    };
}

