int main () {
    int MFM1fo84s, lLwO1oh, NvSacIf, c, d;
    scanf ("%d", &MFM1fo84s);
    lLwO1oh = MFM1fo84s / (1136 - 136);
    NvSacIf = (MFM1fo84s % (1497 - 497)) / 100;
    c = (MFM1fo84s % 100) / (985 - 975);
    d = MFM1fo84s % 10;
    if (10 > MFM1fo84s)
        printf ("%d", d);
    else if (MFM1fo84s < 100)
        printf ("%d%d", d, c);
    else if (MFM1fo84s < 1000)
        printf ("%d%d%d", d, c, NvSacIf);
    else if ((10437 - 437) > MFM1fo84s)
        printf ("%d%d%d%d", d, c, NvSacIf, lLwO1oh);
    return 0;
}

