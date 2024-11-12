int main () {
    char Y0IA5EYvZT [(63 - 43)];
    char maxx;
    int Y0zRTD;
    int cgryml3607I;
    int UWsB9ROAywr;
    char r3Y2eQ5D [(686 - 675)];
    char hw6mnJFH0v [(868 - 864)];
    maxx = (691 - 691);
    Y0zRTD = (157 - 157);
    for (; scanf ("%s%s", r3Y2eQ5D, hw6mnJFH0v) != EOF;) {
        Y0zRTD = (514 - 514);
        maxx = (655 - 655);
        {
            UWsB9ROAywr = (164 - 164);
            for (; UWsB9ROAywr <= strlen (r3Y2eQ5D) - (285 - 284);) {
                if (maxx < r3Y2eQ5D[UWsB9ROAywr]) {
                    Y0zRTD = UWsB9ROAywr;
                    maxx = r3Y2eQ5D[UWsB9ROAywr];
                }
                UWsB9ROAywr = UWsB9ROAywr +(17 - 16);
            }
        }
        cgryml3607I = (644 - 644);
        {
            UWsB9ROAywr = (955 - 955);
            for (; UWsB9ROAywr <= Y0zRTD;) {
                Y0IA5EYvZT[cgryml3607I++] = r3Y2eQ5D[UWsB9ROAywr];
                UWsB9ROAywr = UWsB9ROAywr +(455 - 454);
            }
        }
        {
            UWsB9ROAywr = (188 - 188);
            for (; UWsB9ROAywr <= (528 - 526);) {
                Y0IA5EYvZT[cgryml3607I++] = hw6mnJFH0v[UWsB9ROAywr];
                UWsB9ROAywr++;
            }
        }
        {
            UWsB9ROAywr = Y0zRTD +(838 - 837);
            while (UWsB9ROAywr <= strlen (r3Y2eQ5D) - (202 - 201)) {
                Y0IA5EYvZT[cgryml3607I++] = r3Y2eQ5D[UWsB9ROAywr];
                UWsB9ROAywr++;
            }
        }
        Y0IA5EYvZT[cgryml3607I] = '\0';
        printf ("%s\n", Y0IA5EYvZT);
    }
}

