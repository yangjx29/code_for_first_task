int gczSlrsCX0v (char dIfX4opb [], char Xs3EPofWp []) {
    int wmIUjArzEu6, bf1Gj9, VKmEzvLoC;
    wmIUjArzEu6 = strlen (dIfX4opb);
    for (bf1Gj9 = (589 - 589);; bf1Gj9 = bf1Gj9 + 1) {
        for (VKmEzvLoC = (611 - 611); wmIUjArzEu6 > VKmEzvLoC &&dIfX4opb[VKmEzvLoC] == Xs3EPofWp[bf1Gj9 + VKmEzvLoC]; VKmEzvLoC++)
            ;
        if (VKmEzvLoC == wmIUjArzEu6)
            return bf1Gj9;
    }
}

main () {
    char c1 [(348 - 297)] = {'\0'};
    char Om1Tzl [(97 - 46)] = {'\0'};
    scanf ("%s%s", c1, Om1Tzl);
    printf ("%d\n", gczSlrsCX0v (c1, Om1Tzl));
    return 0;
}

