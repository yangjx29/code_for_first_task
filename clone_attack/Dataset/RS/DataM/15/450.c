int main () {
    int row1;
    int NlzWvXTog;
    int Row;
    int kr8sKVSiLMo;
    Row = 100;
    kr8sKVSiLMo = 100;
    int sz [Row] [kr8sKVSiLMo];
    int iPghf4;
    int cb1TF9nh2;
    int flyhq5;
    int GVXJCBHNTO;
    int h7IXPlG;
    int WKi6p8HdaX;
    WKi6p8HdaX = 0;
    int s;
    scanf ("%d", &NlzWvXTog);
    {
        cb1TF9nh2 = 0;
        while (NlzWvXTog > cb1TF9nh2) {
            for (h7IXPlG = 0; NlzWvXTog > h7IXPlG; h7IXPlG = h7IXPlG + 1) {
                scanf ("%d", &sz[cb1TF9nh2][h7IXPlG]);
            }
            cb1TF9nh2++;
        };
    }
    {
        cb1TF9nh2 = 0;
        while (!(0 != WKi6p8HdaX) && cb1TF9nh2 < NlzWvXTog) {
            for (h7IXPlG = 0; WKi6p8HdaX == 0 && NlzWvXTog > h7IXPlG; h7IXPlG++) {
                if (!(0 != sz[cb1TF9nh2][h7IXPlG])) {
                    WKi6p8HdaX = 1;
                    row1 = cb1TF9nh2;
                    flyhq5 = h7IXPlG;
                };
            }
            cb1TF9nh2++;
        };
    }
    for (cb1TF9nh2 = NlzWvXTog -1; !(1 != WKi6p8HdaX) && cb1TF9nh2 > 0; cb1TF9nh2 = cb1TF9nh2 - 1) {
        for (h7IXPlG = NlzWvXTog -1; WKi6p8HdaX == 1 && h7IXPlG > 0; h7IXPlG--) {
            if (sz[cb1TF9nh2][h7IXPlG] == 0) {
                GVXJCBHNTO = h7IXPlG;
                iPghf4 = cb1TF9nh2;
                WKi6p8HdaX = 0;
            };
        };
    }
    s = (iPghf4 - row1 - 1) * (GVXJCBHNTO -flyhq5 - 1);
    printf ("%d", s);
    return 0;
}

