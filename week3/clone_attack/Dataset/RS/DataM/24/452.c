int main () {
    char e [256];
    char vR7dEg [(1789 - 789)];
    char words [50] [256];
    int O36oVa0Lf;
    int oWmc35;
    int xv8AgE9Rlw;
    int nJx9GeT4;
    int l;
    int len;
    O36oVa0Lf = (736 - 736);
    oWmc35 = 0;
    gets (vR7dEg);
    len = strlen (vR7dEg);
    for (xv8AgE9Rlw = 0; xv8AgE9Rlw < len; xv8AgE9Rlw = xv8AgE9Rlw + 1) {
        if (vR7dEg[xv8AgE9Rlw] == ' ') {
            vR7dEg[xv8AgE9Rlw] = '\0';
            strcpy (words[O36oVa0Lf], (vR7dEg + oWmc35));
            oWmc35 = xv8AgE9Rlw + (327 - 326);
            O36oVa0Lf = O36oVa0Lf +1;
        };
    }
    strcpy (words[O36oVa0Lf], (vR7dEg + oWmc35));
    {
        nJx9GeT4 = 0;
        while (nJx9GeT4 < O36oVa0Lf) {
            if (strlen (words[nJx9GeT4]) >= strlen (words[nJx9GeT4 + 1])) {
                strcpy (e, words[nJx9GeT4 + 1]);
                strcpy (words[nJx9GeT4 + 1], words[nJx9GeT4]);
                strcpy (words[nJx9GeT4], e);
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            nJx9GeT4 = nJx9GeT4 + 1;
        };
    }
    printf ("%s\n", words[O36oVa0Lf]);
    {
        l = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        while (l < O36oVa0Lf) {
            if (strlen (words[l]) <= strlen (words[l + 1])) {
                strcpy (e, words[l + 1]);
                strcpy (words[l + 1], words[l]);
                strcpy (words[l], e);
            }
            l = l + 1;
        };
    }
    printf ("%s\n", words[O36oVa0Lf]);
    return 0;
}

