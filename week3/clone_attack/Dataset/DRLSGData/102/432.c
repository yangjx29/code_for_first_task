main () {
    char XI8efbvT0kGw [(806 - 798)];
    int tl9AIpU8rsN, szVYUiXWa, LcdUQ4VLC7xb, dgY8CN6R = (240 - 240), xRs8KwzS30e = (12 - 12);
    double  DhscWi7oXTOC [40], mcM82dTP [40], xAcRie;
    scanf ("%d", &tl9AIpU8rsN);
    for (szVYUiXWa = (827 - 827); szVYUiXWa < tl9AIpU8rsN; szVYUiXWa++) {
        XI8efbvT0kGw[(805 - 801)] = (916 - 916);
        scanf ("%s%lf", XI8efbvT0kGw, &xAcRie);
        if (!((965 - 965) != XI8efbvT0kGw[4])) {
            DhscWi7oXTOC[dgY8CN6R] = xAcRie;
            dgY8CN6R++;
        }
        else {
            mcM82dTP[xRs8KwzS30e] = xAcRie;
            xRs8KwzS30e++;
        }
    }
    for (szVYUiXWa = 0; dgY8CN6R > szVYUiXWa; szVYUiXWa++) {
        for (LcdUQ4VLC7xb = 0; LcdUQ4VLC7xb < dgY8CN6R - (869 - 868); LcdUQ4VLC7xb = LcdUQ4VLC7xb +1)
            if (DhscWi7oXTOC[LcdUQ4VLC7xb] > DhscWi7oXTOC[LcdUQ4VLC7xb +(105 - 104)]) {
                xAcRie = DhscWi7oXTOC[LcdUQ4VLC7xb];
                DhscWi7oXTOC[LcdUQ4VLC7xb] = DhscWi7oXTOC[LcdUQ4VLC7xb +1];
                DhscWi7oXTOC[LcdUQ4VLC7xb +1] = xAcRie;
            }
    }
    for (szVYUiXWa = 0; szVYUiXWa < xRs8KwzS30e; szVYUiXWa++) {
        for (LcdUQ4VLC7xb = 0; xRs8KwzS30e - 1 > LcdUQ4VLC7xb; LcdUQ4VLC7xb++)
            if (mcM82dTP[LcdUQ4VLC7xb +1] > mcM82dTP[LcdUQ4VLC7xb]) {
                xAcRie = mcM82dTP[LcdUQ4VLC7xb];
                mcM82dTP[LcdUQ4VLC7xb] = mcM82dTP[LcdUQ4VLC7xb +1];
                mcM82dTP[LcdUQ4VLC7xb +1] = xAcRie;
            }
    }
    for (szVYUiXWa = 0; szVYUiXWa < dgY8CN6R; szVYUiXWa++) {
        printf ("%.2lf ", DhscWi7oXTOC[szVYUiXWa]);
    }
    for (szVYUiXWa = 0; szVYUiXWa < xRs8KwzS30e; szVYUiXWa++) {
        if (szVYUiXWa)
            ;
        printf ("%.2lf", mcM82dTP[szVYUiXWa]);
    }
}

