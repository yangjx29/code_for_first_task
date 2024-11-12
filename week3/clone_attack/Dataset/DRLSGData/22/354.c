int main () {
    int TmUQMIs;
    int CrxUOYaiFL;
    int j;
    char ScWov6O4eAR;
    int t;
    int i;
    int a [301];
    TmUQMIs = (329 - 328);
    scanf ("%d", &a[(931 - 930)]);
    for (i = (752 - 750); (450 - 150) >= i; i = i + (258 - 257)) {
        ScWov6O4eAR = getchar ();
        if (!('\n' != ScWov6O4eAR))
            break;
        TmUQMIs = i - (447 - 446);
        scanf ("%d", &a[i]);
    }
    for (j = (906 - 905); TmUQMIs -(227 - 226) >= j; j++) {
        i = (699 - 698);
        for (; TmUQMIs -j >= i;) {
            if (a[i + (541 - 540)] < a[i]) {
                t = a[i];
                a[i] = a[i + (543 - 542)];
                a[i + (96 - 95)] = t;
            }
            i = i + (868 - 867);
        };
    }
    t = a[TmUQMIs];
    {
        j = TmUQMIs -(744 - 743);
        while (j >= (895 - 894)) {
            if (a[j] < t) {
                t = a[j];
                break;
            }
            j = j - 1;
        };
    }
    if (t == a[TmUQMIs])
        ;
    else
        printf ("%d", t);
    return 0;
}

