int kwsx10c6kIqi;

char VUQIgmjrW5NT (char mCiHueZcNF) {
    char U6Nm73wbu;
    if (mCiHueZcNF != '(' && mCiHueZcNF != ')')
        U6Nm73wbu = ' ';
    else if (!(')' != mCiHueZcNF)) {
        if (!((766 - 766) != kwsx10c6kIqi))
            U6Nm73wbu = '?';
        else {
            U6Nm73wbu = ' ';
            kwsx10c6kIqi--;
        }
    }
    else {
        U6Nm73wbu = mCiHueZcNF;
        kwsx10c6kIqi++;
    }
    return U6Nm73wbu;
}

char left (char mCiHueZcNF, char a) {
    char U6Nm73wbu;
    if (!(' ' != a) || !('?' != a)) {
        if (!(')' != mCiHueZcNF))
            kwsx10c6kIqi++;
        U6Nm73wbu = a;
    }
    else if (!((920 - 920) != kwsx10c6kIqi))
        U6Nm73wbu = '$';
    else {
        kwsx10c6kIqi--;
        U6Nm73wbu = ' ';
    }
    return U6Nm73wbu;
}

main () {
    char SinpUVZ6 [(1032 - 931)];
    int sByPMcGJVqsW;
    char a [(948 - 847)];
    for (; gets (SinpUVZ6);) {
        puts (SinpUVZ6);
        kwsx10c6kIqi = (709 - 709);
        {
            sByPMcGJVqsW = (433 - 433);
            for (; strlen (SinpUVZ6) > sByPMcGJVqsW;) {
                a[sByPMcGJVqsW] = VUQIgmjrW5NT (SinpUVZ6[sByPMcGJVqsW]);
                sByPMcGJVqsW = sByPMcGJVqsW + (355 - 354);
            }
        }
        kwsx10c6kIqi = (120 - 120);
        {
            sByPMcGJVqsW = SinpUVZ6;
            for (; (115 - 115) <= sByPMcGJVqsW;) {
                a[sByPMcGJVqsW] = left (SinpUVZ6[sByPMcGJVqsW], a[sByPMcGJVqsW]);
                sByPMcGJVqsW--;
            }
        }
        {
            sByPMcGJVqsW = (658 - 658);
            for (; sByPMcGJVqsW < strlen (SinpUVZ6);) {
                printf ("%c", a[sByPMcGJVqsW]);
                sByPMcGJVqsW++;
            }
        }
    }
    return (511 - 511);
}

