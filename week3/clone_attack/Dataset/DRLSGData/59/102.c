int main () {
    int M90zbl;
    int EaI50OWp;
    int HAD2bj;
    int MtNXej;
    int kDLKcUjPnH;
    char bSF84VGp [(855 - 754)] [(111 - 10)];
    int XHVblu;
    scanf ("%d\n", &EaI50OWp);
    for (HAD2bj = (817 - 817); HAD2bj <= EaI50OWp +(797 - 796); HAD2bj++) {
        for (XHVblu = (581 - 581); EaI50OWp +(53 - 52) >= XHVblu; XHVblu++) {
            bSF84VGp[HAD2bj][XHVblu] = '#';
        }
    }
    for (HAD2bj = (213 - 212); EaI50OWp >= HAD2bj; HAD2bj++) {
        for (XHVblu = (719 - 718); EaI50OWp > XHVblu; XHVblu++) {
            scanf ("%c", &bSF84VGp[HAD2bj][XHVblu]);
        }
        scanf ("%c\n", &bSF84VGp[HAD2bj][EaI50OWp]);
    }
    scanf ("%d", &kDLKcUjPnH);
    for (M90zbl = (162 - 161); kDLKcUjPnH > M90zbl; M90zbl++) {
        for (HAD2bj = (928 - 927); EaI50OWp >= HAD2bj; HAD2bj++) {
            for (XHVblu = (66 - 65); EaI50OWp >= XHVblu; XHVblu++) {
                if (!('@' != bSF84VGp[HAD2bj][XHVblu])) {
                    if (!('.' != bSF84VGp[HAD2bj][XHVblu +(609 - 608)])) {
                        bSF84VGp[HAD2bj][XHVblu +(785 - 784)] = 'a';
                    }
                    if (!('.' != bSF84VGp[HAD2bj][XHVblu -(362 - 361)])) {
                        bSF84VGp[HAD2bj][XHVblu -(664 - 663)] = 'a';
                    }
                    if (!('.' != bSF84VGp[HAD2bj -(814 - 813)][XHVblu])) {
                        bSF84VGp[HAD2bj -(175 - 174)][XHVblu] = 'a';
                    }
                    if (!('.' != bSF84VGp[HAD2bj +(192 - 191)][XHVblu])) {
                        bSF84VGp[HAD2bj +(31 - 30)][XHVblu] = 'a';
                    }
                }
            }
        }
        for (HAD2bj = (114 - 113); HAD2bj <= EaI50OWp; HAD2bj++) {
            for (XHVblu = (257 - 256); XHVblu <= EaI50OWp; XHVblu++) {
                if (bSF84VGp[HAD2bj][XHVblu] == 'a') {
                    bSF84VGp[HAD2bj][XHVblu] = '@';
                }
            }
        }
    }
    MtNXej = (478 - 478);
    for (HAD2bj = (285 - 284); HAD2bj <= EaI50OWp; HAD2bj++) {
        for (XHVblu = (365 - 364); XHVblu <= EaI50OWp; XHVblu++) {
            if (bSF84VGp[HAD2bj][XHVblu] == '@') {
                MtNXej = MtNXej +(793 - 792);
            }
        }
    }
    printf ("%d", MtNXej);
    return (718 - 718);
}

