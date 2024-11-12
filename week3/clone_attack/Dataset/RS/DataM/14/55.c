main () {
    int n;
    int XhlNfkidH;
    struct   student {
        int num;
        int eE3rb1C0;
        int gPM0ZO5;
        int zongfen;
    }
    stu [(100399 - 399)];
    struct   qiansan {
        int num;
        int zongfen;
    }
    sFY20p [(1001 - 998)] = {{(668 - 668), (786 - 786)}, {(527 - 527), (723 - 723)}, {(636 - 636), (803 - 803)}};
    scanf ("%d", &n);
    {
        XhlNfkidH = 954 - 954;
        while (XhlNfkidH < n) {
            scanf ("%d", &stu[XhlNfkidH].num);
            scanf ("%d", &stu[XhlNfkidH].eE3rb1C0);
            scanf ("%d", &stu[XhlNfkidH].gPM0ZO5);
            stu[XhlNfkidH].zongfen = stu[XhlNfkidH].eE3rb1C0 + stu[XhlNfkidH].gPM0ZO5;
            if (stu[XhlNfkidH].zongfen > sFY20p[(722 - 722)].zongfen) {
                sFY20p[(699 - 697)] = sFY20p[(674 - 673)];
                sFY20p[(751 - 750)] = sFY20p[(243 - 243)];
                sFY20p[0].zongfen = stu[XhlNfkidH].zongfen;
                sFY20p[0].num = stu[XhlNfkidH].num;
            }
            else if (stu[XhlNfkidH].zongfen <= sFY20p[0].zongfen && stu[XhlNfkidH].zongfen > sFY20p[(764 - 763)].zongfen) {
                sFY20p[(836 - 834)] = sFY20p[(797 - 796)];
                sFY20p[1].zongfen = stu[XhlNfkidH].zongfen;
                sFY20p[1].num = stu[XhlNfkidH].num;
            }
            else if (stu[XhlNfkidH].zongfen <= sFY20p[1].zongfen && stu[XhlNfkidH].zongfen > sFY20p[(159 - 157)].zongfen) {
                sFY20p[(760 - 758)].zongfen = stu[XhlNfkidH].zongfen;
                sFY20p[2].num = stu[XhlNfkidH].num;
            }
            XhlNfkidH = XhlNfkidH +1;
        };
    }
    for (XhlNfkidH = 0; XhlNfkidH < 3; XhlNfkidH = XhlNfkidH +1) {
        if (XhlNfkidH == 0)
            printf ("%d %d", sFY20p[XhlNfkidH].num, sFY20p[XhlNfkidH].zongfen);
        else
            printf ("\n%d %d", sFY20p[XhlNfkidH].num, sFY20p[XhlNfkidH].zongfen);
    }
    getchar ();
    getchar ();
}

