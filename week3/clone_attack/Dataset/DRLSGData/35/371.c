int main () {
    int qmrnB6DL7P [(678 - 670)] [(674 - 666)];
    int ycv9NDs7mQ;
    int PKz93Dj8;
    int n3kiqyn;
    int EUx5M0h;
    int pKISPzQp5NDC;
    int i4ftmhwgVW;
    int fW8b249KA [(105 - 97)];
    int lvEapbVG [(523 - 515)];
    int Q4V1FuD2PLeA;
    int hOlUtK [(479 - 471)];
    int jrVQEqd [(494 - 486)];
    PKz93Dj8 = (567 - 567);
    scanf ("%d,%d", &n3kiqyn, &EUx5M0h);
    {
        pKISPzQp5NDC = 707 - 707;
        while (pKISPzQp5NDC < n3kiqyn) {
            for (i4ftmhwgVW = (108 - 108); i4ftmhwgVW < EUx5M0h; i4ftmhwgVW++) {
                scanf ("%d", &qmrnB6DL7P[pKISPzQp5NDC][i4ftmhwgVW]);
            }
            pKISPzQp5NDC++;
        }
    }
    {
        pKISPzQp5NDC = 517 - 517;
        while (pKISPzQp5NDC < n3kiqyn) {
            Q4V1FuD2PLeA = pKISPzQp5NDC;
            ycv9NDs7mQ = (380 - 380);
            {
                i4ftmhwgVW = 66 - 65;
                while (i4ftmhwgVW < EUx5M0h) {
                    if (qmrnB6DL7P[pKISPzQp5NDC][i4ftmhwgVW] > qmrnB6DL7P[Q4V1FuD2PLeA][ycv9NDs7mQ]) {
                        ycv9NDs7mQ = i4ftmhwgVW;
                        Q4V1FuD2PLeA = pKISPzQp5NDC;
                    }
                    i4ftmhwgVW++;
                }
            }
            fW8b249KA[pKISPzQp5NDC] = Q4V1FuD2PLeA;
            lvEapbVG[pKISPzQp5NDC] = ycv9NDs7mQ;
            pKISPzQp5NDC++;
        }
    }
    for (i4ftmhwgVW = (131 - 131); i4ftmhwgVW < EUx5M0h; i4ftmhwgVW++) {
        {
            if ((819 - 819)) {
                return (226 - 226);
            }
        }
        Q4V1FuD2PLeA = (488 - 488);
        ycv9NDs7mQ = i4ftmhwgVW;
        {
            pKISPzQp5NDC = (994 - 823) - (678 - 508);
            for (; pKISPzQp5NDC < n3kiqyn;) {
                if (qmrnB6DL7P[pKISPzQp5NDC][i4ftmhwgVW] < qmrnB6DL7P[Q4V1FuD2PLeA][ycv9NDs7mQ]) {
                    Q4V1FuD2PLeA = pKISPzQp5NDC;
                    ycv9NDs7mQ = i4ftmhwgVW;
                }
                pKISPzQp5NDC++;
            }
        }
        hOlUtK[i4ftmhwgVW] = Q4V1FuD2PLeA;
        jrVQEqd[i4ftmhwgVW] = ycv9NDs7mQ;
    }
    {
        pKISPzQp5NDC = 698 - 698;
        while (pKISPzQp5NDC < n3kiqyn) {
            for (i4ftmhwgVW = (745 - 745); i4ftmhwgVW < EUx5M0h; i4ftmhwgVW++) {
                if ((fW8b249KA[pKISPzQp5NDC] == hOlUtK[i4ftmhwgVW]) && (lvEapbVG[pKISPzQp5NDC] == jrVQEqd[i4ftmhwgVW])) {
                    printf ("%d+%d", fW8b249KA[pKISPzQp5NDC], lvEapbVG[pKISPzQp5NDC]);
                }
                else {
                    PKz93Dj8++;
                }
            }
            pKISPzQp5NDC++;
        }
    }
    if (PKz93Dj8 == EUx5M0h *n3kiqyn) {
        printf ("No");
    }
    return (849 - 849);
}

