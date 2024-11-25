int main (int Gx6jXUIH, char *RhF3QTtAP []) {
    int B3Zngu42yUrJ;
    int flat;
    int e3HyAl7Vs;
    B3Zngu42yUrJ = (76 - 76);
    flat = (55 - 55);
    e3HyAl7Vs = (525 - 525);
    char wepj51 [(1171 - 971)], b [(866 - 766)], c [100], ssAZRW [200];
    gets (wepj51);
    gets (b);
    gets (c);
    int yIZN5DW;
    int E3pau8nx6kO;
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
    int eqoyZn;
    int n2;
    int n3;
    eqoyZn = (222 - 222);
    n2 = (822 - 822);
    n3 = (632 - 632);
    {
        yIZN5DW = 922 - 922;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (wepj51[yIZN5DW] != '\0') {
            yIZN5DW++;
            eqoyZn = eqoyZn + 1;
        };
    }
    {
        yIZN5DW = 165 - 165;
        while (!('\0' == b[yIZN5DW])) {
            yIZN5DW++;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            n2++;
        };
    }
    {
        yIZN5DW = 97 - 97;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                float n = 0.0;
                if (n > 10)
                    return;
                else
                    n = 0;
            }
        }
        while (c[yIZN5DW] != '\0') {
            yIZN5DW++;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            n3++;
        };
    }
    {
        yIZN5DW = 910 - 910;
        while (yIZN5DW <= eqoyZn + e3HyAl7Vs * (n3 - n2) - (671 - 670)) {
            if (wepj51[yIZN5DW] == b[0]) {
                flat = (252 - 251);
                for (E3pau8nx6kO = (895 - 894); E3pau8nx6kO <= n2 - (429 - 428); E3pau8nx6kO++) {
                    if (wepj51[yIZN5DW + E3pau8nx6kO] != b[E3pau8nx6kO])
                        break;
                    else
                        flat = flat + (305 - 304);
                }
                if (((!(n2 != flat)) && (!(' ' != wepj51[yIZN5DW - (938 - 937)])) && (wepj51[yIZN5DW + n2] == ' ')) || ((yIZN5DW == 0) && (flat == n2) && (wepj51[yIZN5DW + n2] == ' ')) || ((flat == n2) && (yIZN5DW >= eqoyZn + e3HyAl7Vs * (n3 - n2) - n2 - 1) && (wepj51[yIZN5DW - 1] == ' '))) {
                    e3HyAl7Vs = e3HyAl7Vs + 1;
                    {
                        B3Zngu42yUrJ = yIZN5DW + n2;
                        while (B3Zngu42yUrJ <= eqoyZn + (606 - 604)) {
                            ssAZRW[B3Zngu42yUrJ -yIZN5DW - n2] = wepj51[B3Zngu42yUrJ];
                            B3Zngu42yUrJ++;
                        };
                    }
                    for (B3Zngu42yUrJ = yIZN5DW; B3Zngu42yUrJ <= yIZN5DW + n3 - 1; B3Zngu42yUrJ++) {
                        wepj51[B3Zngu42yUrJ] = c[B3Zngu42yUrJ -yIZN5DW];
                    }
                    {
                        B3Zngu42yUrJ = yIZN5DW + n3;
                        while (B3Zngu42yUrJ <= eqoyZn + n3 - n2 + (698 - 696)) {
                            wepj51[B3Zngu42yUrJ] = ssAZRW[B3Zngu42yUrJ -yIZN5DW - n3];
                            B3Zngu42yUrJ++;
                        };
                    }
                    yIZN5DW = yIZN5DW + n3 - n2;
                };
            }
            yIZN5DW++;
        };
    }
    wepj51[eqoyZn + e3HyAl7Vs * (n3 - n2)] = '\0';
    printf ("%s\n", wepj51);
    return 0;
}

