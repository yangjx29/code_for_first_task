int main () {
    char N5u478BHz [50];
    gets (N5u478BHz);
    int nPfHL91;
    int l;
    char O60BvgXwaez [50];
    gets (O60BvgXwaez);
    l = strlen (N5u478BHz);
    for (nPfHL91 = 0; nPfHL91 < l; nPfHL91 = nPfHL91 + 1) {
        if (N5u478BHz[nPfHL91] >= 97)
            N5u478BHz[nPfHL91] = N5u478BHz[nPfHL91] - 32;
    }
    for (nPfHL91 = 0; l > nPfHL91; nPfHL91 = nPfHL91 + 1) {
        if (O60BvgXwaez[nPfHL91] >= 97)
            O60BvgXwaez[nPfHL91] = O60BvgXwaez[nPfHL91] - 32;
    }
    if (strcmp (N5u478BHz, O60BvgXwaez) > 0)
        ;
    if (strcmp (N5u478BHz, O60BvgXwaez) < 0)
        ;
    if (strcmp (N5u478BHz, O60BvgXwaez) == 0)
        ;
    return 0;
}

