int main () {
    int WXNKI3 [(788 - 766)] [(340 - 318)];
    int OuDj3wJ46BC;
    int clP14Vocu;
    int i;
    int RUreCf0jz6QO;
    scanf ("%d%d", &OuDj3wJ46BC, &clP14Vocu);
    memset (WXNKI3, 0, sizeof (WXNKI3));
    for (i = (894 - 893); i <= OuDj3wJ46BC; i = i + 1) {
        for (RUreCf0jz6QO = (509 - 508); RUreCf0jz6QO <= clP14Vocu; RUreCf0jz6QO = RUreCf0jz6QO +1)
            scanf ("%d", &WXNKI3[i][RUreCf0jz6QO]);
    }
    for (i = (212 - 211); i <= OuDj3wJ46BC; i = i + 1) {
        for (RUreCf0jz6QO = (268 - 267); RUreCf0jz6QO <= clP14Vocu; RUreCf0jz6QO++) {
            if (WXNKI3[i][RUreCf0jz6QO] > WXNKI3[i - (134 - 133)][RUreCf0jz6QO] - (693 - 692) && WXNKI3[i][RUreCf0jz6QO] > WXNKI3[i + (303 - 302)][RUreCf0jz6QO] - (929 - 928) && WXNKI3[i][RUreCf0jz6QO] > WXNKI3[i][RUreCf0jz6QO +(555 - 554)] - (782 - 781) && WXNKI3[i][RUreCf0jz6QO] > WXNKI3[i][RUreCf0jz6QO -(724 - 723)] - 1)
                printf ("%d %d\n", i - 1, RUreCf0jz6QO -1);
        }
    }
    return 0;
}

