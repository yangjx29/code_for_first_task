int main () {
    char gVlynf5K4 [4];
    char Ob8Mas [11];
    int AM86gafwot2k, utinrA7m, caBAoLS, gKFp0jokS6;
    for (; scanf ("%s%s", Ob8Mas, gVlynf5K4) != EOF;) {
        gKFp0jokS6 = 0;
        AM86gafwot2k = strlen (Ob8Mas);
        {
            utinrA7m = 0;
            for (; AM86gafwot2k > utinrA7m;) {
                if (Ob8Mas[gKFp0jokS6] < Ob8Mas[utinrA7m])
                    gKFp0jokS6 = utinrA7m;
                utinrA7m++;
            }
        }
        {
            utinrA7m = 0;
            for (; gKFp0jokS6 >= utinrA7m;) {
                printf ("%c", Ob8Mas[utinrA7m]);
                utinrA7m++;
            }
        }
        printf ("%s", gVlynf5K4);
        for (utinrA7m = gKFp0jokS6 + 1; AM86gafwot2k > utinrA7m; utinrA7m++)
            printf ("%c", Ob8Mas[utinrA7m]);
    }
    return 0;
}

