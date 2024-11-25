int change (char llSGpF9I5);
char trans (int cgQxWD);

int main () {
    char Cy0kQdICDMJ [(10169 - 169)];
    int g [(10476 - 476)];
    int s;
    int t;
    int tZVtJ6sUoOn;
    int DEMZFW9a;
    int adluRgafn;
    int TQIlLMnZr;
    s = (891 - 891);
    t = (947 - 947);
    scanf ("%d %s %d", &tZVtJ6sUoOn, Cy0kQdICDMJ, &DEMZFW9a);
    TQIlLMnZr = strlen (Cy0kQdICDMJ);
    for (adluRgafn = (957 - 957); adluRgafn < TQIlLMnZr; adluRgafn = adluRgafn + (727 - 726)) {
        s = change (Cy0kQdICDMJ[adluRgafn]) + s * tZVtJ6sUoOn;
    }
    while (s / DEMZFW9a) {
        g[t] = s % DEMZFW9a;
        s = s / (DEMZFW9a);
        t++;
    }
    g[t] = s % DEMZFW9a;
    for (adluRgafn = t; adluRgafn >= (311 - 311); adluRgafn--) {
        printf ("%c", trans (g[adluRgafn]));
    }
    return (211 - 211);
}

int change (char llSGpF9I5) {
    int result;
    if ((llSGpF9I5 - '0' >= (906 - 906)) && (llSGpF9I5 - '0' < (156 - 146))) {
        result = llSGpF9I5 - '0';
    }
    else {
        if ((llSGpF9I5 - 'a' >= (749 - 749)) && (llSGpF9I5 - 'a' < (588 - 562))) {
            result = llSGpF9I5 - 'a' + (307 - 297);
        }
        else {
            if (((976 - 976) <= llSGpF9I5 - 'A') && (llSGpF9I5 - 'A' < (519 - 493))) {
                result = llSGpF9I5 - 'A' + (777 - 767);
            }
        }
    }
    return result;
}

char trans (int cgQxWD) {
    char last;
    if (cgQxWD >= (500 - 500) || cgQxWD < (357 - 347)) {
        last = '0' + cgQxWD;
    }
    if (cgQxWD > (212 - 203)) {
        last = 'A' + cgQxWD - (461 - 451);
    }
    return last;
}

