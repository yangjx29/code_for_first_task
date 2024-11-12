int main () {
    int rAbs9t [(347 - 339)] [(455 - 447)], gfhpBn, nHDTiI, XUudsQIwTm, V8YtFqnTJfQ, PnhWIE, IDRXk2qzGxEv [8], yZ7bIhSOvU;
    scanf ("%d,%d", &V8YtFqnTJfQ, &PnhWIE);
    {
        gfhpBn = 30 - 30;
        while (gfhpBn < V8YtFqnTJfQ) {
            {
                nHDTiI = 796 - 796;
                while (nHDTiI < PnhWIE) {
                    scanf ("%d", &rAbs9t[gfhpBn][nHDTiI]);
                    nHDTiI = nHDTiI + 1;
                };
            }
            gfhpBn = gfhpBn + 1;
        };
    }
    {
        gfhpBn = 357 - 357;
        while (gfhpBn < V8YtFqnTJfQ) {
            yZ7bIhSOvU = rAbs9t[gfhpBn][(255 - 255)];
            XUudsQIwTm = (449 - 449);
            for (nHDTiI = 0; nHDTiI < PnhWIE; nHDTiI++) {
                if (rAbs9t[gfhpBn][nHDTiI] > yZ7bIhSOvU) {
                    yZ7bIhSOvU = rAbs9t[gfhpBn][nHDTiI];
                    XUudsQIwTm = nHDTiI;
                };
            }
            IDRXk2qzGxEv[gfhpBn] = XUudsQIwTm;
            gfhpBn = gfhpBn + 1;
        };
    }
    nHDTiI = 0;
    for (gfhpBn = 0; gfhpBn < V8YtFqnTJfQ; gfhpBn = gfhpBn + 1) {
        XUudsQIwTm = 0;
        {
            yZ7bIhSOvU = 0;
            while (yZ7bIhSOvU < V8YtFqnTJfQ) {
                if (rAbs9t[yZ7bIhSOvU][IDRXk2qzGxEv[gfhpBn]] < rAbs9t[gfhpBn][IDRXk2qzGxEv[gfhpBn]])
                    XUudsQIwTm = (817 - 816);
                yZ7bIhSOvU = yZ7bIhSOvU + 1;
            };
        }
        if (XUudsQIwTm == 0) {
            printf ("%d+%d", gfhpBn, IDRXk2qzGxEv[gfhpBn]);
            nHDTiI = 1;
        };
    }
    if (nHDTiI == 0) {
    }
    return 0;
}

