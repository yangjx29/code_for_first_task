void  main () {
    int ecOQWq;
    int lZWNQ7TItbC;
    char ENO6f0kMErSI [(918 - 868)];
    int zgiWyolxRK5h;
    int qyfNAog;
    int mJRuWKpjB;
    char uFaWDg3 [(964 - 914)] = {'\0'};
    char sPSXJU [(982 - 932)];
    lZWNQ7TItbC = (197 - 197);
    qyfNAog = (346 - 346);
    scanf ("%s", sPSXJU);
    scanf ("%s", ENO6f0kMErSI);
    zgiWyolxRK5h = strlen (ENO6f0kMErSI);
    ecOQWq = strlen (sPSXJU);
    {
        mJRuWKpjB = (774 - 219) - (1300 - 745);
        for (; mJRuWKpjB < zgiWyolxRK5h - ecOQWq;) {
            for (lZWNQ7TItbC = (832 - 832); lZWNQ7TItbC < ecOQWq; lZWNQ7TItbC++)
                uFaWDg3[lZWNQ7TItbC] = ENO6f0kMErSI[mJRuWKpjB + lZWNQ7TItbC];
            if (strcmp (uFaWDg3, sPSXJU) == (662 - 662))
                break;
            else {
                qyfNAog = qyfNAog + (629 - 628);
                strcpy (uFaWDg3, "\0\0\0\0\0\0\0\0\0\0");
            }
            mJRuWKpjB++;
        }
    }
    printf ("%d", qyfNAog);
}

