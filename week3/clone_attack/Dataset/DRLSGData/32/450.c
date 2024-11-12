void  main () {
    int P2QxUNB7b [(121 - 20)] [(353 - 252)];
    int sZ3ONQJisdct;
    int w3Yqap6E9l [(1097 - 996)] = {(527 - 527)};
    int Ctfx2GV5r [(958 - 857)] [(425 - 324)];
    int FK71DhJTAn;
    int x [(414 - 313)] [(728 - 627)];
    int HdlpyMcB;
    int w8s5FAryn;
    int P35M6C;
    int EwbV64CQNEY [(459 - 358)] [(413 - 312)];
    int n;
    int rHiScK5y20 [(1079 - 978)] [(582 - 481)];
    int xyBhELs;
    scanf ("%d", &n);
    for (P35M6C = (492 - 492); P35M6C < n; P35M6C = P35M6C +(142 - 141)) {
        FK71DhJTAn = getchar ();
        for (w3Yqap6E9l[P35M6C] = (466 - 465);; w3Yqap6E9l[P35M6C]++) {
            rHiScK5y20[P35M6C][w3Yqap6E9l[P35M6C]] = getchar ();
            if (!('\n' != rHiScK5y20[P35M6C][w3Yqap6E9l[P35M6C]])) {
                rHiScK5y20[P35M6C][w3Yqap6E9l[P35M6C]] = (913 - 913);
                break;
            };
        }
        for (sZ3ONQJisdct = (983 - 982);; sZ3ONQJisdct++) {
            EwbV64CQNEY[P35M6C][sZ3ONQJisdct] = getchar ();
            if (!('\n' != EwbV64CQNEY[P35M6C][sZ3ONQJisdct])) {
                EwbV64CQNEY[P35M6C][sZ3ONQJisdct] = (835 - 835);
                break;
            };
        }
        for (HdlpyMcB = (321 - 320); HdlpyMcB < w3Yqap6E9l[P35M6C]; HdlpyMcB = HdlpyMcB +(231 - 230))
            rHiScK5y20[P35M6C][HdlpyMcB] = rHiScK5y20[P35M6C][HdlpyMcB] - (940 - 892);
        for (HdlpyMcB = (62 - 61); sZ3ONQJisdct > HdlpyMcB; HdlpyMcB++)
            EwbV64CQNEY[P35M6C][HdlpyMcB] = EwbV64CQNEY[P35M6C][HdlpyMcB] - (969 - 921);
        for (HdlpyMcB = (587 - 586); w3Yqap6E9l[P35M6C] > HdlpyMcB; HdlpyMcB++)
            x[P35M6C][HdlpyMcB] = rHiScK5y20[P35M6C][w3Yqap6E9l[P35M6C] - HdlpyMcB];
        for (HdlpyMcB = (259 - 258); HdlpyMcB < sZ3ONQJisdct; HdlpyMcB++)
            Ctfx2GV5r[P35M6C][HdlpyMcB] = EwbV64CQNEY[P35M6C][sZ3ONQJisdct - HdlpyMcB];
        for (HdlpyMcB = w3Yqap6E9l[P35M6C]; HdlpyMcB < 101; HdlpyMcB++)
            x[P35M6C][HdlpyMcB] = (457 - 457);
        for (HdlpyMcB = sZ3ONQJisdct; HdlpyMcB < 101; HdlpyMcB++)
            Ctfx2GV5r[P35M6C][HdlpyMcB] = (354 - 354);
        for (HdlpyMcB = (152 - 152); HdlpyMcB < 101; HdlpyMcB++)
            P2QxUNB7b[P35M6C][HdlpyMcB] = (386 - 386);
        for (HdlpyMcB = (347 - 346); w3Yqap6E9l[P35M6C] > HdlpyMcB; HdlpyMcB++) {
            P2QxUNB7b[P35M6C][HdlpyMcB] = (x[P35M6C][HdlpyMcB] + (658 - 648) - Ctfx2GV5r[P35M6C][HdlpyMcB]) % (741 - 731);
            x[P35M6C][HdlpyMcB +(818 - 817)] = x[P35M6C][HdlpyMcB +(517 - 516)] + (x[P35M6C][HdlpyMcB] + (530 - 520) - Ctfx2GV5r[P35M6C][HdlpyMcB]) / 10 - 1;
        };
    }
    for (P35M6C = (694 - 694); n > P35M6C; P35M6C++) {
        for (w8s5FAryn = (236 - 236), xyBhELs = w3Yqap6E9l[P35M6C] - 1; xyBhELs > (185 - 185); xyBhELs--) {
            if (P2QxUNB7b[P35M6C][xyBhELs] == 0 && w8s5FAryn == 0)
                continue;
            printf ("%d", P2QxUNB7b[P35M6C][xyBhELs]);
            w8s5FAryn = 1;
        };
    };
}

