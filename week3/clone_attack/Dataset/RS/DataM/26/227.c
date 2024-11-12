int main () {
    int flag;
    int tWVziAyaQ1Ss;
    int NQe6VsUHW;
    flag = 0;
    tWVziAyaQ1Ss = 0;
    char a [(967 - 767)], b [200];
    gets (a);
    int RScZgA;
    RScZgA = strlen (a);
    for (NQe6VsUHW = 0; RScZgA > NQe6VsUHW; NQe6VsUHW++) {
        if ((a[NQe6VsUHW] == ' ') && !(0 != tWVziAyaQ1Ss)) {
            tWVziAyaQ1Ss = 1;
            b[flag++] = a[NQe6VsUHW];
        }
        else {
            if (!(' ' == a[NQe6VsUHW])) {
                b[flag++] = a[NQe6VsUHW];
                tWVziAyaQ1Ss = 0;
            }
            else {
                if (a[NQe6VsUHW] == ' ' && tWVziAyaQ1Ss != 0)
                    continue;
            };
        };
    }
    {
        NQe6VsUHW = 0;
        while (NQe6VsUHW < flag) {
            printf ("%c", b[NQe6VsUHW]);
            NQe6VsUHW++;
        };
    };
}

