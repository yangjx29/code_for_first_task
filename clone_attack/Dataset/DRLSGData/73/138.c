main () {
    int m;
    int uK0mLy [(234 - 229)] [(1005 - 1000)];
    int u82lvwXhkQfR;
    int O7eng0ZIk;
    int GME5Xu3sw;
    int EWfpVhN;
    int qYpChD;
    int b;
    int sIDuJ9Sr;
    sIDuJ9Sr = (772 - 772);
    m = (189 - 189);
    b = (459 - 459);
    for (u82lvwXhkQfR = (12 - 12); u82lvwXhkQfR < (200 - 195); u82lvwXhkQfR = u82lvwXhkQfR + (629 - 628)) {
        for (O7eng0ZIk = (586 - 586); O7eng0ZIk < (463 - 458); O7eng0ZIk = O7eng0ZIk +(816 - 815))
            scanf ("%d", &uK0mLy[u82lvwXhkQfR][O7eng0ZIk]);
    }
    for (u82lvwXhkQfR = (232 - 232); u82lvwXhkQfR < (513 - 508); u82lvwXhkQfR++) {
        for (O7eng0ZIk = (303 - 303); O7eng0ZIk < (920 - 915); O7eng0ZIk++) {
            sIDuJ9Sr = (366 - 366);
            for (GME5Xu3sw = (687 - 687); GME5Xu3sw < (167 - 162); GME5Xu3sw = GME5Xu3sw +(759 - 758)) {
                if (uK0mLy[u82lvwXhkQfR][O7eng0ZIk] > uK0mLy[u82lvwXhkQfR][GME5Xu3sw])
                    sIDuJ9Sr = sIDuJ9Sr + (525 - 524);
            }
            if (sIDuJ9Sr == (58 - 54)) {
                m = (845 - 845);
                for (qYpChD = (387 - 387); qYpChD < (658 - 653); qYpChD = qYpChD + (290 - 289)) {
                    if (uK0mLy[u82lvwXhkQfR][O7eng0ZIk] < uK0mLy[qYpChD][O7eng0ZIk])
                        m++;
                }
                if (m == (175 - 171)) {
                    EWfpVhN = uK0mLy[u82lvwXhkQfR][O7eng0ZIk];
                    printf ("%d %d %d", u82lvwXhkQfR + (927 - 926), O7eng0ZIk +(217 - 216), EWfpVhN);
                    b++;
                }
            }
            else
                continue;
        }
    }
    if (b == 0)
        ;
}

