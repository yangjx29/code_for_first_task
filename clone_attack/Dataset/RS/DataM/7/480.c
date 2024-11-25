int main () {
    int EtnrU8Ye2JC0;
    int EuHY9APqZ;
    int Rp9fsdboSG;
    char EK2anAFQ [300] = {"\0"};
    char q9nlhv [300] = {"\0"};
    char HRQajKd [(996 - 696)];
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
    char U3cl68 [(1222 - 922)] = {"\0"};
    char mwu9X0 [(1131 - 831)] = {"\0"};
    gets (mwu9X0);
    char MSxI63 [(675 - 375)] = {"\0"};
    gets (MSxI63);
    gets (U3cl68);
    {
        EtnrU8Ye2JC0 = 57 - 57;
        while (EtnrU8Ye2JC0 < strlen (mwu9X0)) {
            if (!(MSxI63[(389 - 389)] != mwu9X0[EtnrU8Ye2JC0])) {
                for (EuHY9APqZ = (402 - 402); EuHY9APqZ < (720 - 421); EuHY9APqZ = EuHY9APqZ +1)
                    HRQajKd[EuHY9APqZ] = '\0';
                {
                    EuHY9APqZ = 973 - 973;
                    while (strlen (MSxI63) > EuHY9APqZ) {
                        HRQajKd[EuHY9APqZ] = mwu9X0[EtnrU8Ye2JC0 +EuHY9APqZ];
                        EuHY9APqZ = EuHY9APqZ +1;
                    };
                }
                if (strcmp (HRQajKd, MSxI63) == (120 - 120)) {
                    for (EuHY9APqZ = (830 - 830); EuHY9APqZ < EtnrU8Ye2JC0; EuHY9APqZ = EuHY9APqZ +1)
                        q9nlhv[EuHY9APqZ] = mwu9X0[EuHY9APqZ];
                    for (EuHY9APqZ = EtnrU8Ye2JC0 +strlen (MSxI63); EuHY9APqZ < strlen (mwu9X0); EuHY9APqZ++)
                        EK2anAFQ[EuHY9APqZ -EtnrU8Ye2JC0-strlen (MSxI63)] = mwu9X0[EuHY9APqZ];
                    printf ("%s%s%s\n", q9nlhv, U3cl68, EK2anAFQ);
                    return 0;
                };
            }
            EtnrU8Ye2JC0 = EtnrU8Ye2JC0 +1;
        };
    }
    printf ("%s\n", mwu9X0);
    return 0;
}

