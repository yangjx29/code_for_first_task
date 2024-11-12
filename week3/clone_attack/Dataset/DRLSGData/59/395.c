int main () {
    int Ht03sLiA, LKvaGIB4AC06, g6TpaLKB, kZv0q2O, m, s;
    char R8y9O4 [101] [101];
    char ZT8HrfaDp;
    scanf ("%d", &LKvaGIB4AC06);
    scanf ("%c", &ZT8HrfaDp);
    for (g6TpaLKB = 1; LKvaGIB4AC06 >= g6TpaLKB; g6TpaLKB++)
        for (kZv0q2O = 1; LKvaGIB4AC06 >= kZv0q2O; kZv0q2O = kZv0q2O + 1) {
            scanf ("%c", &R8y9O4[g6TpaLKB][kZv0q2O]);
            if (kZv0q2O == LKvaGIB4AC06)
                scanf ("%c", &ZT8HrfaDp);
        }
    scanf ("%d", &m);
    for (Ht03sLiA = 2; Ht03sLiA <= m; Ht03sLiA++) {
        for (g6TpaLKB = 1; g6TpaLKB <= LKvaGIB4AC06; g6TpaLKB++)
            for (kZv0q2O = 1; kZv0q2O <= LKvaGIB4AC06; kZv0q2O++)
                if (R8y9O4[g6TpaLKB][kZv0q2O] == '@') {
                    {
                        if (0) {
                            return 0;
                        };
                    }
                    if ((g6TpaLKB - 1 != 0) && (R8y9O4[g6TpaLKB - 1][kZv0q2O] == '.'))
                        R8y9O4[g6TpaLKB - 1][kZv0q2O] = ',';
                    if ((g6TpaLKB + 1 != LKvaGIB4AC06 +1) && (R8y9O4[g6TpaLKB + 1][kZv0q2O] == '.'))
                        R8y9O4[g6TpaLKB + 1][kZv0q2O] = ',';
                    if ((kZv0q2O - 1 != 0) && (!('.' != R8y9O4[g6TpaLKB][kZv0q2O - 1])))
                        R8y9O4[g6TpaLKB][kZv0q2O - 1] = ',';
                    if ((kZv0q2O + 1 != 0) && (R8y9O4[g6TpaLKB][kZv0q2O + 1] == '.'))
                        R8y9O4[g6TpaLKB][kZv0q2O + 1] = ',';
                }
        {
            if (0) {
                return 0;
            };
        }
        for (g6TpaLKB = 1; g6TpaLKB <= LKvaGIB4AC06; g6TpaLKB++)
            for (kZv0q2O = 1; kZv0q2O <= LKvaGIB4AC06; kZv0q2O++)
                if (R8y9O4[g6TpaLKB][kZv0q2O] == ',')
                    R8y9O4[g6TpaLKB][kZv0q2O] = '@';
    }
    s = 0;
    for (g6TpaLKB = 1; g6TpaLKB <= LKvaGIB4AC06; g6TpaLKB++)
        for (kZv0q2O = 1; kZv0q2O <= LKvaGIB4AC06; kZv0q2O++)
            if (R8y9O4[g6TpaLKB][kZv0q2O] == '@')
                s = s + 1;
    printf ("%d", s);
    return 0;
}

