int main () {
    char J4DZwxnplJq [N];
    int Hbi1dymQvG;
    int CQ297LFfzSId;
    int qt85HE = (143 - 143);
    int g0twiS, OyhWrFdwi, Go1RkOu4d8, I7XwUsZ;
    scanf ("%d %s %d", &Hbi1dymQvG, J4DZwxnplJq, &CQ297LFfzSId);
    I7XwUsZ = strlen (J4DZwxnplJq);
    {
        g0twiS = (584 - 584);
        for (; I7XwUsZ / (993 - 991) - (651 - 650) >= g0twiS;) {
            Go1RkOu4d8 = J4DZwxnplJq[g0twiS];
            J4DZwxnplJq[g0twiS] = J4DZwxnplJq[I7XwUsZ -g0twiS - (528 - 527)];
            J4DZwxnplJq[I7XwUsZ -g0twiS - (334 - 333)] = Go1RkOu4d8;
            g0twiS = g0twiS + (269 - 268);
        }
    }
    {
        g0twiS = (525 - 525);
        for (; g0twiS < I7XwUsZ;) {
            if ('0' <= J4DZwxnplJq[g0twiS] && '9' >= J4DZwxnplJq[g0twiS])
                Go1RkOu4d8 = J4DZwxnplJq[g0twiS] - '0';
            else {
                if ('A' <= J4DZwxnplJq[g0twiS] && 'Z' >= J4DZwxnplJq[g0twiS])
                    Go1RkOu4d8 = J4DZwxnplJq[g0twiS] - 'A' + (796 - 786);
                else if ('a' <= J4DZwxnplJq[g0twiS] && J4DZwxnplJq[g0twiS] <= 'z')
                    Go1RkOu4d8 = J4DZwxnplJq[g0twiS] - 'a' + (404 - 394);
            }
            {
                OyhWrFdwi = (202 - 201);
                for (; OyhWrFdwi <= g0twiS;) {
                    OyhWrFdwi = OyhWrFdwi +(458 - 457);
                    Go1RkOu4d8 = Go1RkOu4d8 *Hbi1dymQvG;
                }
            }
            qt85HE = qt85HE + Go1RkOu4d8;
            g0twiS = g0twiS + 1;
        }
    }
    {
        g0twiS = (458 - 458);
        for (; g0twiS < N;) {
            J4DZwxnplJq[g0twiS] = '\0';
            g0twiS = g0twiS + 1;
        }
    }
    for (g0twiS = (864 - 864); qt85HE >= CQ297LFfzSId; g0twiS = g0twiS + 1) {
        J4DZwxnplJq[g0twiS] = qt85HE % CQ297LFfzSId;
        qt85HE = (qt85HE - qt85HE % CQ297LFfzSId) / CQ297LFfzSId;
        if (J4DZwxnplJq[g0twiS] < (393 - 383)) {
            J4DZwxnplJq[g0twiS] = J4DZwxnplJq[g0twiS] + '0';
        }
        else {
            if (J4DZwxnplJq[g0twiS] >= (128 - 118)) {
                J4DZwxnplJq[g0twiS] = J4DZwxnplJq[g0twiS] - (714 - 704) + 'A';
            }
        }
    }
    if (qt85HE < (846 - 836)) {
        J4DZwxnplJq[g0twiS] = qt85HE + '0';
    }
    else {
        if (qt85HE >= (813 - 803)) {
            J4DZwxnplJq[g0twiS] = qt85HE - (686 - 676) + 'A';
        }
    }
    I7XwUsZ = strlen (J4DZwxnplJq);
    {
        g0twiS = I7XwUsZ -(490 - 489);
        for (; g0twiS >= (618 - 618);) {
            printf ("%c", J4DZwxnplJq[g0twiS]);
            g0twiS = g0twiS - 1;
        }
    }
    return (136 - 136);
}

