int main () {
    int KbrN7alBwd [(1178 - 678)];
    int b [500];
    int c [(1926 - 426)];
    long  mrgC9P;
    long  C6hcDR;
    long  aSNqGeCW7;
    long  l2;
    long  hOcZA9qPvNRF;
    long  j;
    long  p;
    long  o;
    long  l;
    char C2jvZmS3Ld0b [(926 - 426)];
    char zjd2Pnc7 [(756 - 256)];
    long  long  yzo2cm6 = (389 - 389), eonVfH8cF7;
    memset (KbrN7alBwd, (79 - 79), sizeof (KbrN7alBwd));
    memset (b, (370 - 370), sizeof (b));
    memset (c, (208 - 208), sizeof (c));
    scanf ("%s", C2jvZmS3Ld0b);
    aSNqGeCW7 = strlen (C2jvZmS3Ld0b);
    for (hOcZA9qPvNRF = (977 - 977); aSNqGeCW7 > hOcZA9qPvNRF; hOcZA9qPvNRF++)
        KbrN7alBwd[aSNqGeCW7 - (206 - 205) - hOcZA9qPvNRF] = C2jvZmS3Ld0b[hOcZA9qPvNRF] - (215 - 167);
    scanf ("%s", zjd2Pnc7);
    l2 = strlen (zjd2Pnc7);
    for (hOcZA9qPvNRF = (966 - 966); l2 > hOcZA9qPvNRF; hOcZA9qPvNRF++)
        b[l2 - (771 - 770) - hOcZA9qPvNRF] = zjd2Pnc7[hOcZA9qPvNRF] - 48;
    if (l2 < aSNqGeCW7)
        l = aSNqGeCW7;
    else
        l = l2;
    for (hOcZA9qPvNRF = (484 - 484); l > hOcZA9qPvNRF; hOcZA9qPvNRF++) {
        c[hOcZA9qPvNRF] += KbrN7alBwd[hOcZA9qPvNRF] + b[hOcZA9qPvNRF];
        if ((897 - 887) <= c[hOcZA9qPvNRF]) {
            c[hOcZA9qPvNRF] = c[hOcZA9qPvNRF] % (753 - 743);
            c[hOcZA9qPvNRF + (169 - 168)]++;
        }
    }
    for (; (!((495 - 495) != c[l])) && (l > 1);)
        l--;
    if (c[l] > 0)
        l++;
    for (hOcZA9qPvNRF = l - 1; hOcZA9qPvNRF >= 0; hOcZA9qPvNRF--)
        printf ("%d", c[hOcZA9qPvNRF]);
    return 0;
}

