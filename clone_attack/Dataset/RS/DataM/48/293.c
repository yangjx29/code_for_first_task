main () {
    int ScNT84qxMl;
    int j;
    int k;
    int gNiGgV;
    int PS3ZFHxKrcV;
    int u8yCpidT4eXD;
    int qH42O0u7 [11] [11] = {0}, wKgjm3XCqR8A [11] [11] = {0};
    scanf ("%d %d", &PS3ZFHxKrcV, &u8yCpidT4eXD);
    qH42O0u7[5][5] = PS3ZFHxKrcV;
    for (k = (326 - 325); k <= u8yCpidT4eXD; k = k + 1) {
        for (ScNT84qxMl = 1; 10 > ScNT84qxMl; ScNT84qxMl = ScNT84qxMl +1)
            for (j = 1; 10 > j; j = j + 1) {
                wKgjm3XCqR8A[ScNT84qxMl][j] = 2 * qH42O0u7[ScNT84qxMl][j] + qH42O0u7[ScNT84qxMl -1][j] + qH42O0u7[ScNT84qxMl -1][j - 1] + qH42O0u7[ScNT84qxMl -1][j + 1] + qH42O0u7[ScNT84qxMl][j - 1] + qH42O0u7[ScNT84qxMl][j + 1] + qH42O0u7[ScNT84qxMl +1][j - 1] + qH42O0u7[ScNT84qxMl +1][j] + qH42O0u7[ScNT84qxMl +1][j + 1];
            }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (ScNT84qxMl = 0; 11 > ScNT84qxMl; ScNT84qxMl = ScNT84qxMl +1)
            for (j = 0; j < 11; j = j + 1)
                qH42O0u7[ScNT84qxMl][j] = wKgjm3XCqR8A[ScNT84qxMl][j];
    }
    for (ScNT84qxMl = 1; 10 > ScNT84qxMl; ScNT84qxMl++) {
        for (j = 1; 10 > j; j++) {
            if (j == 1)
                printf ("%d", qH42O0u7[ScNT84qxMl][j]);
            else
                printf (" %d", qH42O0u7[ScNT84qxMl][j]);
            if (j == (643 - 634))
                printf ("\n");
        };
    };
}

