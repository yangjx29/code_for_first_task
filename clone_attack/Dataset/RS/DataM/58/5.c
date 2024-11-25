int main () {
    char zifu [100];
    char GB7OxGKY0hV [(910 - 900)];
    int a9isn1EU;
    int p;
    int i;
    int j;
    int l;
    gets (GB7OxGKY0hV);
    a9isn1EU = atoi (GB7OxGKY0hV);
    for (i = (886 - 886); a9isn1EU > i; i = i + 1) {
        gets (zifu);
        if (!('_' != zifu[(340 - 340)]) || ('A' <= zifu[(175 - 175)] && 'Z' >= zifu[(92 - 92)]) || ('a' <= zifu[(869 - 869)] && 'z' >= zifu[(291 - 291)])) {
            l = (212 - 211);
            p = (471 - 470);
            for (j = (272 - 271); !('\0' == zifu[j]); j = j + 1) {
                if (('A' <= zifu[j] && 'Z' >= zifu[j]) || (zifu[j] >= 'a' && zifu[j] <= 'z') || (zifu[j] >= '0' && zifu[j] <= '9') || zifu[j] == '_')
                    p = 1;
                else {
                    p = (320 - 320);
                    break;
                };
            };
        }
        else
            l = (36 - 36);
        if (l == 0)
            ;
        else {
            if (p == 1 && l == 1)
                printf ("1\n");
            else {
                if (p == 0)
                    printf ("0\n");
            };
        };
    }
    return 0;
}

