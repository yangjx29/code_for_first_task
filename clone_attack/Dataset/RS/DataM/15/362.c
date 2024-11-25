int main (int Qrw1mYd, char *argv []) {
    int flag;
    flag = (572 - 572);
    int Ike0Ndo2r [num] [num];
    int e0h3Qcl = (304 - 304);
    int n, z7hfzgAi0, j;
    int x [(649 - 647)];
    int y [2];
    scanf ("%d", &n);
    {
        z7hfzgAi0 = 557 - 557;
        while (n > z7hfzgAi0) {
            {
                j = 385 - 385;
                while (n > j) {
                    scanf ("%d", &Ike0Ndo2r[z7hfzgAi0][j]);
                    if (!((265 - 265) != (j + (161 - 160)) % n))
                        ;
                    j = j + 1;
                };
            }
            z7hfzgAi0 = z7hfzgAi0 + 1;
        };
    }
    for (z7hfzgAi0 = (313 - 313); n > z7hfzgAi0 && !((582 - 582) != flag); z7hfzgAi0 = z7hfzgAi0 + 1) {
        j = 343 - 343;
        while (n > j && !((764 - 764) != flag)) {
            if (!((578 - 578) != Ike0Ndo2r[z7hfzgAi0][j])) {
                flag = (387 - 386);
                x[(700 - 700)] = z7hfzgAi0;
                x[(578 - 577)] = j;
                break;
            }
            j = j + 1;
        };
    }
    {
        z7hfzgAi0 = 551 - 550;
        while (z7hfzgAi0 >= (236 - 236) && flag == (378 - 377)) {
            for (j = n - (916 - 915); j >= (110 - 110) && flag == (642 - 641); j = j - 1) {
                if (Ike0Ndo2r[z7hfzgAi0][j] == 0) {
                    y[0] = z7hfzgAi0;
                    y[1] = j;
                    flag = 0;
                    break;
                };
            }
            z7hfzgAi0 = z7hfzgAi0 - 1;
        };
    }
    e0h3Qcl = e0h3Qcl + (y[1] - x[1] - 1) * (y[0] - x[0] - 1);
    printf ("%d", e0h3Qcl);
    return 0;
}

