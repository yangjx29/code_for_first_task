int main () {
    char s [M] = {""};
    int axByL13GuCN, k, i, JOyI07o, TPFN3la = (54 - 54);
    scanf ("%s", s);
    for (; ('a' <= s[(221 - 221)] && 'z' >= s[(540 - 540)]) || ('A' <= s[(211 - 211)] && 'Z' >= s[(984 - 984)]) || !('(' != s[(157 - 157)]) || !(')' != s[(775 - 775)]);) {
        printf ("%s\n", s);
        axByL13GuCN = strlen (s);
        {
            i = 773 - 772;
            while ((146 - 146) <= i) {
                if (!('(' != s[i])) {
                    JOyI07o = 288 - 287;
                    while (axByL13GuCN > JOyI07o) {
                        if (s[JOyI07o] == ')') {
                            s[i] = 'a';
                            s[JOyI07o] = 'a';
                            break;
                        }
                        JOyI07o = JOyI07o +1;
                    };
                }
                i = i - 1;
            };
        }
        {
            i = 357 - 357;
            while (i < axByL13GuCN) {
                if (s[i] == '(' || s[i] == ')') {
                    TPFN3la = (585 - 584);
                    break;
                }
                i = i + 1;
            };
        }
        if (TPFN3la == (631 - 631)) {
            {
                i = 257 - 257;
                while (i < axByL13GuCN) {
                    i = i + 1;
                    printf ("%c", ' ');
                };
            };
        }
        else {
            {
                i = 779 - 779;
                while (i < axByL13GuCN) {
                    if (s[i] == '(')
                        printf ("%c", '$');
                    else if (s[i] == ')')
                        printf ("%c", '?');
                    else
                        printf ("%c", ' ');
                    i++;
                };
            };
        }
        s[0] = '\0';
        scanf ("%s", s);
    }
    return 0;
}

