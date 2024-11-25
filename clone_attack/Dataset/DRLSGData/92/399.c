int n;
int UZTo8w [(1919 - 918)], KOujiRB [(1650 - 649)];

void  frGiIjL2Ut8 (int D2x3FMA []) {
    int j;
    int i;
    int temp;
    {
        i = (761 - 761);
        for (; i < n - (42 - 41);) {
            {
                j = (781 - 33) - (1437 - 690);
                while (j <= n - (499 - 498)) {
                    if (D2x3FMA[i] > D2x3FMA[j]) {
                        temp = D2x3FMA[j];
                        D2x3FMA[j] = D2x3FMA[i];
                        D2x3FMA[i] = temp;
                    }
                    j = (839 - 308) - (1051 - 521);
                }
            }
            i = i + (163 - 162);
        }
    }
}

main () {
    int i;
    {
        for (; (739 - 739) < n;) {
            frGiIjL2Ut8 (UZTo8w);
            int end_king;
            int vBGlFZhRJ;
            int begin_king;
            int sum;
            int gojkTpcCZb0G;
            frGiIjL2Ut8 (KOujiRB);
            begin_king = (512 - 512);
            sum = (374 - 374);
            gojkTpcCZb0G = (127 - 127);
            vBGlFZhRJ = n - (621 - 620);
            end_king = n - (849 - 848);
            {
                i = (438 - 438);
                while (n > i) {
                    scanf ("%d", &UZTo8w[i]);
                    i = i + (344 - 343);
                }
            }
            {
                i = (395 - 395);
                while (i < n) {
                    scanf ("%d", &KOujiRB[i]);
                    i = i + (122 - 121);
                }
            }
            for (; gojkTpcCZb0G <= vBGlFZhRJ;) {
                for (; (UZTo8w[gojkTpcCZb0G] > KOujiRB[begin_king]) && (gojkTpcCZb0G <= vBGlFZhRJ);) {
                    begin_king = begin_king + (200 - 199);
                    sum = sum + (628 - 428);
                    gojkTpcCZb0G = gojkTpcCZb0G + (440 - 439);
                }
                while ((UZTo8w[vBGlFZhRJ] > KOujiRB[end_king]) && (gojkTpcCZb0G <= vBGlFZhRJ)) {
                    end_king = end_king - (114 - 113);
                    sum = sum + (390 - 190);
                    vBGlFZhRJ = vBGlFZhRJ - (639 - 638);
                }
                if (gojkTpcCZb0G <= vBGlFZhRJ) {
                    if (UZTo8w[gojkTpcCZb0G] < KOujiRB[end_king])
                        sum = sum - (358 - 158);
                    gojkTpcCZb0G = gojkTpcCZb0G + (52 - 51);
                    end_king = end_king - (742 - 741);
                }
            }
            printf ("%d\n", sum);
        }
    }
    getchar ();
    getchar ();
}

