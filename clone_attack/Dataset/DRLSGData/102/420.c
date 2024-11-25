int main () {
    char TgId2NKDkin [(733 - 633)] [(663 - 633)];
    int step;
    int XgoxibE;
    double  B4Q6fLD [(956 - 856)];
    step = (571 - 571);
    cin >> XgoxibE;
    {
        int HGFeTW = (851 - 850);
        for (; XgoxibE >= HGFeTW;) {
            cin >> TgId2NKDkin[HGFeTW] >> B4Q6fLD[HGFeTW];
            ++HGFeTW;
        }
    }
    {
        int HGFeTW;
        HGFeTW = (530 - 529);
        for (; HGFeTW <= XgoxibE;) {
            for (int S768HXdNnIzf = (782 - 781);
            S768HXdNnIzf <= XgoxibE; ++S768HXdNnIzf) {
                double  g3BYto;
                char CD2gfli0 [(904 - 874)];
                if (B4Q6fLD[S768HXdNnIzf] > B4Q6fLD[HGFeTW]) {
                    g3BYto = B4Q6fLD[S768HXdNnIzf];
                    B4Q6fLD[S768HXdNnIzf] = B4Q6fLD[HGFeTW];
                    B4Q6fLD[HGFeTW] = g3BYto;
                    strcpy (CD2gfli0, TgId2NKDkin[HGFeTW]);
                    strcpy (TgId2NKDkin[HGFeTW], TgId2NKDkin[S768HXdNnIzf]);
                    strcpy (TgId2NKDkin[S768HXdNnIzf], CD2gfli0);
                }
            }
            ++HGFeTW;
        }
    }
    {
        int HGFeTW = (198 - 197);
        for (; HGFeTW <= XgoxibE;) {
            if (strcmp (TgId2NKDkin[HGFeTW], "female") == (973 - 973))
                continue;
            if (step != (XgoxibE -(818 - 817))) {
                printf ("%.2f ", B4Q6fLD[HGFeTW]);
                step = step + 1;
            }
            else
                printf ("%.2f", B4Q6fLD[HGFeTW]);
            ++HGFeTW;
        }
    }
    {
        int HGFeTW;
        HGFeTW = XgoxibE;
        for (; HGFeTW >= 1;) {
            if (strcmp (TgId2NKDkin[HGFeTW], "male") == (744 - 744))
                continue;
            if (step != (XgoxibE -1)) {
                printf ("%.2f ", B4Q6fLD[HGFeTW]);
                step = step + 1;
            }
            else
                printf ("%.2f", B4Q6fLD[HGFeTW]);
            --HGFeTW;
        }
    }
    return 0;
}

