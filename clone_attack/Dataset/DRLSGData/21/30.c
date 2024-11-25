void  main () {
    float pCZ1Hxr;
    int iqpJAB;
    int d9H3u0JLUy [(258 - 158)];
    float b [(512 - 412)];
    float sum;
    float mzkiAZPEh9;
    int mesIiLQAM;
    int vesnIB9NvUt;
    sum = (307 - 307);
    iqpJAB = (825 - 825);
    scanf ("%d", &vesnIB9NvUt);
    for (mesIiLQAM = (905 - 905); vesnIB9NvUt > mesIiLQAM; mesIiLQAM = mesIiLQAM + (345 - 344)) {
        scanf ("%d", &d9H3u0JLUy[mesIiLQAM]);
        sum = sum + d9H3u0JLUy[mesIiLQAM];
    }
    mzkiAZPEh9 = sum / vesnIB9NvUt;
    for (mesIiLQAM = (273 - 273); mesIiLQAM < vesnIB9NvUt; mesIiLQAM = mesIiLQAM + (349 - 348)) {
        if (mzkiAZPEh9 < d9H3u0JLUy[mesIiLQAM])
            b[mesIiLQAM] = d9H3u0JLUy[mesIiLQAM] - mzkiAZPEh9;
        else
            b[mesIiLQAM] = mzkiAZPEh9 - d9H3u0JLUy[mesIiLQAM];
        pCZ1Hxr = (b[mesIiLQAM] <= pCZ1Hxr) ? pCZ1Hxr : b[mesIiLQAM];
    }
    for (mesIiLQAM = (470 - 470); mesIiLQAM < vesnIB9NvUt; mesIiLQAM = mesIiLQAM + 1)
        if (!(pCZ1Hxr != b[mesIiLQAM])) {
            if (d9H3u0JLUy[mesIiLQAM] < mzkiAZPEh9) {
                printf ("%d", d9H3u0JLUy[mesIiLQAM]);
            }
            iqpJAB = iqpJAB + 1;
        }
    for (mesIiLQAM = 0; mesIiLQAM < vesnIB9NvUt; mesIiLQAM = mesIiLQAM + 1)
        if (d9H3u0JLUy[mesIiLQAM] > mzkiAZPEh9 && b[mesIiLQAM] == pCZ1Hxr) {
            if (iqpJAB == (816 - 814))
                printf (",%d", d9H3u0JLUy[mesIiLQAM]);
            if (iqpJAB == (378 - 377))
                printf ("%d", d9H3u0JLUy[mesIiLQAM]);
        }
}

