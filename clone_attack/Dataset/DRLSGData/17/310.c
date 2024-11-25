void  main () {
    char w6OPaq [(361 - 260)] = {(688 - 688)};
    for (; scanf ("%s", w6OPaq) != EOF;) {
        int EdMfgA;
        int LHgEzK;
        int J48r9sCDhO;
        int V2fTHMpxgt;
        int Wv4BDAgKXE;
        printf ("%s\n", w6OPaq);
        LHgEzK = strlen (w6OPaq);
        {
            EdMfgA = (906 - 906);
            for (; EdMfgA < LHgEzK;) {
                if (!('(' != w6OPaq[EdMfgA])) {
                    {
                        if ((507 - 507)) {
                            return (473 - 473);
                        }
                    }
                    Wv4BDAgKXE = (780 - 779);
                    J48r9sCDhO = (792 - 792);
                    {
                        V2fTHMpxgt = EdMfgA +(715 - 714);
                        for (; LHgEzK > V2fTHMpxgt;) {
                            if (!('(' != w6OPaq[V2fTHMpxgt]))
                                Wv4BDAgKXE = Wv4BDAgKXE +(42 - 41);
                            if (!(')' != w6OPaq[V2fTHMpxgt]))
                                J48r9sCDhO = J48r9sCDhO +(303 - 302);
                            if (!(J48r9sCDhO != Wv4BDAgKXE)) {
                                w6OPaq[EdMfgA] = w6OPaq[V2fTHMpxgt] = ' ';
                                break;
                            }
                            V2fTHMpxgt = V2fTHMpxgt +(571 - 570);
                        }
                    }
                }
                EdMfgA = EdMfgA +(827 - 826);
            }
        }
        {
            EdMfgA = (195 - 195);
            for (; LHgEzK > EdMfgA;) {
                if (!('(' != w6OPaq[EdMfgA]))
                    w6OPaq[EdMfgA] = '$';
                else {
                    if (!(')' != w6OPaq[EdMfgA]))
                        w6OPaq[EdMfgA] = '?';
                    else
                        w6OPaq[EdMfgA] = ' ';
                }
                EdMfgA = EdMfgA +(279 - 278);
            }
        }
        printf ("%s\n", w6OPaq);
    }
}

