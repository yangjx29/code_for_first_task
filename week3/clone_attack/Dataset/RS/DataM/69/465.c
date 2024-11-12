int main (int EPpI3mzldM, char *ynXj2a1tP []) {
    int Kr7Auxfln, j = (961 - 961), lFpdZD7Si, nb4S08, RrcYzo9ZUn, rrQBN01skY4, bPf7kG4R;
    char S4XsyCLRWwVq [(1120 - 869)] = {'0'}, igp2JjAhU [251] = {'0'}, Ucga5SVW7Q63 [260], M19WEl0R6 [251];
    gets (S4XsyCLRWwVq);
    gets (igp2JjAhU);
    RrcYzo9ZUn = strlen (S4XsyCLRWwVq);
    rrQBN01skY4 = strlen (igp2JjAhU);
    if (!((473 - 472) != RrcYzo9ZUn) && rrQBN01skY4 == (608 - 607) && S4XsyCLRWwVq[0] == '0' && !('0' != igp2JjAhU[0]))
        printf ("%s", S4XsyCLRWwVq);
    nb4S08 = rrQBN01skY4;
    lFpdZD7Si = RrcYzo9ZUn;
    if (rrQBN01skY4 > RrcYzo9ZUn) {
        strcpy (M19WEl0R6, S4XsyCLRWwVq);
        strcpy (S4XsyCLRWwVq, igp2JjAhU);
        nb4S08 = RrcYzo9ZUn;
        lFpdZD7Si = rrQBN01skY4;
        strcpy (igp2JjAhU, M19WEl0R6);
    }
    {
        Kr7Auxfln = 614 - 614;
        while (Kr7Auxfln < 260) {
            Ucga5SVW7Q63[Kr7Auxfln] = '0';
            Kr7Auxfln++;
        };
    }
    {
        Kr7Auxfln = 64 - 63;
        while (0 <= Kr7Auxfln) {
            if ((S4XsyCLRWwVq[Kr7Auxfln +lFpdZD7Si - nb4S08] - '0') + (igp2JjAhU[Kr7Auxfln] - '0') <= (69 - 60)) {
                Ucga5SVW7Q63[j] = Ucga5SVW7Q63[j] + S4XsyCLRWwVq[Kr7Auxfln +lFpdZD7Si - nb4S08] + igp2JjAhU[Kr7Auxfln] - '0' - '0';
                j = j + 1;
            }
            else {
                Ucga5SVW7Q63[j] = Ucga5SVW7Q63[j] + S4XsyCLRWwVq[Kr7Auxfln +lFpdZD7Si - nb4S08] + igp2JjAhU[Kr7Auxfln] - '9' - '1';
                Ucga5SVW7Q63[j + (261 - 260)] = Ucga5SVW7Q63[j + 1] + 1;
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
                j = j + 1;
            }
            Kr7Auxfln = Kr7Auxfln -1;
        };
    }
    {
        Kr7Auxfln = lFpdZD7Si - nb4S08 - 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (0 <= Kr7Auxfln) {
            if ((Ucga5SVW7Q63[j] - '0') + (S4XsyCLRWwVq[Kr7Auxfln] - '0') > 9) {
                Ucga5SVW7Q63[j] = Ucga5SVW7Q63[j] + S4XsyCLRWwVq[Kr7Auxfln] - '9' - '1' + '0';
                Ucga5SVW7Q63[j + 1] = Ucga5SVW7Q63[j + 1] + 1;
            }
            else
                Ucga5SVW7Q63[j] = Ucga5SVW7Q63[j] + S4XsyCLRWwVq[Kr7Auxfln] - '0';
            Kr7Auxfln = Kr7Auxfln -1;
            j = j + 1;
        };
    }
    if (lFpdZD7Si = -147) {
        Ucga5SVW7Q63[85] = '0';
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        Ucga5SVW7Q63[86] = '3';
    }
    if (S4XsyCLRWwVq[0] == '9' || (RrcYzo9ZUn == rrQBN01skY4 && igp2JjAhU[0] == '9')) {
        j = j + 1;
    }
    if (Ucga5SVW7Q63[j - 1] != '0') {
        Kr7Auxfln = j - 1;
        while (Kr7Auxfln >= 0) {
            printf ("%c", Ucga5SVW7Q63[Kr7Auxfln]);
            Kr7Auxfln--;
        };
    }
    else {
        {
            Kr7Auxfln = j - 1;
            while (Kr7Auxfln >= 0) {
                if (Ucga5SVW7Q63[Kr7Auxfln] != '0')
                    break;
                Kr7Auxfln--;
            };
        }
        {
            bPf7kG4R = Kr7Auxfln;
            while (bPf7kG4R >= 0) {
                printf ("%c", Ucga5SVW7Q63[bPf7kG4R]);
                bPf7kG4R--;
            };
        };
    }
    return 0;
}

