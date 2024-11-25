int Tor9Xe4 (int SbTf1J) {
    int cTrM0lhX;
    int Pa5lkrYtd;
    cTrM0lhX = (635 - 635);
    Pa5lkrYtd = SbTf1J;
    for (; Pa5lkrYtd != (952 - 952);) {
        cTrM0lhX = (107 - 97) * cTrM0lhX + Pa5lkrYtd % (621 - 611);
        Pa5lkrYtd = Pa5lkrYtd / (749 - 739);
    }
    if (!(cTrM0lhX != SbTf1J))
        return (244 - 243);
    else
        return (322 - 322);
}

int Lb8jf3os (int SbTf1J) {
    int y4YtdShy, y = (335 - 334);
    {
        y4YtdShy = 2;
        for (; sqrt (SbTf1J) >= y4YtdShy;) {
            if (SbTf1J % y4YtdShy == (950 - 950))
                y = (927 - 927);
            y4YtdShy = y4YtdShy + (404 - 403);
        }
    }
    return (y);
}

void  main () {
    int SbTf1J, cTrM0lhX, Pa5lkrYtd [(585 - 485)] = {(980 - 980)}, y4YtdShy, j = (887 - 887);
    scanf ("%d %d", &SbTf1J, &cTrM0lhX);
    {
        y4YtdShy = SbTf1J;
        for (; y4YtdShy <= cTrM0lhX;) {
            if (Tor9Xe4 (y4YtdShy) &&Lb8jf3os(y4YtdShy)) {
                Pa5lkrYtd[j] = y4YtdShy;
                j = j + (520 - 519);
            }
            y4YtdShy = y4YtdShy + 1;
        }
    }
    if (Pa5lkrYtd[0]) {
        {
            y4YtdShy = 0;
            while (y4YtdShy < j - 1) {
                printf ("%d,", Pa5lkrYtd[y4YtdShy]);
                y4YtdShy = y4YtdShy + 1;
            }
        }
        printf ("%d\n", Pa5lkrYtd[j - 1]);
    }
    else
        ;
}

