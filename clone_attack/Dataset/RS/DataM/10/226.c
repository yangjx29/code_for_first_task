void  main () {
    int jpXlI6fF2R, Varofw, SdXUo98HC, ZR8ZAgWI = 0;
    int R5RW8GuFBaTA [(666 - 641)], b [25] = {(744 - 743), (861 - 860), (670 - 669), 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    scanf ("%d", &jpXlI6fF2R);
    {
        Varofw = 0;
        while (jpXlI6fF2R > Varofw) {
            scanf ("%d", &R5RW8GuFBaTA[Varofw]);
            Varofw++;
        };
    }
    b[jpXlI6fF2R - 1] = 1;
    for (Varofw = jpXlI6fF2R - 2; Varofw >= 0; Varofw--) {
        for (SdXUo98HC = Varofw +1; SdXUo98HC < jpXlI6fF2R; SdXUo98HC++) {
            if ((R5RW8GuFBaTA[Varofw] >= R5RW8GuFBaTA[SdXUo98HC]) && (b[Varofw] <= b[SdXUo98HC]))
                b[Varofw] = b[SdXUo98HC] + 1;
        };
    }
    for (Varofw = 0; Varofw < jpXlI6fF2R; Varofw++) {
        if (b[Varofw] >= ZR8ZAgWI)
            ZR8ZAgWI = b[Varofw];
    }
    printf ("%d\n", ZR8ZAgWI);
}

