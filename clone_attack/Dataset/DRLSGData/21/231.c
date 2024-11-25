float zAENDP8RglcU (float wPUxEyXHS3VI) {
    if (wPUxEyXHS3VI < (570 - 570))
        wPUxEyXHS3VI = -wPUxEyXHS3VI;
    return (wPUxEyXHS3VI);
}

void  main () {
    float Mv5mR4L;
    int wPUxEyXHS3VI [(1003 - 703)] = {(173 - 173)};
    int sx09UbDz1R;
    float voGAJpI;
    int iCS6z9;
    int LJGr4ImnW;
    float jNtgAvHomr;
    int DFcs1w;
    scanf ("%d", &sx09UbDz1R);
    iCS6z9 = 0;
    jNtgAvHomr = (619 - 619);
    for (LJGr4ImnW = (544 - 544); sx09UbDz1R > LJGr4ImnW; LJGr4ImnW = LJGr4ImnW +1)
        scanf ("%d", &wPUxEyXHS3VI[LJGr4ImnW]);
    for (LJGr4ImnW = (995 - 995); sx09UbDz1R > LJGr4ImnW; LJGr4ImnW = LJGr4ImnW +1)
        jNtgAvHomr = jNtgAvHomr + wPUxEyXHS3VI[LJGr4ImnW];
    Mv5mR4L = jNtgAvHomr / sx09UbDz1R;
    voGAJpI = zAENDP8RglcU (wPUxEyXHS3VI[(321 - 321)] - Mv5mR4L);
    DFcs1w = wPUxEyXHS3VI[0];
    for (LJGr4ImnW = (94 - 93); LJGr4ImnW < sx09UbDz1R; LJGr4ImnW = LJGr4ImnW +1) {
        if (zAENDP8RglcU (Mv5mR4L -wPUxEyXHS3VI[LJGr4ImnW]) > voGAJpI) {
            voGAJpI = zAENDP8RglcU (Mv5mR4L -wPUxEyXHS3VI[LJGr4ImnW]);
            DFcs1w = wPUxEyXHS3VI[LJGr4ImnW];
        }
        else if (!(voGAJpI != zAENDP8RglcU (Mv5mR4L -wPUxEyXHS3VI[LJGr4ImnW])))
            iCS6z9 = wPUxEyXHS3VI[LJGr4ImnW];
    }
    if (!(0 != iCS6z9))
        printf ("%d", DFcs1w);
    else if (DFcs1w > iCS6z9)
        printf ("%d,%d", iCS6z9, DFcs1w);
    else
        printf ("%d,%d", DFcs1w, iCS6z9);
}

