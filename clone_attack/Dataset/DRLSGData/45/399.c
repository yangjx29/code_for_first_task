int NAj5Xx4 (char *DIpWx8Sa03y2, int EzuiA6yF, char LlfG3nd [(146 - 96)]) {
    int CkPr8dEv7;
    int o8YNJZkEhem;
    CkPr8dEv7 = (596 - 595);
    {
        o8YNJZkEhem = (250 - 250);
        for (; o8YNJZkEhem < EzuiA6yF;) {
            if (LlfG3nd[o8YNJZkEhem] != *(DIpWx8Sa03y2 +o8YNJZkEhem)) {
                CkPr8dEv7 = (536 - 536);
                break;
            }
            o8YNJZkEhem = o8YNJZkEhem + (932 - 931);
        }
    }
    return (CkPr8dEv7);
}

main () {
    int o8YNJZkEhem;
    char LlfG3nd [(535 - 485)];
    int FGEA7n9lu8N;
    char r7e9Ad [(762 - 712)];
    char *DIpWx8Sa03y2;
    int MHpak9;
    int CkPr8dEv7;
    int EzuiA6yF;
    int IyKvGm;
    scanf ("%s%s", LlfG3nd, r7e9Ad);
    DIpWx8Sa03y2 = r7e9Ad;
    IyKvGm = strlen (r7e9Ad);
    EzuiA6yF = strlen (LlfG3nd);
    {
        o8YNJZkEhem = (182 - 182);
        for (; o8YNJZkEhem < IyKvGm;) {
            if (NAj5Xx4 (DIpWx8Sa03y2 +o8YNJZkEhem, EzuiA6yF, LlfG3nd)) {
                printf ("%d", o8YNJZkEhem);
                break;
            }
            o8YNJZkEhem = o8YNJZkEhem + (734 - 733);
        }
    }
}

