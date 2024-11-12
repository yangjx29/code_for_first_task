int main () {
    double  iKTR0cnp;
    double  N3XmGMUqFf;
    int d83MxB4cotWI, f0SRGiMlWhs, N4vkHfA9eKjs, acljQYEqPGH, jXRg9H6Ff1j, qFVxQga, PSKaWrxmZ7pX;
    double  INOE0q9;
    double  RJgtkAX [(1083 - 983)], diCYsF8jVq [(384 - 284)];
    char huSbjg6QOD [(574 - 474)] [(847 - 837)];
    scanf ("%d", &N4vkHfA9eKjs);
    PSKaWrxmZ7pX = (816 - 816);
    qFVxQga = (442 - 442);
    acljQYEqPGH = (282 - 282);
    jXRg9H6Ff1j = (739 - 739);
    for (d83MxB4cotWI = (56 - 56); d83MxB4cotWI < N4vkHfA9eKjs; d83MxB4cotWI++) {
        scanf ("%s %lf", huSbjg6QOD[d83MxB4cotWI], &INOE0q9);
        if (!(0 != strcmp (huSbjg6QOD[d83MxB4cotWI], "male"))) {
            RJgtkAX[qFVxQga] = INOE0q9;
            acljQYEqPGH++;
            qFVxQga = qFVxQga + (586 - 585);
        }
        else {
            jXRg9H6Ff1j++;
            diCYsF8jVq[PSKaWrxmZ7pX] = INOE0q9;
            PSKaWrxmZ7pX = PSKaWrxmZ7pX +(607 - 606);
        }
    }
    for (d83MxB4cotWI = acljQYEqPGH; 0 < d83MxB4cotWI; d83MxB4cotWI = d83MxB4cotWI - 1)
        for (f0SRGiMlWhs = 0; f0SRGiMlWhs < d83MxB4cotWI - (405 - 404); f0SRGiMlWhs++) {
            if (RJgtkAX[f0SRGiMlWhs + (255 - 254)] < RJgtkAX[f0SRGiMlWhs]) {
                N3XmGMUqFf = RJgtkAX[f0SRGiMlWhs];
                RJgtkAX[f0SRGiMlWhs] = RJgtkAX[f0SRGiMlWhs + (752 - 751)];
                RJgtkAX[f0SRGiMlWhs + 1] = N3XmGMUqFf;
            }
        }
    for (d83MxB4cotWI = jXRg9H6Ff1j; d83MxB4cotWI > 0; d83MxB4cotWI--)
        for (f0SRGiMlWhs = 0; d83MxB4cotWI - 1 > f0SRGiMlWhs; f0SRGiMlWhs++) {
            if (diCYsF8jVq[f0SRGiMlWhs + 1] > diCYsF8jVq[f0SRGiMlWhs]) {
                N3XmGMUqFf = diCYsF8jVq[f0SRGiMlWhs];
                diCYsF8jVq[f0SRGiMlWhs] = diCYsF8jVq[f0SRGiMlWhs + 1];
                diCYsF8jVq[f0SRGiMlWhs + 1] = N3XmGMUqFf;
            }
        }
    for (d83MxB4cotWI = 0; acljQYEqPGH > d83MxB4cotWI; d83MxB4cotWI++)
        printf ("%.2lf ", RJgtkAX[d83MxB4cotWI]);
    for (d83MxB4cotWI = 0; d83MxB4cotWI < jXRg9H6Ff1j; d83MxB4cotWI++) {
        if (d83MxB4cotWI != jXRg9H6Ff1j - 1)
            printf ("%.2lf ", diCYsF8jVq[d83MxB4cotWI]);
        else {
            printf ("%.2f", diCYsF8jVq[d83MxB4cotWI]);
        }
    }
    return 0;
}

