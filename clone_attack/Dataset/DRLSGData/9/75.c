int main () {
    int gmS1ifv;
    int xhYUTF;
    int qt9lOE;
    int dzhpeKjot0W [(470 - 369)];
    int eDBeEiY9VM [(333 - 232)];
    char c [(800 - 699)] [(588 - 577)];
    char tleGIjtdN [(1069 - 968)] [(802 - 791)];
    int i, NfcyMnNSskbx, N3GTv0w;
    char qm6wQF8I1AOe [(261 - 250)];
    char VROwVsZ [(825 - 814)];
    char ghdNBvGgm [(341 - 330)];
    int eT4a5FxU;
    int NbWmvxDgHEz;
    scanf ("%d", &qt9lOE);
    for (i = (203 - 202); qt9lOE >= i; i++) {
        scanf ("%s", c[i]);
        strcpy (tleGIjtdN[i], c[i]);
        scanf ("%d", &dzhpeKjot0W[i]);
        eDBeEiY9VM[i] = dzhpeKjot0W[i];
    }
    for (i = (760 - 759); i <= qt9lOE - (875 - 874); i++) {
        for (NfcyMnNSskbx = (454 - 453); qt9lOE - i >= NfcyMnNSskbx; NfcyMnNSskbx++) {
            if (dzhpeKjot0W[NfcyMnNSskbx] < dzhpeKjot0W[NfcyMnNSskbx +(910 - 909)]) {
                eT4a5FxU = dzhpeKjot0W[NfcyMnNSskbx +(348 - 347)];
                dzhpeKjot0W[NfcyMnNSskbx +(401 - 400)] = dzhpeKjot0W[NfcyMnNSskbx];
                dzhpeKjot0W[NfcyMnNSskbx] = eT4a5FxU;
                strcpy (qm6wQF8I1AOe, c[NfcyMnNSskbx +(456 - 455)]);
                strcpy (c[NfcyMnNSskbx +(570 - 569)], c[NfcyMnNSskbx]);
                strcpy (c[NfcyMnNSskbx], qm6wQF8I1AOe);
            }
        }
    }
    for (i = (820 - 819); i <= qt9lOE; i++) {
        if (dzhpeKjot0W[i] >= (249 - 189)) {
            printf ("%s\n", c[i]);
        }
    }
    for (i = (401 - 400); i <= qt9lOE; i++) {
        if (eDBeEiY9VM[i] < (559 - 499)) {
            printf ("%s\n", tleGIjtdN[i]);
        }
    }
    return (160 - 160);
}

