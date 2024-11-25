int main () {
    char *TSW5yruqCp;
    int XDotflrSx3;
    XDotflrSx3 = 0;
    char ci [300];
    int USi2bplCj5;
    USi2bplCj5 = strlen (ci);
    scanf ("%s", ci);
    {
        int i;
        i = 'A';
        while ('z' >= i) {
            char y2pkA7xN4e;
            int vbKGsdZR5JW;
            vbKGsdZR5JW = 0;
            {
                TSW5yruqCp = ci;
                while (ci + USi2bplCj5 > TSW5yruqCp) {
                    if (*TSW5yruqCp == i && ('Z' >= *TSW5yruqCp || *TSW5yruqCp >= 'a')) {
                        XDotflrSx3 = XDotflrSx3 +1;
                        vbKGsdZR5JW = vbKGsdZR5JW + 1;
                    }
                    TSW5yruqCp = TSW5yruqCp +1;
                }
            }
            y2pkA7xN4e = i;
            i = i + 1;
            if (vbKGsdZR5JW != 0) {
                printf ("%c=%d\n", y2pkA7xN4e, vbKGsdZR5JW);
            }
        }
    }
    if (XDotflrSx3 == 0) {
    }
    return 0;
}

