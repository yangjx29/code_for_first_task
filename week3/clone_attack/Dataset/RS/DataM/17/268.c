int main () {
    char zbHpONB51 [(546 - 445)];
    int tdZxmYsbp [(682 - 581)];
    int fIfhSX8;
    int PxteJhqwHaBg;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    int nmka4gojL0N;
    int eOQ7drNUkuh;
    while (scanf ("%s", zbHpONB51) != EOF) {
        printf ("%s\n", zbHpONB51);
        fIfhSX8 = strlen (zbHpONB51);
        eOQ7drNUkuh = (741 - 741);
        {
            PxteJhqwHaBg = 826 - 826;
            while (PxteJhqwHaBg < fIfhSX8) {
                if (zbHpONB51[PxteJhqwHaBg] == '(') {
                    eOQ7drNUkuh = eOQ7drNUkuh + 1;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    tdZxmYsbp[eOQ7drNUkuh] = PxteJhqwHaBg;
                }
                PxteJhqwHaBg = PxteJhqwHaBg +1;
            };
        }
        {
            PxteJhqwHaBg = eOQ7drNUkuh;
            while (PxteJhqwHaBg > (733 - 733)) {
                {
                    nmka4gojL0N = 447 - 446;
                    while (nmka4gojL0N < fIfhSX8) {
                        if (zbHpONB51[nmka4gojL0N] == ')') {
                            zbHpONB51[tdZxmYsbp[PxteJhqwHaBg]] = ' ';
                            zbHpONB51[nmka4gojL0N] = ' ';
                            break;
                        }
                        nmka4gojL0N = nmka4gojL0N + 1;
                    };
                }
                PxteJhqwHaBg = PxteJhqwHaBg -1;
            };
        }
        {
            PxteJhqwHaBg = 0;
            while (PxteJhqwHaBg < fIfhSX8) {
                if (zbHpONB51[PxteJhqwHaBg] == ')')
                    printf ("?");
                else if (zbHpONB51[PxteJhqwHaBg] == '(')
                    ;
                else
                    printf (" ");
                PxteJhqwHaBg++;
            };
        };
    }
    return 0;
}

