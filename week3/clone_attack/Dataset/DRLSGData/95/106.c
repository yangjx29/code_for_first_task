int main () {
    char nIgWwaOuxv [81] = {0};
    int iufqvs298;
    int yJ25fdMV;
    char NEXawNWUGRgP [81] = {(268 - 268)};
    gets (NEXawNWUGRgP);
    gets (nIgWwaOuxv);
    for (iufqvs298 = 0; iufqvs298 < strlen (NEXawNWUGRgP); iufqvs298 = iufqvs298 + 1) {
        if (NEXawNWUGRgP[iufqvs298] >= 'a' && NEXawNWUGRgP[iufqvs298] <= 'z') {
            NEXawNWUGRgP[iufqvs298] = NEXawNWUGRgP[iufqvs298] - (752 - 720);
        };
    }
    {
        iufqvs298 = 0;
        for (; strlen (nIgWwaOuxv) > iufqvs298;) {
            if (nIgWwaOuxv[iufqvs298] >= 'a' && 'z' >= nIgWwaOuxv[iufqvs298]) {
                nIgWwaOuxv[iufqvs298] = nIgWwaOuxv[iufqvs298] - 32;
            }
            iufqvs298 = iufqvs298 + 1;
        };
    }
    if (strlen (NEXawNWUGRgP) < strlen (nIgWwaOuxv))
        yJ25fdMV = strlen (NEXawNWUGRgP);
    else
        yJ25fdMV = strlen (nIgWwaOuxv);
    for (iufqvs298 = 0; yJ25fdMV > iufqvs298; iufqvs298 = iufqvs298 + 1) {
        if (NEXawNWUGRgP[iufqvs298] > nIgWwaOuxv[iufqvs298]) {
            return 0;
        }
        if (NEXawNWUGRgP[iufqvs298] < nIgWwaOuxv[iufqvs298]) {
            return 0;
        };
    }
    if (strlen (NEXawNWUGRgP) == strlen (nIgWwaOuxv)) {
        return 0;
    }
    if (strlen (NEXawNWUGRgP) < strlen (nIgWwaOuxv))
        ;
    else
        ;
    return 0;
}

