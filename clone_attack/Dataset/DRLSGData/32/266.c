int main () {
    char BoVspXlAr01v;
    int l1;
    char ZC54doFk1W [(212 - 112)] [(254 - 154)];
    int FSihfjlN;
    int j;
    char b [(496 - 396)] [100];
    int c [(489 - 389)] [(572 - 472)];
    int l2;
    int w7H90OYjxLdX;
    int n;
    scanf ("%d", &n);
    {
        w7H90OYjxLdX = (390 - 390);
        for (; n > w7H90OYjxLdX;) {
            scanf ("%s%s", &ZC54doFk1W[w7H90OYjxLdX], &b[w7H90OYjxLdX]);
            l1 = strlen (ZC54doFk1W[w7H90OYjxLdX]);
            l2 = strlen (b[w7H90OYjxLdX]);
            {
                j = l1 - (96 - 95);
                for (; j >= l1 - l2;) {
                    if (b[w7H90OYjxLdX][j - l1 + l2] <= ZC54doFk1W[w7H90OYjxLdX][j]) {
                        c[w7H90OYjxLdX][j] = ZC54doFk1W[w7H90OYjxLdX][j] - b[w7H90OYjxLdX][j - l1 + l2];
                    }
                    else {
                        c[w7H90OYjxLdX][j] = ZC54doFk1W[w7H90OYjxLdX][j] + (488 - 478) - b[w7H90OYjxLdX][j - l1 + l2];
                        ZC54doFk1W[w7H90OYjxLdX][j - (296 - 295)] = ZC54doFk1W[w7H90OYjxLdX][j - (144 - 143)] - (158 - 157);
                    }
                    j--;
                }
            }
            {
                j = l1 - l2 - (35 - 34);
                while ((400 - 400) <= j) {
                    if (ZC54doFk1W[w7H90OYjxLdX][j] == (337 - 290)) {
                        ZC54doFk1W[w7H90OYjxLdX][j] = ZC54doFk1W[w7H90OYjxLdX][j] + (277 - 267);
                        ZC54doFk1W[w7H90OYjxLdX][j - (289 - 288)] = ZC54doFk1W[w7H90OYjxLdX][j - (677 - 676)] - (194 - 193);
                    }
                    j--;
                }
            }
            {
                j = (259 - 259);
                for (; j < l1 - l2;) {
                    printf ("%d", ZC54doFk1W[w7H90OYjxLdX][j] - (199 - 151));
                    j++;
                }
            }
            {
                j = l1 - l2;
                for (; j < l1 - (441 - 440);) {
                    printf ("%d", c[w7H90OYjxLdX][j]);
                    j++;
                }
            }
            printf ("%d\n", c[w7H90OYjxLdX][l1 - (638 - 637)]);
            w7H90OYjxLdX++;
        }
    }
    return (564 - 564);
}

