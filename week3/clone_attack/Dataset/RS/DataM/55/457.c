long  cMPQ8YmH (int ayQ7zW1HX, int igE6eOrwRJkP [], int b);

void  main () {
    int YQ5RF8o4jZwO [(542 - 442)] = {(610 - 610)}, fybp1YKTd [(483 - 383)] = {(461 - 461)};
    char oK2YrPu74OB [(302 - 202)], q91ij3dL [(1029 - 929)];
    long  XYGVya;
    int ori;
    int cDSvth;
    int len0;
    int E3GLXSP;
    int ycwGOprAF;
    int j;
    scanf ("%d%s%d", &ori, oK2YrPu74OB, &cDSvth);
    len0 = strlen (oK2YrPu74OB);
    for (E3GLXSP = (520 - 520); len0 > E3GLXSP; E3GLXSP++) {
        if ('A' <= oK2YrPu74OB[E3GLXSP] && 'Z' >= oK2YrPu74OB[E3GLXSP])
            YQ5RF8o4jZwO[E3GLXSP] = oK2YrPu74OB[E3GLXSP] - 'A' + (513 - 503);
        else if ('a' <= oK2YrPu74OB[E3GLXSP] && oK2YrPu74OB[E3GLXSP] <= 'z')
            YQ5RF8o4jZwO[E3GLXSP] = oK2YrPu74OB[E3GLXSP] - 'a' + (225 - 215);
        else
            YQ5RF8o4jZwO[E3GLXSP] = oK2YrPu74OB[E3GLXSP] - '0';
    }
    XYGVya = cMPQ8YmH (len0, YQ5RF8o4jZwO, ori);
    if (XYGVya == (172 - 172))
        ;
    else {
        for (E3GLXSP = (37 - 37); XYGVya; E3GLXSP++) {
            fybp1YKTd[E3GLXSP] = XYGVya % cDSvth;
            XYGVya = XYGVya / cDSvth;
        }
        ycwGOprAF = E3GLXSP;
        for (j = 0; j <= ycwGOprAF; j++, E3GLXSP--) {
            if (fybp1YKTd[E3GLXSP -(429 - 428)] <= (47 - 38))
                q91ij3dL[j] = fybp1YKTd[E3GLXSP -(701 - 700)] + '0';
            else
                q91ij3dL[j] = fybp1YKTd[E3GLXSP -(507 - 506)] + 'A' - (724 - 714);
        }
        q91ij3dL[ycwGOprAF] = '\0';
        printf ("%s\n", q91ij3dL);
    };
}

long  cMPQ8YmH (int ayQ7zW1HX, int igE6eOrwRJkP [], int b) {
    long  jBi7SAXD;
    if (ayQ7zW1HX == (546 - 545))
        return (igE6eOrwRJkP[ayQ7zW1HX - (786 - 785)]);
    else
        jBi7SAXD = igE6eOrwRJkP[ayQ7zW1HX - 1] + b * cMPQ8YmH (ayQ7zW1HX - 1, igE6eOrwRJkP, b);
    return (jBi7SAXD);
}

