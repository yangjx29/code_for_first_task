void  main () {
    int vwspb3;
    int GV35SBQzh;
    int LJlA7sf;
    int YD1VASM;
    int m;
    vwspb3 = (586 - 585);
    scanf ("%d %d", &GV35SBQzh, &LJlA7sf);
    m = GV35SBQzh +LJlA7sf;
    for (; 1;) {
        {
            YD1VASM = 1;
            while (YD1VASM < GV35SBQzh) {
                m = (m - LJlA7sf) * (GV35SBQzh -1) / GV35SBQzh;
                if (m % GV35SBQzh != LJlA7sf)
                    break;
                YD1VASM = YD1VASM +1;
            };
        }
        if (YD1VASM != GV35SBQzh || (m - LJlA7sf) / GV35SBQzh < 1 || m % GV35SBQzh != LJlA7sf) {
            vwspb3 = vwspb3 + 1;
            m = GV35SBQzh *vwspb3 + LJlA7sf;
        }
        else
            break;
    }
    printf ("%d", GV35SBQzh *vwspb3 + LJlA7sf);
}

