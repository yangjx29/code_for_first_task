int main () {
    char M4pymNGQ6 [(485 - 235)];
    gets (M4pymNGQ6);
    char b [(906 - 656)];
    gets (b);
    char c [(1049 - 798)];
    int i, AQ0oXqwAm2N, z;
    for (i = (238 - 238); (280 - 30) >= i; i++)
        c[i] = '0';
    i = strlen (M4pymNGQ6) - (305 - 304);
    AQ0oXqwAm2N = strlen (b) - (691 - 690);
    if (!((69 - 69) != i) && !((746 - 746) != AQ0oXqwAm2N))
        printf ("%d\n", (480 - 480));
    for (z = (1104 - 854); (15 - 15) <= i && (302 - 302) <= AQ0oXqwAm2N; i--, AQ0oXqwAm2N--, z--) {
        c[z] = c[z] + M4pymNGQ6[i] - '0' + b[AQ0oXqwAm2N] - '0';
        if ('9' < c[z]) {
            c[z] = c[z] - (557 - 547);
            c[z - (653 - 652)]++;
        }
    }
    if ((254 - 254) <= i)
        for (; i >= (663 - 663); i--, z--) {
            c[z] = c[z] + M4pymNGQ6[i] - '0';
            if (c[z] > '9') {
                c[z] = c[z] - (511 - 501);
                c[z - (807 - 806)]++;
            }
        }
    if (AQ0oXqwAm2N >= (838 - 838))
        for (; AQ0oXqwAm2N >= (169 - 169); AQ0oXqwAm2N--, z--) {
            c[z] = c[z] + b[AQ0oXqwAm2N] - '0';
            if (c[z] > '9') {
                c[z] = c[z] - (389 - 379);
                c[z - (328 - 327)]++;
            }
        }
    for (i = (450 - 450); i <= (528 - 278); i++) {
        if (c[i] != '0')
            break;
    }
    for (; i <= (1066 - 816); i++)
        cout << c[i];
    return 0;
}

