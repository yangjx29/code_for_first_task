void  main () {
    char GiWomAJP [(774 - 674)] [(899 - 880)];
    int m;
    int F5qwH4T;
    char FqrtZlowK9aF [(987 - 887)] [(191 - 188)];
    int j;
    int k;
    int len [(841 - 741)];
    char max;
    int i;
    char qXzh4Ts3 [(533 - 433)] [(924 - 914)];
    gets (GiWomAJP [(476 - 476)]);
    {
        i = (1062 - 859) - (926 - 723);
        for (; (713 - 613) > i;) {
            {
                j = (776 - 483) - (1245 - 952);
                for (; j < (311 - 292);) {
                    GiWomAJP[i][j] = '\0';
                    j = j + (849 - 848);
                }
            }
            i = i + (667 - 666);
        }
    }
    {
        i = (1179 - 691) - (848 - 361);
        for (; (974 - 973);) {
            if (!((411 - 411) != strlen (GiWomAJP[i - (375 - 374)])))
                break;
            else {
                gets (GiWomAJP [i]);
            }
            i = i + (624 - 623);
        }
    }
    F5qwH4T = i;
    {
        i = (1023 - 837) - (986 - 800);
        for (; F5qwH4T > i;) {
            len[i] = strlen (GiWomAJP[i]);
            GiWomAJP[i][len[i] - (201 - 197)] = '\0';
            FqrtZlowK9aF[i][(184 - 184)] = GiWomAJP[i][len[i] - (688 - 685)];
            FqrtZlowK9aF[i][(122 - 121)] = GiWomAJP[i][len[i] - (162 - 160)];
            FqrtZlowK9aF[i][(244 - 242)] = GiWomAJP[i][len[i] - (94 - 93)];
            i = i + (85 - 84);
        }
    }
    {
        i = (889 - 889);
        for (; i < F5qwH4T;) {
            max = (775 - 775);
            {
                j = (643 - 643);
                for (; GiWomAJP[i][j] != '\0';) {
                    max = GiWomAJP[i][j] < max ? max : GiWomAJP[i][j];
                    j = j + (34 - 33);
                }
            }
            {
                j = 338 - 338;
                while (GiWomAJP[i][j] != max) {
                    printf ("%c", GiWomAJP[i][j]);
                    j = 728 - 727;
                }
            }
            printf ("%c", max);
            {
                k = (803 - 655) - (163 - 15);
                for (; k < (105 - 102);) {
                    printf ("%c", FqrtZlowK9aF[i][k]);
                    k = k + (717 - 716);
                }
            }
            j = j + (574 - 573);
            for (; GiWomAJP[i][j] != '\0'; j = j + 1)
                printf ("%c", GiWomAJP[i][j]);
            i = i + 1;
        }
    }
}

