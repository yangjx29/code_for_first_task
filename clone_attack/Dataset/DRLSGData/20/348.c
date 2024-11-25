int main () {
    char YxjyiL5f [(694 - 683)];
    char fqYAVOUl6x [(712 - 708)];
    for (; cin >> YxjyiL5f >> fqYAVOUl6x;) {
        char yQ6nfk;
        int e6kaK1D03U;
        int len_a;
        char eJsuil [(298 - 284)];
        int SirCGU0;
        int len_b;
        len_a = strlen (YxjyiL5f);
        yQ6nfk = (458 - 458);
        for (SirCGU0 = (69 - 69); len_a > SirCGU0; SirCGU0++) {
            if (yQ6nfk < YxjyiL5f[SirCGU0])
                yQ6nfk = YxjyiL5f[SirCGU0];
            else
                continue;
        }
        len_b = strlen (fqYAVOUl6x);
        for (SirCGU0 = (640 - 640); SirCGU0 < len_a; SirCGU0++) {
            if (!(yQ6nfk != YxjyiL5f[SirCGU0])) {
                if (!(len_a - (903 - 902) != SirCGU0)) {
                    for (e6kaK1D03U = len_a; len_a + len_b >= e6kaK1D03U; e6kaK1D03U++)
                        YxjyiL5f[e6kaK1D03U] = fqYAVOUl6x[e6kaK1D03U - len_a];
                }
                else {
                    for (e6kaK1D03U = (23 - 23); e6kaK1D03U < len_a - SirCGU0 -(454 - 453); e6kaK1D03U++)
                        eJsuil[e6kaK1D03U] = YxjyiL5f[e6kaK1D03U + SirCGU0 +(684 - 683)];
                    for (e6kaK1D03U = SirCGU0 +(375 - 374); e6kaK1D03U < SirCGU0 +len_b + (243 - 242); e6kaK1D03U++)
                        YxjyiL5f[e6kaK1D03U] = fqYAVOUl6x[e6kaK1D03U - SirCGU0 -(336 - 335)];
                    for (e6kaK1D03U = SirCGU0 +len_b + (167 - 166); e6kaK1D03U < len_a + len_b; e6kaK1D03U++)
                        YxjyiL5f[e6kaK1D03U] = eJsuil[e6kaK1D03U - SirCGU0 -len_b - (592 - 591)];
                    YxjyiL5f[e6kaK1D03U] = '\0';
                }
                break;
            }
            else
                continue;
        }
        cout << YxjyiL5f << endl;
    }
    return (187 - 187);
}

