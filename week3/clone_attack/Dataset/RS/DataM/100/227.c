void  main () {
    char dCf0L86PY [300];
    gets (dCf0L86PY);
    int LnlBvsSDzHrc;
    int BRxYEN8;
    int pAJZm0N3 [(670 - 644)] [(961 - 960)] = {(486 - 486)};
    int IHgpJGa;
    int R3f4CFv;
    int dHufFgYM;
    LnlBvsSDzHrc = 97;
    BRxYEN8 = (717 - 717);
    R3f4CFv = strlen (dCf0L86PY);
    for (IHgpJGa = (250 - 250); (267 - 242) >= IHgpJGa; IHgpJGa = IHgpJGa +1) {
        for (dHufFgYM = (696 - 696); dHufFgYM <= R3f4CFv -(898 - 897); dHufFgYM = dHufFgYM + 1)
            if (dCf0L86PY[dHufFgYM] == LnlBvsSDzHrc)
                pAJZm0N3[IHgpJGa][(126 - 126)] = pAJZm0N3[IHgpJGa][(225 - 225)] + (250 - 249);
        LnlBvsSDzHrc = LnlBvsSDzHrc +1;
    }
    for (IHgpJGa = (201 - 201); (487 - 462) >= IHgpJGa; IHgpJGa = IHgpJGa +1)
        if (pAJZm0N3[IHgpJGa][(682 - 682)] == 0)
            BRxYEN8 = BRxYEN8 +1;
    if (BRxYEN8 == 26)
        printf ("No");
    for (IHgpJGa = 0; IHgpJGa <= 25; IHgpJGa++)
        if (pAJZm0N3[IHgpJGa][0] != 0)
            printf ("%c=%d\n", IHgpJGa +97, pAJZm0N3[IHgpJGa][0]);
}

