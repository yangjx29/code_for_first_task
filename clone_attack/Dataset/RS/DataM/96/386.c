main () {
    char hsVNvMQ2jP78 [100];
    char *YjuZkBCv4x;
    int jZ3AYhmIK;
    int zo7wvJjmszNc;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    int O3uwDJxosz;
    scanf ("%s", hsVNvMQ2jP78);
    O3uwDJxosz = strlen (hsVNvMQ2jP78);
    if (O3uwDJxosz == 1)
        printf ("%d\n%s", 0, hsVNvMQ2jP78);
    else {
        if (O3uwDJxosz == 2 && (hsVNvMQ2jP78[0] - '0') * 10 + hsVNvMQ2jP78[1] - '0' < 13)
            printf ("%d\n%s", 0, hsVNvMQ2jP78);
        else {
            if ((hsVNvMQ2jP78[0] - '0') * 10 + hsVNvMQ2jP78[1] - '0' >= 13) {
                zo7wvJjmszNc = hsVNvMQ2jP78[0] - '0';
                YjuZkBCv4x = (char *) malloc ((O3uwDJxosz -1) * sizeof (char));
                for (jZ3AYhmIK = 0; jZ3AYhmIK < O3uwDJxosz -1; jZ3AYhmIK++) {
                    YjuZkBCv4x[jZ3AYhmIK] = (zo7wvJjmszNc * 10 + (hsVNvMQ2jP78[jZ3AYhmIK + 1] - '0')) / 13 + '0';
                    zo7wvJjmszNc = (zo7wvJjmszNc * 10 + (hsVNvMQ2jP78[jZ3AYhmIK + 1] - '0')) % 13;
                }
                printf ("%s\n%d", YjuZkBCv4x, zo7wvJjmszNc);
            }
            else {
                zo7wvJjmszNc = (hsVNvMQ2jP78[0] - '0') * 10 + hsVNvMQ2jP78[1] - '0';
                YjuZkBCv4x = (char *) malloc ((O3uwDJxosz -2) * sizeof (char));
                for (jZ3AYhmIK = 0; jZ3AYhmIK < O3uwDJxosz -2; jZ3AYhmIK++) {
                    YjuZkBCv4x[jZ3AYhmIK] = (zo7wvJjmszNc * 10 + (hsVNvMQ2jP78[jZ3AYhmIK + 2] - '0')) / 13 + '0';
                    zo7wvJjmszNc = (zo7wvJjmszNc * 10 + (hsVNvMQ2jP78[jZ3AYhmIK + 2] - '0')) % 13;
                }
                printf ("%s\n%d", YjuZkBCv4x, zo7wvJjmszNc);
            };
        };
    };
}

