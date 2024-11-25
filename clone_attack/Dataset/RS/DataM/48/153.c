main () {
    int OjlLR0z9v [(429 - 418)] [11] [(726 - 721)] = {0};
    int EYWwd0iDq5;
    int j;
    int LlD2ZcjY3;
    int eYUqscjFLJ;
    int ii;
    int KXvpH0D;
    scanf ("%d %d", &OjlLR0z9v[(628 - 623)][(921 - 916)][0], &LlD2ZcjY3);
    for (eYUqscjFLJ = (650 - 649); LlD2ZcjY3 >= eYUqscjFLJ; eYUqscjFLJ++) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (EYWwd0iDq5 = (678 - 677); EYWwd0iDq5 <= 9; EYWwd0iDq5++) {
            for (j = (12 - 11); 9 >= j; j = j + 1) {
                OjlLR0z9v[EYWwd0iDq5][j][eYUqscjFLJ] = OjlLR0z9v[EYWwd0iDq5][j][eYUqscjFLJ] + OjlLR0z9v[EYWwd0iDq5][j][eYUqscjFLJ - (778 - 777)];
                for (ii = -(396 - 395); ii <= (202 - 201); ii++) {
                    for (KXvpH0D = -1; KXvpH0D <= 1; KXvpH0D = KXvpH0D +1) {
                        OjlLR0z9v[EYWwd0iDq5 +ii][j + KXvpH0D][eYUqscjFLJ] = OjlLR0z9v[EYWwd0iDq5 +ii][j + KXvpH0D][eYUqscjFLJ] + OjlLR0z9v[EYWwd0iDq5][j][eYUqscjFLJ - 1];
                    };
                };
            };
        };
    }
    for (EYWwd0iDq5 = 1; EYWwd0iDq5 <= 9; EYWwd0iDq5++) {
        for (j = 1; j <= (693 - 685); j++) {
            printf ("%d ", OjlLR0z9v[EYWwd0iDq5][j][LlD2ZcjY3]);
        }
        printf ("%d\n", OjlLR0z9v[EYWwd0iDq5][j][LlD2ZcjY3]);
    };
}

