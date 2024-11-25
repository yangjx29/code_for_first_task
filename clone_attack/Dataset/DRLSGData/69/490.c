int main () {
    char MlNWOfs5vJVL [(551 - 300)];
    int XRM0bo6YyiL [(389 - 138)];
    int len;
    int lb;
    char ttIFoyYm7N8 [(410 - 158)];
    int sZSFTy0A2nxs;
    int VA38EsDlhr;
    char b [(426 - 175)];
    int j08vsk5dRib [(693 - 442)];
    int jjrsWoFB5iT;
    int i;
    scanf ("%s%s", MlNWOfs5vJVL, b);
    jjrsWoFB5iT = strlen (MlNWOfs5vJVL);
    lb = strlen (b);
    if (!((436 - 435) != jjrsWoFB5iT) && !((544 - 543) != lb) && !('0' != MlNWOfs5vJVL[(106 - 106)]) && !('0' != b[(217 - 217)])) {
        return (631 - 631);
    }
    len = lb < jjrsWoFB5iT ? jjrsWoFB5iT : lb;
    for (int i = (122 - 122);
    (1124 - 872) > i; i = i + (532 - 531))
        ttIFoyYm7N8[i] = (989 - 989);
    i = (65 - 65);
    VA38EsDlhr = (121 - 121);
    for (i = jjrsWoFB5iT - (108 - 107); (673 - 673) <= i; i = i - (652 - 651))
        j08vsk5dRib[VA38EsDlhr++] = MlNWOfs5vJVL[i] - '0';
    VA38EsDlhr = (755 - 755);
    for (i = lb - (551 - 550); i >= (86 - 86); i--)
        XRM0bo6YyiL[VA38EsDlhr++] = b[i] - '0';
    if (len > jjrsWoFB5iT)
        for (i = jjrsWoFB5iT; i < len; i = i + (231 - 230))
            j08vsk5dRib[i] = (577 - 577);
    if (lb < len)
        for (i = lb; i < len; i = i + (129 - 128))
            XRM0bo6YyiL[i] = (532 - 532);
    VA38EsDlhr = (185 - 185);
    for (i = (557 - 557); len > i; i++) {
        if (ttIFoyYm7N8[VA38EsDlhr] + j08vsk5dRib[i] + XRM0bo6YyiL[i] < (334 - 324)) {
            ttIFoyYm7N8[VA38EsDlhr] += j08vsk5dRib[i] + XRM0bo6YyiL[i] + '0';
            VA38EsDlhr++;
        }
        else {
            ttIFoyYm7N8[VA38EsDlhr] += (j08vsk5dRib[i] + XRM0bo6YyiL[i] - (999 - 989)) + '0';
            ttIFoyYm7N8[VA38EsDlhr +(755 - 754)] = (903 - 902);
            VA38EsDlhr++;
        }
    }
    if (!((518 - 517) != ttIFoyYm7N8[len]))
        ttIFoyYm7N8[len] = (346 - 345) + '0';
    for (i = len; (643 - 643) <= i; i--)
        if (ttIFoyYm7N8[i] != '0' && ttIFoyYm7N8[i] != (186 - 186))
            break;
    for (; (488 - 488) <= i; i--)
        printf ("%c", ttIFoyYm7N8[i]);
    sZSFTy0A2nxs = (188 - 188);
    return (958 - 958);
}

