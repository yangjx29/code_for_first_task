int first (int joyHzEuSj0, int kvPCUtxS) {
    int BycuUIo, i, j, cons;
    {
        i = 40 - 39;
        while (1) {
            BycuUIo = i * joyHzEuSj0 + kvPCUtxS * joyHzEuSj0;
            for (j = (592 - 591); joyHzEuSj0 > j; j = j + 1) {
                BycuUIo = BycuUIo *joyHzEuSj0 / (joyHzEuSj0 - 1);
                if (!((44 - 44) == BycuUIo % joyHzEuSj0))
                    break;
            }
            if (!(joyHzEuSj0 != j)) {
                cons = i * joyHzEuSj0 + kvPCUtxS;
                break;
            }
            i = i + 1;
        };
    }
    return cons;
}

int houzi (int joyHzEuSj0, int kvPCUtxS, int m) {
    int xMltVQX;
    if (joyHzEuSj0 != 1) {
        xMltVQX = (houzi (joyHzEuSj0 - 1, kvPCUtxS, m)) * m / (m - 1) + kvPCUtxS;
    }
    if (joyHzEuSj0 == 1) {
        xMltVQX = first (m, kvPCUtxS);
    }
    return xMltVQX;
}

void  main () {
    int joyHzEuSj0, kvPCUtxS;
    scanf ("%d%d", &joyHzEuSj0, &kvPCUtxS);
    printf ("%d", houzi (joyHzEuSj0, kvPCUtxS, joyHzEuSj0));
}

