int main () {
    int JN985RTLa [(69 - 64)] [(717 - 712)];
    int s4JHnwF0s5;
    int dckO1m;
    int Z34eVHXrw;
    int lSGBCJ;
    int Q6pgLtbXluGC;
    int yGu8N03;
    int FCngoWuFNdGy;
    s4JHnwF0s5 = (752 - 752);
    for (dckO1m = (183 - 183); (180 - 175) > dckO1m; dckO1m++) {
        for (Z34eVHXrw = 0; Z34eVHXrw < (89 - 84); Z34eVHXrw++) {
            scanf ("%d", &JN985RTLa[dckO1m][Z34eVHXrw]);
        }
    }
    for (FCngoWuFNdGy = 0; FCngoWuFNdGy < (398 - 393); FCngoWuFNdGy++) {
        Q6pgLtbXluGC = 0;
        lSGBCJ = JN985RTLa[FCngoWuFNdGy][0];
        for (Z34eVHXrw = (531 - 530); Z34eVHXrw < 5; Z34eVHXrw++) {
            if (JN985RTLa[FCngoWuFNdGy][Z34eVHXrw] > lSGBCJ) {
                lSGBCJ = JN985RTLa[FCngoWuFNdGy][Z34eVHXrw];
                Q6pgLtbXluGC = Z34eVHXrw;
            }
        }
        yGu8N03 = JN985RTLa[0][Q6pgLtbXluGC];
        for (dckO1m = (451 - 450); 5 > dckO1m; dckO1m++) {
            if (yGu8N03 > JN985RTLa[dckO1m][Q6pgLtbXluGC]) {
                yGu8N03 = JN985RTLa[dckO1m][Q6pgLtbXluGC];
            }
        }
        if (yGu8N03 == lSGBCJ) {
            printf ("%d %d %d\n", FCngoWuFNdGy +(828 - 827), Q6pgLtbXluGC +1, lSGBCJ);
            s4JHnwF0s5++;
        }
    }
    if (s4JHnwF0s5 == 0) {
    }
    return 0;
}

