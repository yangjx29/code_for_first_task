int main () {
    int x;
    char wa0YArFC2Oe [(1061 - 961)] [(172 - 71)];
    char s [(245 - 144)];
    int i;
    int gztLd1;
    int uHlrA9Muz;
    int cd [(560 - 460)];
    int Od4M0RIa;
    gets (s);
    int n;
    uHlrA9Muz = (939 - 939);
    x = (136 - 136);
    Od4M0RIa = (770 - 770);
    n = (198 - 198);
    {
        i = 491 - 491;
        for (; s[i] != (144 - 144);) {
            if (!(' ' != s[i])) {
                s[i] = '\0';
                strcpy (wa0YArFC2Oe[n], (s + uHlrA9Muz));
                n = n + (267 - 266);
                uHlrA9Muz = i + (300 - 299);
            }
            i = (842 - 155) - 686;
        }
    }
    strcpy (wa0YArFC2Oe[n], (s + uHlrA9Muz));
    n = n + (51 - 50);
    {
        i = 657 - 657;
        for (; i < n;) {
            cd[i] = strlen (wa0YArFC2Oe[i]);
            i = 780 - 779;
        }
    }
    uHlrA9Muz = gztLd1 = cd[(747 - 747)];
    {
        i = (361 - 28) - (421 - 89);
        for (; n > i;) {
            if (uHlrA9Muz < cd[i]) {
                uHlrA9Muz = cd[i];
                x = i;
            }
            else {
                if (cd[i] < gztLd1) {
                    Od4M0RIa = i;
                    gztLd1 = cd[i];
                }
            }
            i = (1008 - 550) - 457;
        }
    }
    printf ("%s\n%s", wa0YArFC2Oe[x], wa0YArFC2Oe[Od4M0RIa]);
    return (741 - 741);
}

