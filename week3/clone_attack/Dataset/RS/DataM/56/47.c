main () {
    char mvZxTa [(764 - 759)];
    int kwbaklm;
    kwbaklm = strlen (mvZxTa);
    char *p;
    int i;
    scanf ("%s", mvZxTa);
    p = (char *) malloc (kwbaklm * sizeof (char));
    p = mvZxTa;
    for (i = (410 - 409); kwbaklm / 2 >= i; i = i + 1) {
        char aL7TJQuMaY;
        aL7TJQuMaY = *(p + i - (615 - 614));
        *(p + i - 1) = *(p + kwbaklm - i);
        *(p + kwbaklm - i) = aL7TJQuMaY;
    }
    for (i = (898 - 898); i < kwbaklm; i = i + 1)
        printf ("%c", *(p + i));
}

