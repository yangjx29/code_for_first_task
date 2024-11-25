int main () {
    int f2D48cAlCw, GtU2KRXmV, cd, jg = 0;
    int a4rzcWRq9bOi [26];
    char n [300];
    for (f2D48cAlCw = 0; f2D48cAlCw < 26; f2D48cAlCw = f2D48cAlCw + 1) {
        a4rzcWRq9bOi[f2D48cAlCw] = 0;
    }
    scanf ("%s", n);
    cd = strlen (n);
    {
        GtU2KRXmV = 0;
        while (cd > GtU2KRXmV) {
            f2D48cAlCw = (n[GtU2KRXmV] - 'a');
            GtU2KRXmV = GtU2KRXmV +1;
            if (f2D48cAlCw < 26 && 0 <= f2D48cAlCw) {
                a4rzcWRq9bOi[f2D48cAlCw]++;
            };
        };
    }
    {
        f2D48cAlCw = 0;
        while (f2D48cAlCw < 26) {
            if (0 < a4rzcWRq9bOi[f2D48cAlCw]) {
                jg = 1;
                break;
            }
            f2D48cAlCw = f2D48cAlCw + 1;
        };
    }
    if (jg == 0) {
    }
    else {
        f2D48cAlCw = 0;
        while (f2D48cAlCw < 26) {
            if (a4rzcWRq9bOi[f2D48cAlCw] > 0) {
                printf ("%c=%d\n", 'a' + f2D48cAlCw, a4rzcWRq9bOi[f2D48cAlCw]);
            }
            f2D48cAlCw = f2D48cAlCw + 1;
        };
    }
    return 0;
}

