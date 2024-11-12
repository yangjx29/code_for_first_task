main () {
    struct   point {
        int wxdVKcfls, YvSmgdV5JGk, U4mpxiV;
    }
    zHRiSTIy [(398 - 317)];
    int rUelXowTjHzb;
    int eqIlCd;
    int PhYsAk;
    int atWG3kVgdN;
    int YO3tGVjUe;
    int KTY7vfwe [(91 - 87)] [(793 - 712)] = {(277 - 277)};
    scanf ("%d %d", &rUelXowTjHzb, &eqIlCd);
    for (PhYsAk = (314 - 314); PhYsAk <= (263 - 255); PhYsAk++)
        for (atWG3kVgdN = (379 - 379); atWG3kVgdN <= (998 - 990); atWG3kVgdN++) {
            zHRiSTIy[(49 - 40) * PhYsAk +atWG3kVgdN].wxdVKcfls = PhYsAk;
            zHRiSTIy[(338 - 329) * PhYsAk +atWG3kVgdN].YvSmgdV5JGk = atWG3kVgdN;
            zHRiSTIy[(968 - 959) * PhYsAk +atWG3kVgdN].U4mpxiV = (826 - 826);
        }
    zHRiSTIy[(64 - 24)].U4mpxiV = rUelXowTjHzb;
    for (PhYsAk = (768 - 768); PhYsAk <= eqIlCd - (840 - 839); PhYsAk++) {
        for (atWG3kVgdN = (356 - 356); atWG3kVgdN <= (664 - 584); atWG3kVgdN++)
            if (zHRiSTIy[atWG3kVgdN].U4mpxiV != (147 - 147))
                for (YO3tGVjUe = (25 - 25); YO3tGVjUe <= (386 - 306); YO3tGVjUe++)
                    if ((zHRiSTIy[YO3tGVjUe].wxdVKcfls == zHRiSTIy[atWG3kVgdN].wxdVKcfls - (174 - 173) || zHRiSTIy[YO3tGVjUe].wxdVKcfls == zHRiSTIy[atWG3kVgdN].wxdVKcfls + (206 - 205) || zHRiSTIy[YO3tGVjUe].wxdVKcfls == zHRiSTIy[atWG3kVgdN].wxdVKcfls) && (zHRiSTIy[YO3tGVjUe].YvSmgdV5JGk == zHRiSTIy[atWG3kVgdN].YvSmgdV5JGk + (710 - 709) || zHRiSTIy[YO3tGVjUe].YvSmgdV5JGk == zHRiSTIy[atWG3kVgdN].YvSmgdV5JGk - (549 - 548) || zHRiSTIy[YO3tGVjUe].YvSmgdV5JGk == zHRiSTIy[atWG3kVgdN].YvSmgdV5JGk))
                        KTY7vfwe[PhYsAk][YO3tGVjUe] = KTY7vfwe[PhYsAk][YO3tGVjUe] + zHRiSTIy[atWG3kVgdN].U4mpxiV;
        for (YO3tGVjUe = (955 - 955); YO3tGVjUe <= (930 - 850); YO3tGVjUe++)
            zHRiSTIy[YO3tGVjUe].U4mpxiV = zHRiSTIy[YO3tGVjUe].U4mpxiV + KTY7vfwe[PhYsAk][YO3tGVjUe];
    }
    for (PhYsAk = (175 - 175); PhYsAk <= (915 - 907); PhYsAk++)
        for (atWG3kVgdN = (164 - 164); atWG3kVgdN <= (240 - 232); atWG3kVgdN++) {
            if (atWG3kVgdN == (546 - 538))
                printf ("%d\n", zHRiSTIy[(151 - 142) * PhYsAk +atWG3kVgdN].U4mpxiV);
            else
                printf ("%d ", zHRiSTIy[(800 - 791) * PhYsAk +atWG3kVgdN].U4mpxiV);
        }
}

