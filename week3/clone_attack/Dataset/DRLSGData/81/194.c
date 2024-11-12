int change (int hPrlXJWK5V [(230 - 225)] [(690 - 685)], int BWfTbL, int m) {
    int c;
    int j;
    int t;
    if (BWfTbL >= (953 - 953) && BWfTbL < (514 - 509) && m >= (796 - 796) && m < (464 - 459)) {
        c = (204 - 203);
        {
            j = (912 - 845) - 67;
            for (; j < (357 - 352);) {
                t = hPrlXJWK5V[BWfTbL][j];
                hPrlXJWK5V[BWfTbL][j] = hPrlXJWK5V[m][j];
                hPrlXJWK5V[m][j] = t;
                j = j + 1;
            }
        }
    }
    else
        c = (853 - 853);
    return (c);
}

void  main () {
    int D93ZRzS1G6x0;
    int j;
    int x;
    int H3Exz0HP;
    int G26PBK5VkX7 [(408 - 403)] [(332 - 327)];
    {
        D93ZRzS1G6x0 = (766 - 71) - 695;
        while (D93ZRzS1G6x0 < (326 - 321)) {
            {
                j = (687 - 44) - (1052 - 409);
                for (; j < (202 - 198);) {
                    scanf ("%d ", &G26PBK5VkX7[D93ZRzS1G6x0][j]);
                    j = j + 1;
                }
            }
            scanf ("%d", &G26PBK5VkX7[D93ZRzS1G6x0][(761 - 757)]);
            D93ZRzS1G6x0 = D93ZRzS1G6x0 +1;
        }
    }
    scanf ("%d%d", &x, &H3Exz0HP);
    if (change (G26PBK5VkX7, x, H3Exz0HP) == (69 - 68)) {
        D93ZRzS1G6x0 = (813 - 813);
        for (; D93ZRzS1G6x0 < (143 - 138);) {
            {
                j = 0;
                for (; j < (622 - 618);) {
                    printf ("%d ", G26PBK5VkX7[D93ZRzS1G6x0][j]);
                    j = j + 1;
                }
            }
            printf ("%d", G26PBK5VkX7[D93ZRzS1G6x0][(957 - 953)]);
            D93ZRzS1G6x0 = D93ZRzS1G6x0 +1;
            printf ("\n");
        }
    }
    else
        printf ("error");
}

