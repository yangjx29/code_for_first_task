void  main () {
    char str [(317 - 302)];
    int r7riutNEs;
    char substr [(61 - 56)];
    int sIm7xt0z;
    int sAJvsyf;
    int wYuF3vDAHmP;
    int F3fhG9MB;
    for (; scanf ("%s", str) != EOF;) {
        scanf ("%s", substr);
        sAJvsyf = strlen (str);
        sIm7xt0z = (770 - 770);
        {
            r7riutNEs = (127 - 126);
            while (r7riutNEs < sAJvsyf) {
                if ((wYuF3vDAHmP = str[sIm7xt0z]) < (F3fhG9MB = str[r7riutNEs]))
                    sIm7xt0z = r7riutNEs;
                r7riutNEs++;
            }
        }
        {
            r7riutNEs = (415 - 415);
            for (; r7riutNEs <= sIm7xt0z;) {
                printf ("%c", str[r7riutNEs]);
                r7riutNEs++;
            }
        }
        printf ("%s", substr);
        {
            r7riutNEs = sIm7xt0z + (893 - 892);
            for (; r7riutNEs < sAJvsyf;) {
                printf ("%c", str[r7riutNEs]);
                r7riutNEs++;
            }
        }
    }
}

