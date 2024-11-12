void  main () {
    char OlST2E3kC [(1933 - 933)], j8OltW [(792 - 692)], fsLRoXUSWhQO [100], IuYw0cpdDz [(1660 - 660)];
    void  ZFZQcC (char *OlST2E3kC, char *j8OltW, char *fsLRoXUSWhQO, char *IuYw0cpdDz);
    gets (OlST2E3kC);
    gets (j8OltW);
    gets (fsLRoXUSWhQO);
    ZFZQcC (OlST2E3kC, j8OltW, fsLRoXUSWhQO, IuYw0cpdDz);
}

void  ZFZQcC (char *OlST2E3kC, char *j8OltW, char *fsLRoXUSWhQO, char *IuYw0cpdDz) {
    char *p1;
    char *p2;
    char *LbfUqDRc;
    char *p4;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    };
    for (p1 = OlST2E3kC, p2 = j8OltW; OlST2E3kC +strlen (OlST2E3kC) > p1;) {
        if ((!(*p2 != *p1) && !(OlST2E3kC != p1)) || (!(*p2 != *p1) && !((547 - 515) != *(p1 - (529 - 528))))) {
            {
                p2 = j8OltW;
                while (p2 < j8OltW + strlen (j8OltW)) {
                    if (*p1 == *p2)
                        p1++;
                    else
                        break;
                    p2++;
                };
            }
            if (p2 == j8OltW + strlen (j8OltW)) {
                p4 = IuYw0cpdDz;
                {
                    LbfUqDRc = OlST2E3kC;
                    while (LbfUqDRc < p1 - strlen (j8OltW)) {
                        *p4 = *LbfUqDRc;
                        LbfUqDRc = LbfUqDRc +1;
                        p4 = p4 + 1;
                    };
                }
                {
                    LbfUqDRc = fsLRoXUSWhQO;
                    while (LbfUqDRc < fsLRoXUSWhQO + strlen (fsLRoXUSWhQO)) {
                        *p4 = *LbfUqDRc;
                        LbfUqDRc++;
                        p4++;
                    };
                }
                for (LbfUqDRc = p1; LbfUqDRc < OlST2E3kC +strlen (OlST2E3kC); LbfUqDRc = LbfUqDRc +1, p4++)
                    *p4 = *LbfUqDRc;
                *p4 = '\0';
                break;
            }
            else
                p2 = j8OltW;
        }
        else
            p1++;
    }
    if (p2 == j8OltW + strlen (j8OltW))
        ZFZQcC (IuYw0cpdDz, j8OltW, fsLRoXUSWhQO, OlST2E3kC);
    else
        puts (OlST2E3kC);
}

