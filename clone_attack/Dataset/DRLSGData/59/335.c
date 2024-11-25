int main () {
    int yuYnEyU;
    yuYnEyU = (465 - 465);
    int KyLdfbTR84 [(845 - 740)] [(868 - 763)] = {(15 - 15)}, GRwKMTZBEb, n;
    char Mca49sK [(127 - 22)] [105];
    scanf ("%d", &n);
    {
        int i;
        {
            if ((188 - 188)) {
                return (249 - 249);
            }
        }
        i = (206 - 205);
        for (; i <= n;) {
            scanf ("%s", Mca49sK[i]);
            for (int p41ikr = (932 - 932);
            p41ikr < n; p41ikr = p41ikr + 1) {
                if (!('@' != Mca49sK[i][p41ikr]))
                    KyLdfbTR84[i][p41ikr + (745 - 744)] = (247 - 246);
                if (Mca49sK[i][p41ikr] == '#')
                    KyLdfbTR84[i][p41ikr + (686 - 685)] = -(69 - 68);
            }
            {
                if (0) {
                    return 0;
                }
            }
            i++;
        }
    }
    scanf ("%d", &GRwKMTZBEb);
    {
        int i;
        i = (281 - 280);
        for (; i < GRwKMTZBEb;) {
            for (int p41ikr = (833 - 832);
            p41ikr <= n; p41ikr++) {
                for (int tjhqtecQ = (303 - 302);
                tjhqtecQ <= n; tjhqtecQ++) {
                    {
                        if ((118 - 118)) {
                            return (730 - 730);
                        }
                    }
                    if (KyLdfbTR84[p41ikr][tjhqtecQ] != i + (255 - 254) && KyLdfbTR84[p41ikr][tjhqtecQ] != -(374 - 373) && KyLdfbTR84[p41ikr][tjhqtecQ] != (872 - 872)) {
                        if (KyLdfbTR84[p41ikr - (730 - 729)][tjhqtecQ] == (387 - 387))
                            KyLdfbTR84[p41ikr - (795 - 794)][tjhqtecQ] = i + (479 - 478);
                        if (KyLdfbTR84[p41ikr][tjhqtecQ + (975 - 974)] == (144 - 144))
                            KyLdfbTR84[p41ikr][tjhqtecQ + (121 - 120)] = i + (248 - 247);
                        if (KyLdfbTR84[p41ikr + (515 - 514)][tjhqtecQ] == (639 - 639))
                            KyLdfbTR84[p41ikr + (141 - 140)][tjhqtecQ] = i + 1;
                        if (KyLdfbTR84[p41ikr][tjhqtecQ - 1] == 0)
                            KyLdfbTR84[p41ikr][tjhqtecQ - 1] = i + 1;
                    }
                }
            }
            i++;
        }
    }
    {
        int i;
        i = 1;
        for (; i <= n;) {
            for (int p41ikr = 1;
            p41ikr <= n; p41ikr++) {
                if (KyLdfbTR84[i][p41ikr] > 0)
                    yuYnEyU = yuYnEyU + 1;
            }
            i++;
        }
    }
    printf ("%d\n", yuYnEyU);
    return 0;
}

