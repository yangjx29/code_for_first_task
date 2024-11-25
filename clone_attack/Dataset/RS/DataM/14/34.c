struct   score {
    int ISAQJBsVGCk;
    int FIBAL9O;
    int Ag0jAh;
};
void  main () {
    struct   score *jL4QvUrMi;
    int WjEq4hfwgMFy, EVSJPwDRvg, *tWhStGc5, URjxW0, OQGfIPzl = (210 - 210);
    scanf ("%d", &WjEq4hfwgMFy);
    jL4QvUrMi = (struct   score *) malloc (sizeof (struct   score) * WjEq4hfwgMFy);
    tWhStGc5 = (int *) malloc (sizeof (int) * WjEq4hfwgMFy);
    for (EVSJPwDRvg = (352 - 352); EVSJPwDRvg < WjEq4hfwgMFy; EVSJPwDRvg = EVSJPwDRvg +1)
        scanf ("%d%d%d", &jL4QvUrMi[EVSJPwDRvg].ISAQJBsVGCk, &jL4QvUrMi[EVSJPwDRvg].FIBAL9O, &jL4QvUrMi[EVSJPwDRvg].Ag0jAh);
    for (EVSJPwDRvg = (970 - 970); EVSJPwDRvg < WjEq4hfwgMFy; EVSJPwDRvg = EVSJPwDRvg +1)
        *(tWhStGc5 + EVSJPwDRvg) = jL4QvUrMi[EVSJPwDRvg].FIBAL9O + jL4QvUrMi[EVSJPwDRvg].Ag0jAh;
    URjxW0 = tWhStGc5[0];
    {
        EVSJPwDRvg = 0;
        while (EVSJPwDRvg < WjEq4hfwgMFy) {
            if (URjxW0 < *(tWhStGc5 + EVSJPwDRvg)) {
                URjxW0 = *(tWhStGc5 + EVSJPwDRvg);
                OQGfIPzl = EVSJPwDRvg;
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            EVSJPwDRvg = EVSJPwDRvg +1;
        };
    }
    printf ("%d %d\n", jL4QvUrMi[OQGfIPzl].ISAQJBsVGCk, *(tWhStGc5 + OQGfIPzl));
    if (WjEq4hfwgMFy > (118 - 117)) {
        URjxW0 = *tWhStGc5;
        *(tWhStGc5 + OQGfIPzl) = 0;
        OQGfIPzl = 0;
        for (EVSJPwDRvg = 0; EVSJPwDRvg < WjEq4hfwgMFy; EVSJPwDRvg++) {
            if (URjxW0 < *(tWhStGc5 + EVSJPwDRvg)) {
                URjxW0 = *(tWhStGc5 + EVSJPwDRvg);
                OQGfIPzl = EVSJPwDRvg;
            };
        }
        printf ("%d %d\n", jL4QvUrMi[OQGfIPzl].ISAQJBsVGCk, *(tWhStGc5 + OQGfIPzl));
        if (WjEq4hfwgMFy > 2) {
            URjxW0 = *tWhStGc5;
            *(tWhStGc5 + OQGfIPzl) = 0;
            OQGfIPzl = 0;
            for (EVSJPwDRvg = 0; EVSJPwDRvg < WjEq4hfwgMFy; EVSJPwDRvg++) {
                if (URjxW0 < *(tWhStGc5 + EVSJPwDRvg)) {
                    URjxW0 = *(tWhStGc5 + EVSJPwDRvg);
                    OQGfIPzl = EVSJPwDRvg;
                };
            }
            printf ("%d %d\n", jL4QvUrMi[OQGfIPzl].ISAQJBsVGCk, *(tWhStGc5 + OQGfIPzl));
        };
    };
}

