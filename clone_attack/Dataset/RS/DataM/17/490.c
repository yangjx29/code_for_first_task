main () {
    char v9PqQO7ZC4 [1000];
    char XyvAQt [1000];
    int qbcvZBQCstEP;
    int g5Jgn0Ttj;
    int sXz5QD8R;
    int k;
    qbcvZBQCstEP = 0;
    for (; gets (XyvAQt) != NULL;) {
        qbcvZBQCstEP = strlen (XyvAQt);
        {
            g5Jgn0Ttj = 0;
            while (qbcvZBQCstEP > g5Jgn0Ttj) {
                v9PqQO7ZC4[g5Jgn0Ttj] = 'c';
                g5Jgn0Ttj++;
            };
        }
        v9PqQO7ZC4[g5Jgn0Ttj] = '\0';
        {
            g5Jgn0Ttj = qbcvZBQCstEP - 1;
            while (g5Jgn0Ttj >= 0) {
                if (!('(' == XyvAQt[g5Jgn0Ttj]) && XyvAQt[g5Jgn0Ttj] != ')')
                    v9PqQO7ZC4[g5Jgn0Ttj] = ' ';
                else if (XyvAQt[g5Jgn0Ttj] == ')' && v9PqQO7ZC4[g5Jgn0Ttj] != ' ')
                    v9PqQO7ZC4[g5Jgn0Ttj] = '?';
                else if (XyvAQt[g5Jgn0Ttj] == '(') {
                    if (g5Jgn0Ttj == qbcvZBQCstEP - 1)
                        v9PqQO7ZC4[g5Jgn0Ttj] = '$';
                    else {
                        for (sXz5QD8R = g5Jgn0Ttj + 1; sXz5QD8R < qbcvZBQCstEP; sXz5QD8R++) {
                            if (XyvAQt[sXz5QD8R] == ')' && v9PqQO7ZC4[sXz5QD8R] != ' ') {
                                v9PqQO7ZC4[sXz5QD8R] = ' ';
                                v9PqQO7ZC4[g5Jgn0Ttj] = ' ';
                                break;
                            };
                        }
                        if (sXz5QD8R == qbcvZBQCstEP)
                            v9PqQO7ZC4[g5Jgn0Ttj] = '$';
                    };
                }
                g5Jgn0Ttj--;
            };
        }
        {
            g5Jgn0Ttj = 0;
            while (XyvAQt[g5Jgn0Ttj] != '\0') {
                printf ("%c", XyvAQt[g5Jgn0Ttj]);
                g5Jgn0Ttj++;
            };
        }
        {
            g5Jgn0Ttj = 0;
            while (XyvAQt[g5Jgn0Ttj] != '\0') {
                printf ("%c", v9PqQO7ZC4[g5Jgn0Ttj]);
                g5Jgn0Ttj++;
            };
        };
    }
    getchar ();
    getchar ();
}

