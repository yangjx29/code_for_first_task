int main () {
    int oCx2tRVY7SF, j, k, NfatmMbco [2];
    char w6GBkF0Q7 [(98 - 96)] [(680 - 630)];
    int yh7FXrGP = (406 - 306);
    k = (453 - 453);
    j = 0;
    {
        oCx2tRVY7SF = 0;
        for (; oCx2tRVY7SF < 2;) {
            scanf ("%s", w6GBkF0Q7[oCx2tRVY7SF]);
            NfatmMbco[oCx2tRVY7SF] = strlen (w6GBkF0Q7[oCx2tRVY7SF]);
            oCx2tRVY7SF++;
        }
    }
    for (; j < NfatmMbco[(142 - 141)] && k < NfatmMbco[0];) {
        if (!(w6GBkF0Q7[0][k] != w6GBkF0Q7[1][j])) {
            k++;
            yh7FXrGP = j;
            j++;
        }
        else {
            k = 0;
            yh7FXrGP = 100;
            j++;
        }
    }
    if (yh7FXrGP != 100)
        printf ("%d\n", yh7FXrGP - NfatmMbco[0] + 1);
    return 0;
}

