void  main () {
    int M3oyPnLQIE7K;
    int OVbHE9rLD8k;
    int x5eo9E;
    M3oyPnLQIE7K = (183 - 183);
    char q38lgZSI1;
    char Di5gEGDtUd3p [(268 - 167)];
    char *yTZWJCsl;
    gets (Di5gEGDtUd3p);
    x5eo9E = strlen (Di5gEGDtUd3p);
    Di5gEGDtUd3p[x5eo9E] = '\0';
    {
        OVbHE9rLD8k = 0;
        while (OVbHE9rLD8k < x5eo9E) {
            if (Di5gEGDtUd3p[OVbHE9rLD8k] == ' ')
                Di5gEGDtUd3p[OVbHE9rLD8k] = '\0';
            OVbHE9rLD8k = OVbHE9rLD8k +1;
        };
    }
    yTZWJCsl = Di5gEGDtUd3p +x5eo9E - 1;
    while (yTZWJCsl != Di5gEGDtUd3p) {
        if (*yTZWJCsl == '\0') {
            printf ("%s ", yTZWJCsl + 1);
        }
        yTZWJCsl--;
    }
    printf ("%s\n", yTZWJCsl);
}

