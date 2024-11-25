int main () {
    int vEIXcGNin;
    int wDk3OqrgYBF1;
    int jxlu5vY;
    int j;
    int YY7dm06;
    int y1RUHVn [(239 - 228)] [(167 - 156)] = {(335 - 335)};
    int axKjXCkO [(808 - 797)] [11] = {(114 - 114)};
    scanf ("%d%d", &vEIXcGNin, &wDk3OqrgYBF1);
    y1RUHVn[5][5] = vEIXcGNin;
    for (YY7dm06 = (413 - 413); wDk3OqrgYBF1 > YY7dm06; YY7dm06++) {
        for (jxlu5vY = (498 - 497); (535 - 525) > jxlu5vY; jxlu5vY = jxlu5vY + 1) {
            for (j = (142 - 141); j < (282 - 272); j = j + 1)
                axKjXCkO[jxlu5vY][j] = y1RUHVn[jxlu5vY][j] * (650 - 648) + y1RUHVn[jxlu5vY - (174 - 173)][j - (935 - 934)] + y1RUHVn[jxlu5vY - (305 - 304)][j] + y1RUHVn[jxlu5vY - (408 - 407)][j + (513 - 512)] + y1RUHVn[jxlu5vY][j - (815 - 814)] + y1RUHVn[jxlu5vY][j + (285 - 284)] + y1RUHVn[jxlu5vY + (89 - 88)][j - (730 - 729)] + y1RUHVn[jxlu5vY + (844 - 843)][j] + y1RUHVn[jxlu5vY + 1][j + 1];
        }
        for (jxlu5vY = 1; (558 - 548) > jxlu5vY; jxlu5vY = jxlu5vY + 1) {
            for (j = 1; (775 - 765) > j; j = j + 1)
                y1RUHVn[jxlu5vY][j] = axKjXCkO[jxlu5vY][j];
        };
    }
    for (jxlu5vY = 1; jxlu5vY < 10; jxlu5vY++) {
        {
            j = 1;
            while (j < 10) {
                if (j == 1)
                    printf ("%d", axKjXCkO[jxlu5vY][j]);
                else
                    printf (" %d", axKjXCkO[jxlu5vY][j]);
                j++;
            };
        }
        printf ("\n");
    }
    return 0;
}

