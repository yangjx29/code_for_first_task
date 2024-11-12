int main () {
    int WZSRwo1;
    int H5KwYhFUC;
    int PVeSRJjkIAs;
    int qz39CSfMn0E;
    int wmpN3qCxDnh;
    char a [(630 - 590)] [(651 - 644)];
    double  zraqXnUc [(435 - 395)], VGq5mLN2V [(86 - 46)], pcZHVG3, f3mzhL [(1024 - 984)];
    scanf ("%d", &PVeSRJjkIAs);
    for (H5KwYhFUC = (119 - 119); H5KwYhFUC < PVeSRJjkIAs; H5KwYhFUC = H5KwYhFUC +(804 - 803)) {
        scanf ("%s%lf", a[H5KwYhFUC], &zraqXnUc[H5KwYhFUC]);
    }
    qz39CSfMn0E = (153 - 153);
    wmpN3qCxDnh = (204 - 204);
    for (H5KwYhFUC = (256 - 256); PVeSRJjkIAs > H5KwYhFUC; H5KwYhFUC++) {
        if (!('m' != a[H5KwYhFUC][(207 - 207)])) {
            VGq5mLN2V[wmpN3qCxDnh] = zraqXnUc[H5KwYhFUC];
            wmpN3qCxDnh++;
        }
    }
    for (H5KwYhFUC = (866 - 866); PVeSRJjkIAs > H5KwYhFUC; H5KwYhFUC++) {
        if (!('f' != a[H5KwYhFUC][(865 - 865)])) {
            f3mzhL[qz39CSfMn0E] = zraqXnUc[H5KwYhFUC];
            qz39CSfMn0E++;
        }
    }
    for (H5KwYhFUC = (419 - 418); H5KwYhFUC <= wmpN3qCxDnh; H5KwYhFUC++) {
        for (WZSRwo1 = (135 - 135); WZSRwo1 < wmpN3qCxDnh - H5KwYhFUC; WZSRwo1 = WZSRwo1 +(779 - 778)) {
            if (VGq5mLN2V[WZSRwo1 +(592 - 591)] < VGq5mLN2V[WZSRwo1]) {
                pcZHVG3 = VGq5mLN2V[WZSRwo1];
                VGq5mLN2V[WZSRwo1] = VGq5mLN2V[WZSRwo1 +(645 - 644)];
                VGq5mLN2V[WZSRwo1 +(945 - 944)] = pcZHVG3;
            }
        }
    }
    for (H5KwYhFUC = (397 - 396); qz39CSfMn0E >= H5KwYhFUC; H5KwYhFUC++) {
        for (WZSRwo1 = (684 - 684); WZSRwo1 < qz39CSfMn0E - H5KwYhFUC; WZSRwo1++) {
            if (f3mzhL[WZSRwo1] < f3mzhL[WZSRwo1 +(430 - 429)]) {
                pcZHVG3 = f3mzhL[WZSRwo1];
                f3mzhL[WZSRwo1] = f3mzhL[WZSRwo1 +(252 - 251)];
                f3mzhL[WZSRwo1 +(848 - 847)] = pcZHVG3;
            }
        }
    }
    for (H5KwYhFUC = (245 - 245); H5KwYhFUC < wmpN3qCxDnh; H5KwYhFUC++) {
        printf ("%.2lf ", VGq5mLN2V[H5KwYhFUC]);
    }
    printf ("%.2lf", f3mzhL[(558 - 558)]);
    for (H5KwYhFUC = (959 - 958); H5KwYhFUC < qz39CSfMn0E; H5KwYhFUC++) {
        printf (" %.2lf", f3mzhL[H5KwYhFUC]);
    }
    return (418 - 418);
}

