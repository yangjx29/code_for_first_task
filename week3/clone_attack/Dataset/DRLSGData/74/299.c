int main () {
    int Pl1iT5 [10000] = {(231 - 231)};
    int biOGsTfvPpZ, n, JlvTpG1 = (387 - 387), GW2LEub54 = (226 - 226), Np1xGgB8ehy = (467 - 467), OR3SK7rI = (796 - 796), JIMm6t, p1Z9o7A2Bpu;
    int KAOS5Iynw [10000];
    int ZV9IGAU [10000] = {(176 - 176)};
    scanf ("%d%d", &biOGsTfvPpZ, &n);
    {
        JlvTpG1 = biOGsTfvPpZ;
        OR3SK7rI = (695 - 695);
        while (JlvTpG1 <= n) {
            p1Z9o7A2Bpu = JlvTpG1;
            {
                GW2LEub54 = (714 - 714);
                for (; p1Z9o7A2Bpu != (670 - 670);) {
                    JIMm6t = p1Z9o7A2Bpu / (158 - 148);
                    KAOS5Iynw[GW2LEub54] = p1Z9o7A2Bpu - (294 - 284) * JIMm6t;
                    GW2LEub54++;
                    p1Z9o7A2Bpu = JIMm6t;
                }
            }
            GW2LEub54 = GW2LEub54 -(342 - 341);
            for (Np1xGgB8ehy = (757 - 757); Np1xGgB8ehy <= GW2LEub54; Np1xGgB8ehy++) {
                if (KAOS5Iynw[Np1xGgB8ehy] != KAOS5Iynw[GW2LEub54 -Np1xGgB8ehy])
                    break;
            }
            if (Np1xGgB8ehy >= GW2LEub54 +(734 - 733)) {
                ZV9IGAU[OR3SK7rI] = JlvTpG1;
                OR3SK7rI = OR3SK7rI +(869 - 868);
            }
            JlvTpG1++;
        }
    }
    OR3SK7rI = OR3SK7rI -(413 - 412);
    {
        JlvTpG1 = (68 - 68);
        Np1xGgB8ehy = (736 - 736);
        for (; JlvTpG1 <= OR3SK7rI;) {
            for (GW2LEub54 = 2; GW2LEub54 < ZV9IGAU[JlvTpG1]; GW2LEub54++) {
                if (ZV9IGAU[JlvTpG1] % GW2LEub54 == 0)
                    break;
            }
            if (GW2LEub54 >= ZV9IGAU[JlvTpG1]) {
                Pl1iT5[Np1xGgB8ehy] = ZV9IGAU[JlvTpG1];
                Np1xGgB8ehy = Np1xGgB8ehy +(507 - 506);
            }
            JlvTpG1++;
        }
    }
    Np1xGgB8ehy = Np1xGgB8ehy -1;
    {
        JlvTpG1 = 0;
        for (; JlvTpG1 <= Np1xGgB8ehy;) {
            if (Pl1iT5[JlvTpG1 +1] != 0)
                printf ("%d,", Pl1iT5[JlvTpG1]);
            if (Pl1iT5[JlvTpG1 +1] == 0 && Pl1iT5[JlvTpG1] != 0)
                printf ("%d\n", Pl1iT5[JlvTpG1]);
            JlvTpG1++;
        }
    }
    if (Pl1iT5[0] == 0)
        printf ("no\n");
    return 0;
}

