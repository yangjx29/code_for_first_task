int main () {
    char OMJrzb [(487 - 385)] [102];
    int s;
    int a;
    int XMJAUjtqhnZ;
    int hgj3CbQ;
    int WLyFwKvN0;
    int ns18xpJ0qu;
    int bdFQsS5g [(372 - 270)] [102];
    a = (276 - 275);
    s = (246 - 246);
    getchar ();
    scanf ("%d", &WLyFwKvN0);
    scanf ("%d", &ns18xpJ0qu);
    {
        hgj3CbQ = (958 - 710) - 248;
        for (; WLyFwKvN0 > hgj3CbQ;) {
            gets (OMJrzb [hgj3CbQ]);
            hgj3CbQ = hgj3CbQ + (206 - 205);
        }
    }
    {
        hgj3CbQ = 601 - 601;
        while (hgj3CbQ < WLyFwKvN0) {
            {
                XMJAUjtqhnZ = (1294 - 936) - 358;
                for (; WLyFwKvN0 > XMJAUjtqhnZ;) {
                    bdFQsS5g[hgj3CbQ][XMJAUjtqhnZ] = (54 - 54);
                    XMJAUjtqhnZ = XMJAUjtqhnZ +(377 - 376);
                }
            }
            hgj3CbQ = hgj3CbQ + (57 - 56);
        }
    }
    for (hgj3CbQ = (981 - 981); WLyFwKvN0 > hgj3CbQ; hgj3CbQ = hgj3CbQ + (827 - 826)) {
        XMJAUjtqhnZ = (505 - 505);
        for (; WLyFwKvN0 > XMJAUjtqhnZ;) {
            if (!('@' != OMJrzb[hgj3CbQ][XMJAUjtqhnZ])) {
                bdFQsS5g[hgj3CbQ][XMJAUjtqhnZ] = (835 - 834);
                s = s + (643 - 642);
            }
            XMJAUjtqhnZ = XMJAUjtqhnZ +(797 - 796);
        }
    }
    for (; a < ns18xpJ0qu;) {
        {
            hgj3CbQ = 0;
            while (hgj3CbQ < WLyFwKvN0) {
                for (XMJAUjtqhnZ = 0; XMJAUjtqhnZ < WLyFwKvN0; XMJAUjtqhnZ = XMJAUjtqhnZ +(594 - 593)) {
                    if (!((999 - 998) != bdFQsS5g[hgj3CbQ][XMJAUjtqhnZ])) {
                        if (hgj3CbQ > 0 && !('.' != OMJrzb[hgj3CbQ - (940 - 939)][XMJAUjtqhnZ])) {
                            s = s + (470 - 469);
                            OMJrzb[hgj3CbQ - 1][XMJAUjtqhnZ] = '@';
                        }
                        if (hgj3CbQ < WLyFwKvN0 -1 && !('.' != OMJrzb[hgj3CbQ + 1][XMJAUjtqhnZ])) {
                            OMJrzb[hgj3CbQ + 1][XMJAUjtqhnZ] = '@';
                            s = s + 1;
                        }
                        if (0 < XMJAUjtqhnZ &&!('.' != OMJrzb[hgj3CbQ][XMJAUjtqhnZ -1])) {
                            OMJrzb[hgj3CbQ][XMJAUjtqhnZ -1] = '@';
                            s = s + 1;
                        }
                        if (XMJAUjtqhnZ < WLyFwKvN0 -1 && !('.' != OMJrzb[hgj3CbQ][XMJAUjtqhnZ +1])) {
                            OMJrzb[hgj3CbQ][XMJAUjtqhnZ +1] = '@';
                            s = s + 1;
                        }
                    }
                }
                hgj3CbQ = hgj3CbQ + 1;
            }
        }
        {
            hgj3CbQ = 0;
            for (; hgj3CbQ < WLyFwKvN0;) {
                for (XMJAUjtqhnZ = 0; XMJAUjtqhnZ < WLyFwKvN0; XMJAUjtqhnZ = XMJAUjtqhnZ +1) {
                    if (OMJrzb[hgj3CbQ][XMJAUjtqhnZ] == '@') {
                        bdFQsS5g[hgj3CbQ][XMJAUjtqhnZ] = 1;
                    }
                }
                hgj3CbQ = hgj3CbQ + 1;
            }
        }
        a = a + 1;
    }
    printf ("%d", s);
    return 0;
}

