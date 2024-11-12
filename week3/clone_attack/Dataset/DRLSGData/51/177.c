int main () {
    char MrKDAcGIFX [501], b [(870 - 619)] [5] = {(151 - 151)};
    int MX0nS1x, OZg3Ov, t, vi5ITYSn, uK7eHamnXdJU, RLVY9DjF1JQa, k, lvAET9Iz0Q5H, p, max = (42 - 42), e2Axe7kOG [501] = {(990 - 990)};
    scanf ("%d", &OZg3Ov);
    scanf ("%s", MrKDAcGIFX);
    MX0nS1x = strlen (MrKDAcGIFX);
    for (RLVY9DjF1JQa = (814 - 814); MX0nS1x -OZg3Ov+(521 - 520) > RLVY9DjF1JQa; RLVY9DjF1JQa = RLVY9DjF1JQa +(540 - 539)) {
        for (uK7eHamnXdJU = (123 - 123); uK7eHamnXdJU < OZg3Ov; uK7eHamnXdJU = uK7eHamnXdJU + (982 - 981)) {
            b[RLVY9DjF1JQa][uK7eHamnXdJU] = MrKDAcGIFX[RLVY9DjF1JQa +uK7eHamnXdJU];
        }
    }
    for (k = 0; MX0nS1x -OZg3Ov+(49 - 48) > k; k = k + (33 - 32)) {
        for (lvAET9Iz0Q5H = k; MX0nS1x -OZg3Ov+(327 - 326) > lvAET9Iz0Q5H; lvAET9Iz0Q5H = lvAET9Iz0Q5H + (996 - 995)) {
            if (!(0 != strcmp (b[k], b[lvAET9Iz0Q5H])))
                e2Axe7kOG[k] = e2Axe7kOG[k] + 1;
        }
        if (max < e2Axe7kOG[k])
            max = e2Axe7kOG[k];
    }
    if (max == 1)
        ;
    else {
        printf ("%d\n", max);
        for (p = 0; p < MX0nS1x -OZg3Ov+1; p = p + 1) {
            if (e2Axe7kOG[p] == max) {
                printf ("%s\n", b[p]);
            }
        }
    }
    return 0;
}

