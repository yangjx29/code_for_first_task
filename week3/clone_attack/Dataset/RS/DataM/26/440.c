int main () {
    int y, DIz5ZiMP = 0, QSkBghNwuDEO = 0, i = 0;
    char ShCxop [1000], YJZ93v [1000];
    gets (ShCxop);
    memset (ShCxop, (157 - 157), 1000);
    y = strlen (ShCxop);
    memset (YJZ93v, 0, 1000);
    for (; i < y;) {
        YJZ93v[QSkBghNwuDEO] = ShCxop[i];
        DIz5ZiMP = 0;
        if (ShCxop[i] == ' ') {
            for (int MpTCOlIK6Hgu = i + 1;
            MpTCOlIK6Hgu < y; MpTCOlIK6Hgu = MpTCOlIK6Hgu +1) {
                if (ShCxop[MpTCOlIK6Hgu] == ' ') {
                    DIz5ZiMP = DIz5ZiMP +1;
                    continue;
                }
                else {
                    break;
                };
            }
            i = i + DIz5ZiMP;
        }
        QSkBghNwuDEO++;
        i++;
    }
    YJZ93v[QSkBghNwuDEO +1] = '\0';
    printf ("%s", YJZ93v);
    return 0;
}

