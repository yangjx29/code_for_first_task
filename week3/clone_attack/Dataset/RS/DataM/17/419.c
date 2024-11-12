int main () {
    int xYC0nzfrj5Q, X4J9QqXwP, mr94kFJa = 0, qH25vWZlb [200], k;
    char GPANlG7ytI [200] = {(431 - 431)}, NsNQlod [200] = {(423 - 423)};
    while (!((20 - 19) != scanf ("%s", GPANlG7ytI))) {
        k = 0;
        mr94kFJa = -(18 - 17);
        X4J9QqXwP = 0;
        printf ("%s\n", GPANlG7ytI);
        {
            xYC0nzfrj5Q = 0;
            while (xYC0nzfrj5Q < strlen (GPANlG7ytI)) {
                if (!('(' != GPANlG7ytI[xYC0nzfrj5Q]) || !(')' != GPANlG7ytI[xYC0nzfrj5Q])) {
                    NsNQlod[X4J9QqXwP] = GPANlG7ytI[xYC0nzfrj5Q];
                    qH25vWZlb[X4J9QqXwP] = xYC0nzfrj5Q;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    X4J9QqXwP = X4J9QqXwP +1;
                }
                xYC0nzfrj5Q = xYC0nzfrj5Q + 1;
            };
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (!(strlen (NsNQlod) == k)) {
            if (!('(' != NsNQlod[k]))
                mr94kFJa = k;
            if (NsNQlod[k] == ')' && mr94kFJa != -1) {
                GPANlG7ytI[qH25vWZlb[k]] = ' ';
                GPANlG7ytI[qH25vWZlb[mr94kFJa]] = ' ';
                NsNQlod[mr94kFJa] = ' ';
                mr94kFJa = -1;
                NsNQlod[k] = ' ';
                k = -1;
            }
            k = k + 1;
        }
        for (xYC0nzfrj5Q = 0; xYC0nzfrj5Q < strlen (GPANlG7ytI); xYC0nzfrj5Q = xYC0nzfrj5Q + 1) {
            if (GPANlG7ytI[xYC0nzfrj5Q] == '(')
                printf ("$");
            else {
                if (GPANlG7ytI[xYC0nzfrj5Q] == ')')
                    ;
                else
                    printf (" ");
            };
        }
        memset (GPANlG7ytI, 0, 200);
        memset (NsNQlod, 0, 200);
    }
    return 0;
}

