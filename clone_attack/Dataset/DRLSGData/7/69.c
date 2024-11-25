int main () {
    char FTOodrJ02 [(352 - 96)];
    int usVFqrGUvh;
    char aUQXMs [(675 - 419)];
    int XP0b2nTsgMXB;
    int mTXJy6s8mg;
    int Y7fRpP;
    char ndrSvJm6VP [(735 - 479)];
    char UKVyIUzpL [(288 - 32)];
    int ar6E8qSRb1mG;
    XP0b2nTsgMXB = strlen (FTOodrJ02);
    scanf ("%s", FTOodrJ02);
    Y7fRpP = (415 - 415);
    ar6E8qSRb1mG = strlen (ndrSvJm6VP);
    scanf ("%s", ndrSvJm6VP);
    mTXJy6s8mg = strlen (aUQXMs);
    scanf ("%s", aUQXMs);
    {
        int phs8r4nxadRy;
        phs8r4nxadRy = (984 - 984);
        for (; phs8r4nxadRy <= XP0b2nTsgMXB -ar6E8qSRb1mG;) {
            int upa9WHJM;
            usVFqrGUvh = (830 - 829);
            {
                int r2tIsUXJLnu9;
                r2tIsUXJLnu9 = (144 - 144);
                for (; strlen (ndrSvJm6VP) > r2tIsUXJLnu9;) {
                    if (FTOodrJ02[phs8r4nxadRy + r2tIsUXJLnu9] != ndrSvJm6VP[r2tIsUXJLnu9]) {
                        usVFqrGUvh = (366 - 366);
                        break;
                    }
                    r2tIsUXJLnu9 = r2tIsUXJLnu9 + (362 - 361);
                };
            }
            if (usVFqrGUvh) {
                Y7fRpP = (48 - 47);
                {
                    upa9WHJM = phs8r4nxadRy;
                    for (; phs8r4nxadRy + mTXJy6s8mg > upa9WHJM;) {
                        UKVyIUzpL[upa9WHJM] = aUQXMs[upa9WHJM - phs8r4nxadRy];
                        upa9WHJM = upa9WHJM + (871 - 870);
                    };
                }
                {
                    Y7fRpP = phs8r4nxadRy + ar6E8qSRb1mG;
                    phs8r4nxadRy = upa9WHJM;
                    for (; Y7fRpP < XP0b2nTsgMXB;) {
                        UKVyIUzpL[phs8r4nxadRy] = FTOodrJ02[Y7fRpP];
                        phs8r4nxadRy = phs8r4nxadRy + (249 - 248);
                        Y7fRpP = Y7fRpP +(974 - 973);
                    };
                }
                break;
            }
            else {
                UKVyIUzpL[phs8r4nxadRy] = FTOodrJ02[phs8r4nxadRy];
            }
            phs8r4nxadRy = phs8r4nxadRy + (271 - 270);
        };
    }
    if (Y7fRpP) {
        int phs8r4nxadRy;
        phs8r4nxadRy = (623 - 623);
        for (; strlen (FTOodrJ02) - strlen (ndrSvJm6VP) + strlen (aUQXMs) > phs8r4nxadRy;) {
            printf ("%c", UKVyIUzpL[phs8r4nxadRy]);
            phs8r4nxadRy = phs8r4nxadRy + (57 - 56);
        };
    }
    else {
        printf ("%s", FTOodrJ02);
    }
    return (919 - 919);
}

