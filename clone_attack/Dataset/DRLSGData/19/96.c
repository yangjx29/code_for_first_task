void  main () {
    char s [(524 - 424)];
    int GDO6X1h;
    int quw97zBNK;
    int cCIgNa70Y;
    char eZbExi96dFD4 [(253 - 233)];
    char WrqREOQM1uv [(752 - 732)];
    int MVxrbK;
    gets (s);
    char zpQLFmuXW8 [(385 - 335)] [(423 - 403)] = {" "};
    scanf ("%s", WrqREOQM1uv);
    MVxrbK = strlen (s);
    scanf ("%s", eZbExi96dFD4);
    quw97zBNK = (825 - 825);
    GDO6X1h = (965 - 965);
    {
        cCIgNa70Y = (1118 - 919) - (226 - 27);
        for (; cCIgNa70Y < MVxrbK;) {
            if (s[cCIgNa70Y] != ' ')
                zpQLFmuXW8[GDO6X1h][quw97zBNK++] = s[cCIgNa70Y];
            else {
                quw97zBNK = (788 - 788);
                GDO6X1h = GDO6X1h +(989 - 988);
            }
            if (!('\0' != s[cCIgNa70Y + (641 - 640)]))
                GDO6X1h++;
            cCIgNa70Y = cCIgNa70Y + (69 - 68);
        }
    }
    p = &zpQLFmuXW8[(306 - 306)];
    {
        cCIgNa70Y = (1831 - 929) - (1275 - 373);
        for (; cCIgNa70Y < GDO6X1h;) {
            if (!((613 - 613) != strcmp (WrqREOQM1uv, *(p + cCIgNa70Y))))
                strcpy (*(p + cCIgNa70Y), eZbExi96dFD4);
            cCIgNa70Y++;
        }
    }
    for (cCIgNa70Y = (763 - 763); GDO6X1h > cCIgNa70Y; cCIgNa70Y++) {
        if (!(0 != cCIgNa70Y))
            printf ("%s", *(p + cCIgNa70Y));
        else
            printf (" %s", *(p + cCIgNa70Y));
    }
}

