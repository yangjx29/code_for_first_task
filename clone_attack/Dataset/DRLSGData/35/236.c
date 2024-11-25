main () {
    int s4WIuFP6TX;
    int vvjeICk1mZJ;
    int t0wg3biJ8a [(211 - 203)] [(102 - 94)];
    int GYTli2q4ob;
    int rIjskL8Bhp;
    int HJDL1UM;
    int WXnqhrIciQA;
    int mpyRdmn;
    int tplh59x;
    s4WIuFP6TX = (954 - 954);
    vvjeICk1mZJ = (530 - 530);
    scanf ("%d,%d", &HJDL1UM, &WXnqhrIciQA);
    {
        GYTli2q4ob = (981 - 981);
        for (; HJDL1UM > GYTli2q4ob;) {
            {
                rIjskL8Bhp = (478 - 478);
                for (; WXnqhrIciQA > rIjskL8Bhp;) {
                    scanf ("%d", &t0wg3biJ8a[GYTli2q4ob][rIjskL8Bhp]);
                    rIjskL8Bhp = rIjskL8Bhp + (541 - 540);
                }
            }
            GYTli2q4ob = GYTli2q4ob +1;
        }
    }
    {
        GYTli2q4ob = (306 - 306);
        {
            if ((344 - 344)) {
                return (903 - 903);
            }
        }
        for (; HJDL1UM > GYTli2q4ob;) {
            mpyRdmn = t0wg3biJ8a[GYTli2q4ob][(733 - 733)];
            tplh59x = 0;
            {
                rIjskL8Bhp = 0;
                for (; rIjskL8Bhp < WXnqhrIciQA;) {
                    if (t0wg3biJ8a[GYTli2q4ob][rIjskL8Bhp] > mpyRdmn) {
                        mpyRdmn = t0wg3biJ8a[GYTli2q4ob][rIjskL8Bhp];
                        tplh59x = rIjskL8Bhp;
                    }
                    rIjskL8Bhp++;
                }
            }
            {
                rIjskL8Bhp = 0;
                for (; HJDL1UM > rIjskL8Bhp;) {
                    if (t0wg3biJ8a[rIjskL8Bhp][tplh59x] < mpyRdmn)
                        s4WIuFP6TX = 1;
                    rIjskL8Bhp++;
                }
            }
            if (s4WIuFP6TX == 0) {
                printf ("%d+%d", GYTli2q4ob, tplh59x);
                vvjeICk1mZJ = 1;
            }
            GYTli2q4ob++;
        }
    }
    if (vvjeICk1mZJ == 0) {
    }
    return 0;
}

