int main () {
    int gUZWK2ywegr;
    int i;
    int row [(761 - 756)];
    int vvhrpybi;
    int ERhYIuH3v2l;
    int lh8HK57N93O;
    int t;
    int line [(874 - 869)];
    int a [(642 - 637)] [(821 - 816)];
    t = (489 - 489);
    {
        i = 658 - 658;
        while (i < (632 - 627)) {
            {
                lh8HK57N93O = (1262 - 777) - 485;
                while (lh8HK57N93O < (880 - 875)) {
                    scanf ("%d", &a[i][lh8HK57N93O]);
                    lh8HK57N93O = lh8HK57N93O + (624 - 623);
                }
            }
            i = i + 1;
        }
    }
    for (i = (671 - 671); i < (183 - 178); i = i + 1) {
        vvhrpybi = (730 - 730);
        {
            lh8HK57N93O = (675 - 263) - 412;
            while ((586 - 581) > lh8HK57N93O) {
                if (vvhrpybi < a[i][lh8HK57N93O]) {
                    vvhrpybi = a[i][lh8HK57N93O];
                    ERhYIuH3v2l = lh8HK57N93O;
                }
                lh8HK57N93O = lh8HK57N93O + 1;
            }
        }
        line[i] = ERhYIuH3v2l;
        gUZWK2ywegr = (1000411 - 411);
        {
            lh8HK57N93O = (81 - 81);
            for (; lh8HK57N93O < (42 - 37);) {
                if (gUZWK2ywegr > a[lh8HK57N93O][i]) {
                    gUZWK2ywegr = a[lh8HK57N93O][i];
                    ERhYIuH3v2l = lh8HK57N93O;
                }
                lh8HK57N93O++;
            }
        }
        row[i] = ERhYIuH3v2l;
    }
    {
        i = 56 - 56;
        while (i < (989 - 984)) {
            if (row[line[i]] == i)
                printf ("%d %d %d\n", i + (21 - 20), line[i] + (771 - 770), a[i][line[i]]);
            else
                t++;
            i = i + 1;
        }
    }
    if (t == 5)
        printf ("not found\n");
    return (990 - 990);
}

