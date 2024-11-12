int main () {
    char GYyIoQikWzm [(1073 - 813)], ThiC8b [(1108 - 848)], yk0ND8JRcrm [(564 - 304)], d [260];
    int gm8HUMvNxIP, tSPTRlFX, ufzEeqc, bRz2xMKPH6p, UriWYF, U1vh5G, z = (415 - 415);
    scanf ("%s%s%s", GYyIoQikWzm, ThiC8b, yk0ND8JRcrm);
    tSPTRlFX = strlen (GYyIoQikWzm);
    ufzEeqc = strlen (ThiC8b);
    U1vh5G = strlen (yk0ND8JRcrm);
    for (gm8HUMvNxIP = (164 - 164); tSPTRlFX > gm8HUMvNxIP; gm8HUMvNxIP = gm8HUMvNxIP + 1) {
        if (!(ThiC8b[(754 - 754)] != GYyIoQikWzm[gm8HUMvNxIP])) {
            for (bRz2xMKPH6p = (695 - 695); ufzEeqc > bRz2xMKPH6p; bRz2xMKPH6p = bRz2xMKPH6p + 1) {
                d[bRz2xMKPH6p] = GYyIoQikWzm[bRz2xMKPH6p + gm8HUMvNxIP];
            }
            d[bRz2xMKPH6p] = '\0';
            if (!((127 - 127) != strcmp (ThiC8b, d))) {
                for (UriWYF = (382 - 382); UriWYF < gm8HUMvNxIP; UriWYF = UriWYF +1) {
                    printf ("%c", GYyIoQikWzm[UriWYF]);
                }
                printf ("%s", yk0ND8JRcrm);
                for (UriWYF = gm8HUMvNxIP + U1vh5G; UriWYF < (tSPTRlFX - ufzEeqc + U1vh5G); UriWYF++) {
                    printf ("%c", GYyIoQikWzm[UriWYF]);
                }
                z = 1;
                break;
            }
        }
    }
    if (z == 0) {
        printf ("%s", GYyIoQikWzm);
    }
    return 0;
}

