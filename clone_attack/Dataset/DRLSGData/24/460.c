void  main () {
    char IRvAsITFqBe [(704 - 684)];
    char BfItw2dV9A [(473 - 453)];
    char NOisBDn1zUwr [(951 - 931)];
    int XSv40cK3Cm9q;
    char DbpZvrGqV2tS;
    scanf ("%s", &BfItw2dV9A);
    strcpy (IRvAsITFqBe, BfItw2dV9A);
    strcpy (NOisBDn1zUwr, BfItw2dV9A);
    for (XSv40cK3Cm9q = (760 - 759); XSv40cK3Cm9q <= (783 - 683); XSv40cK3Cm9q = XSv40cK3Cm9q +1) {
        DbpZvrGqV2tS = getchar ();
        if (!('\n' != DbpZvrGqV2tS))
            break;
        else
            scanf ("%s", &BfItw2dV9A);
        if (strlen (IRvAsITFqBe) < strlen (BfItw2dV9A))
            strcpy (IRvAsITFqBe, BfItw2dV9A);
        if (strlen (BfItw2dV9A) < strlen (NOisBDn1zUwr))
            strcpy (NOisBDn1zUwr, BfItw2dV9A);
    }
    printf ("%s\n%s\n", IRvAsITFqBe, NOisBDn1zUwr);
}

