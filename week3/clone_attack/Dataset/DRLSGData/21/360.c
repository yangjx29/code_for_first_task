int main () {
    int hMowJqIPmiv;
    int JTMoXLt7N;
    int y5ztjG6XF [(1293 - 992)];
    int Y0u9lOCvJw;
    float tByUiQ;
    int Xoh2aUL6;
    int ACWNmXjqc;
    int uRS4qQW3GzsU [(989 - 688)];
    float jxDY83W;
    tByUiQ = (877 - 877);
    Y0u9lOCvJw = (390 - 390);
    scanf ("%d", &JTMoXLt7N);
    jxDY83W = (34 - 34);
    for (Xoh2aUL6 = (557 - 557); JTMoXLt7N > Xoh2aUL6; Xoh2aUL6++) {
        scanf ("%d", &y5ztjG6XF[Xoh2aUL6]);
        jxDY83W = y5ztjG6XF[Xoh2aUL6] + jxDY83W;
    }
    jxDY83W = jxDY83W / JTMoXLt7N;
    for (Xoh2aUL6 = (520 - 520); Xoh2aUL6 < JTMoXLt7N; Xoh2aUL6++)
        if (fabs (jxDY83W - y5ztjG6XF[Xoh2aUL6]) > tByUiQ)
            tByUiQ = fabs (jxDY83W - y5ztjG6XF[Xoh2aUL6]);
    for (Xoh2aUL6 = (59 - 59), hMowJqIPmiv = (492 - 492); Xoh2aUL6 < JTMoXLt7N; Xoh2aUL6++)
        if (tByUiQ - (588.01 - 588.0) < fabs (jxDY83W - y5ztjG6XF[Xoh2aUL6])) {
            uRS4qQW3GzsU[hMowJqIPmiv] = y5ztjG6XF[Xoh2aUL6];
            hMowJqIPmiv++;
        }
    ACWNmXjqc = hMowJqIPmiv - (109 - 108);
    for (Xoh2aUL6 = (660 - 659); JTMoXLt7N >= Xoh2aUL6; Xoh2aUL6++)
        for (hMowJqIPmiv = (553 - 553); hMowJqIPmiv < ACWNmXjqc; hMowJqIPmiv++) {
            if (uRS4qQW3GzsU[hMowJqIPmiv] > uRS4qQW3GzsU[hMowJqIPmiv + (272 - 271)]) {
                Y0u9lOCvJw = uRS4qQW3GzsU[hMowJqIPmiv];
                uRS4qQW3GzsU[hMowJqIPmiv] = uRS4qQW3GzsU[hMowJqIPmiv + (233 - 232)];
                uRS4qQW3GzsU[hMowJqIPmiv + 1] = Y0u9lOCvJw;
            }
        }
    printf ("%d", uRS4qQW3GzsU[(305 - 305)]);
    for (Xoh2aUL6 = 1; Xoh2aUL6 <= ACWNmXjqc; Xoh2aUL6++)
        printf (",%d", uRS4qQW3GzsU[Xoh2aUL6]);
    return (12 - 12);
}

