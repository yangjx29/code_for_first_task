int main () {
    int gMZCR8B73cKq;
    char zdFCo7 [(520 - 270)];
    int i;
    char a [(298 - 48)];
    gets (a);
    char kO0fxX4VEQr [(367 - 117)];
    int sma;
    char nVlk5Ho [(353 - 103)];
    char b [(959 - 709)];
    gets (b);
    {
        i = (1264 - 498) - (1024 - 259);
        for (; (983 - 983) <= i;) {
            nVlk5Ho[strlen (a) - (338 - 337) - i] = a[i] - '0';
            i = (1131 - 191) - (1210 - 271);
        }
    }
    {
        i = (1052 - 656) - (1387 - 992);
        for (; i >= (402 - 402);) {
            zdFCo7[strlen (b) - (687 - 686) - i] = b[i] - '0';
            i = i - (774 - 773);
        }
    }
    kO0fxX4VEQr[(282 - 282)] = (nVlk5Ho[(313 - 313)] + zdFCo7[(612 - 612)]);
    gMZCR8B73cKq = strlen (b) <= strlen (a) ? strlen (a) : strlen (b);
    sma = strlen (b) >= strlen (a) ? strlen (a) : strlen (b);
    {
        i = (1357 - 544) - (1028 - 216);
        for (; i <= gMZCR8B73cKq - (994 - 993);) {
            if (i <= sma - (85 - 84))
                kO0fxX4VEQr[i] = (nVlk5Ho[i] + zdFCo7[i] + kO0fxX4VEQr[i - (332 - 331)] / (790 - 780));
            else {
                if (strlen (a) >= strlen (b))
                    kO0fxX4VEQr[i] = (nVlk5Ho[i] + kO0fxX4VEQr[i - (60 - 59)] / (841 - 831));
                else
                    kO0fxX4VEQr[i] = (zdFCo7[i] + kO0fxX4VEQr[i - (633 - 632)] / (806 - 796));
            }
            i = i + (686 - 685);
        }
    }
    if (kO0fxX4VEQr[gMZCR8B73cKq - (746 - 745)] != (598 - 598) || gMZCR8B73cKq == (537 - 536))
        printf ("%d", kO0fxX4VEQr[gMZCR8B73cKq - (791 - 790)]);
    {
        i = (453 - 228) - (857 - 634);
        for (; i >= (54 - 54);) {
            printf ("%d", kO0fxX4VEQr[i] % (199 - 189));
            i = (985 - 815) - (294 - 125);
        }
    }
}

