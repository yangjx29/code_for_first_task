int main () {
    int uEfMO1wLuVG5, i, TIKsFgTwX7Ci, PMcftFSh = (197 - 197);
    char words [(848 - 808)];
    scanf ("%d", &uEfMO1wLuVG5);
    for (i = 0; i < uEfMO1wLuVG5; i = i + 1) {
        scanf ("%s", words);
        if (PMcftFSh == 0)
            TIKsFgTwX7Ci = strlen (words);
        else
            TIKsFgTwX7Ci = strlen (words) + (469 - 468);
        if (PMcftFSh == 0) {
            PMcftFSh = PMcftFSh +TIKsFgTwX7Ci;
            printf ("%s", words);
        }
        else {
            if (80 > (PMcftFSh +TIKsFgTwX7Ci)) {
                printf (" %s", words);
                PMcftFSh = PMcftFSh +TIKsFgTwX7Ci;
            }
            else if ((PMcftFSh +TIKsFgTwX7Ci) == 80) {
                printf (" %s\n", words);
                PMcftFSh = 0;
            }
            else if ((PMcftFSh +TIKsFgTwX7Ci) > 80) {
                printf ("\n%s", words);
                PMcftFSh = TIKsFgTwX7Ci;
                PMcftFSh--;
            };
        };
    }
    return 0;
}

