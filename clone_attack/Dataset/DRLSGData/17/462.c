void  print (int rC5nFkXoq, int z [(582 - 82)], char rxFCBS5jl4f [500]);
void  search (int BhRVp96uXW [500], int h);
char rxFCBS5jl4f [500];
int z [500];

int main () {
    for (; scanf ("%s", rxFCBS5jl4f) != EOF;) {
        int BhRVp96uXW;
        int h;
        int l2;
        int ArkBtmyz;
        h = strlen (rxFCBS5jl4f);
        for (BhRVp96uXW = 0; BhRVp96uXW <= h - (854 - 853); BhRVp96uXW++) {
            if (!('(' != rxFCBS5jl4f[BhRVp96uXW])) {
                z[BhRVp96uXW] = 1;
            }
            else {
                if (rxFCBS5jl4f[BhRVp96uXW] == ')') {
                    z[BhRVp96uXW] = (31 - 29);
                }
                else {
                    z[BhRVp96uXW] = 0;
                }
            }
        }
        search (z, h);
        print (h, z, rxFCBS5jl4f);
        l2 = (415 - 415);
        ArkBtmyz = (471 - 471);
    }
    return 0;
}

void  search (int z [500], int h) {
    int Abt5ERycOd;
    int m;
    int yTwu1miq;
    for (m = 1; m <= h - 1; m = m + 1)
        for (yTwu1miq = 0; (h - 1) >= (yTwu1miq + m); yTwu1miq = yTwu1miq + 1)
            if ((!(1 != z[yTwu1miq])) && (z[yTwu1miq + m] == (522 - 520))) {
                z[yTwu1miq] = 0;
                z[yTwu1miq + m] = 0;
            }
}

void  print (int rC5nFkXoq, int z [500], char rxFCBS5jl4f [500]) {
    int BhRVp96uXW;
    for (BhRVp96uXW = 0; BhRVp96uXW < rC5nFkXoq; BhRVp96uXW++) {
        printf ("%c", rxFCBS5jl4f[BhRVp96uXW]);
    }
    for (BhRVp96uXW = 0; BhRVp96uXW < rC5nFkXoq; BhRVp96uXW++) {
        if (z[BhRVp96uXW] == 0)
            ;
        if (z[BhRVp96uXW] == 1)
            printf ("$");
        if (z[BhRVp96uXW] == 2)
            ;
    }
}

