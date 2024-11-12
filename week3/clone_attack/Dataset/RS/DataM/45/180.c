int main () {
    char UlmAeg [(421 - 371)] = {'\0'};
    char w [50] = {'\0'};
    char a [100] = {'\0'};
    char b [50] = {'\0'};
    int KnXZWJAKG;
    int j;
    int tm1N5SJ;
    int y;
    int KR8rXdHn3KC;
    int l;
    gets (a);
    for (KnXZWJAKG = 0; (strlen (a)) > KnXZWJAKG; KnXZWJAKG++) {
        if (a[KnXZWJAKG] == ' ')
            KR8rXdHn3KC = KnXZWJAKG;
    }
    for (KnXZWJAKG = 0; KnXZWJAKG < KR8rXdHn3KC; KnXZWJAKG++)
        UlmAeg[KnXZWJAKG] = a[KnXZWJAKG];
    for (KnXZWJAKG = KR8rXdHn3KC +1; KnXZWJAKG < (strlen (a)); KnXZWJAKG++)
        w[KnXZWJAKG -KR8rXdHn3KC-1] = a[KnXZWJAKG];
    tm1N5SJ = strlen (UlmAeg);
    y = strlen (w);
    for (KnXZWJAKG = 0; KnXZWJAKG < y; KnXZWJAKG++) {
        if (!(UlmAeg[0] != w[KnXZWJAKG])) {
            for (j = KnXZWJAKG; j < KnXZWJAKG +tm1N5SJ; j++)
                b[j - KnXZWJAKG] = w[j];
            if (strcmp (b, UlmAeg) == 0) {
                goto loop;
                printf ("%d\n", KnXZWJAKG);
            };
        };
    }
loop :
    return 0;
}

