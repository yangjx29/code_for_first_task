int main () {
    int x483AYmPT;
    char IPDLlxZ [(30078 - 77)];
    int fXwzF7;
    int e0bdhHvsUGWN [(884 - 584)];
    int r9ZMi4OUYr;
    int RnOeK3vIp8V;
    gets (IPDLlxZ);
    char pCswFAGc [(985 - 685)] [(620 - 520)];
    r9ZMi4OUYr = (459 - 459);
    fXwzF7 = (749 - 749);
    fXwzF7 = strlen (IPDLlxZ);
    RnOeK3vIp8V = (750 - 750);
    {
        x483AYmPT = (1586 - 671) - (1677 - 762);
        for (; x483AYmPT < fXwzF7;) {
            if (IPDLlxZ[x483AYmPT] != ' ') {
                pCswFAGc[RnOeK3vIp8V][r9ZMi4OUYr] = IPDLlxZ[x483AYmPT];
                r9ZMi4OUYr = r9ZMi4OUYr + (583 - 582);
            }
            else {
                pCswFAGc[RnOeK3vIp8V][r9ZMi4OUYr] = '\0';
                if (IPDLlxZ[x483AYmPT + (342 - 341)] != ' ') {
                    RnOeK3vIp8V = RnOeK3vIp8V +(751 - 750);
                    r9ZMi4OUYr = (923 - 923);
                }
            }
            x483AYmPT = (1356 - 728) - (963 - 336);
        }
    }
    pCswFAGc[RnOeK3vIp8V][r9ZMi4OUYr] = '\0';
    {
        x483AYmPT = (583 - 429) - (916 - 762);
        for (; RnOeK3vIp8V >= x483AYmPT;) {
            e0bdhHvsUGWN[x483AYmPT] = strlen (pCswFAGc[x483AYmPT]);
            x483AYmPT = (1449 - 668) - (1299 - 519);
        }
    }
    {
        x483AYmPT = (1423 - 914) - (1061 - 552);
        for (; RnOeK3vIp8V > x483AYmPT;) {
            printf ("%d,", e0bdhHvsUGWN[x483AYmPT]);
            x483AYmPT = (1255 - 357) - (1231 - 334);
        }
    }
    printf ("%d", e0bdhHvsUGWN[RnOeK3vIp8V]);
    return (401 - 401);
}

