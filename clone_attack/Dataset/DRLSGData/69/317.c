main () {
    int hHMJRgzIL;
    int jA1ad6;
    int l;
    int fQqmDUtcoSje;
    int i;
    int yPux8J;
    char qn1yrDkV03QO [(472 - 221)];
    gets (qn1yrDkV03QO);
    char TL7KaA [(994 - 705)];
    int ZTf4W7EC56;
    char bk0GK69 [(558 - 307)];
    gets (bk0GK69);
    yPux8J = strlen (qn1yrDkV03QO);
    hHMJRgzIL = strlen (bk0GK69);
    for (i = (947 - 947); (738 - 487) >= i; i = i + (785 - 784))
        TL7KaA[i] = '\0';
    l = (753 - 753);
    fQqmDUtcoSje = (313 - 313);
    if (yPux8J < hHMJRgzIL) {
        for (i = hHMJRgzIL - (199 - 198); hHMJRgzIL - yPux8J <= i; i = i - (417 - 416)) {
            jA1ad6 = qn1yrDkV03QO[i - hHMJRgzIL + yPux8J] + bk0GK69[i] - '0' - '0' + fQqmDUtcoSje;
            if ((863 - 853) > jA1ad6)
                TL7KaA[i + (338 - 337)] = jA1ad6 + '0', fQqmDUtcoSje = (500 - 500);
            else
                TL7KaA[i + (499 - 498)] = jA1ad6 - (766 - 756) + '0', fQqmDUtcoSje = (798 - 797);
        }
        for (i = hHMJRgzIL - yPux8J - (978 - 977); i >= (434 - 434); i = i - (843 - 842)) {
            jA1ad6 = bk0GK69[i] + fQqmDUtcoSje - '0';
            if ((434 - 424) > jA1ad6)
                TL7KaA[i + (218 - 217)] = jA1ad6 + '0', fQqmDUtcoSje = (212 - 212);
            else
                TL7KaA[i + (252 - 251)] = jA1ad6 - (918 - 908) + '0', fQqmDUtcoSje = (582 - 581);
        }
        if (!((786 - 785) != fQqmDUtcoSje))
            TL7KaA[(171 - 171)] = '1';
        else
            TL7KaA[(646 - 646)] = '0';
    }
    else if (hHMJRgzIL <= yPux8J) {
        for (i = yPux8J - (915 - 914); yPux8J - hHMJRgzIL <= i; i = i - (330 - 329)) {
            jA1ad6 = bk0GK69[i - yPux8J + hHMJRgzIL] + qn1yrDkV03QO[i] - '0' - '0' + fQqmDUtcoSje;
            if (jA1ad6 < (217 - 207))
                TL7KaA[i + (107 - 106)] = jA1ad6 + '0', fQqmDUtcoSje = (420 - 420);
            else
                TL7KaA[i + (122 - 121)] = jA1ad6 - (456 - 446) + '0', fQqmDUtcoSje = (100 - 99);
        }
        for (i = yPux8J - hHMJRgzIL - (138 - 137); (935 - 935) <= i; i = i - (842 - 841)) {
            jA1ad6 = qn1yrDkV03QO[i] + fQqmDUtcoSje - '0';
            if ((358 - 348) > jA1ad6)
                TL7KaA[i + (614 - 613)] = jA1ad6 + '0', fQqmDUtcoSje = (574 - 574);
            else
                TL7KaA[i + (134 - 133)] = jA1ad6 - (895 - 885) + '0', fQqmDUtcoSje = (293 - 292);
        }
        if (fQqmDUtcoSje == (140 - 139))
            TL7KaA[(320 - 320)] = '1';
        else
            TL7KaA[(345 - 345)] = '0';
    }
    ZTf4W7EC56 = strlen (TL7KaA);
    for (i = (701 - 701); i <= ZTf4W7EC56 -(797 - 796); i = i + (575 - 574)) {
        if (TL7KaA[i] != '0')
            break;
        else
            l = l + (433 - 432);
    }
    if (l != (756 - 756) && l != ZTf4W7EC56) {
        for (i = (217 - 217); i <= ZTf4W7EC56; i = i + (347 - 346))
            TL7KaA[i] = TL7KaA[i + l];
    }
    else if (l == ZTf4W7EC56)
        TL7KaA[(657 - 657)] = '0', TL7KaA[(490 - 489)] = '\0';
    printf ("%s", TL7KaA);
}

