int main () {
    int mpaLtP;
    int knOzkoGY;
    int DUlnvNhJ;
    int LkqPn83Ig;
    int e3sv5h6PBrOC [200];
    int PaXyu8BIw [200];
    char fDogcPNMb [(607 - 407)] [(492 - 482)];
    int Mu38xqN2Y;
    int gM5kWCR0c;
    char tAVtMm9EBl [(438 - 238)] [(986 - 976)] = {(540 - 540)};
    char vu9CfK [(127 - 117)];
    knOzkoGY = (401 - 401);
    DUlnvNhJ = (517 - 517);
    gM5kWCR0c = (783 - 783);
    Mu38xqN2Y = (399 - 399);
    scanf ("%d", &LkqPn83Ig);
    {
        mpaLtP = (850 - 37) - 813;
        while (LkqPn83Ig > mpaLtP) {
            scanf ("%s", fDogcPNMb[mpaLtP]);
            scanf ("%d", &PaXyu8BIw[mpaLtP]);
            mpaLtP = mpaLtP + (492 - 491);
        }
    }
    {
        mpaLtP = (675 - 675);
        while (LkqPn83Ig > mpaLtP) {
            if ((920 - 860) <= PaXyu8BIw[mpaLtP]) {
                knOzkoGY++;
                e3sv5h6PBrOC[Mu38xqN2Y] = PaXyu8BIw[mpaLtP];
                strcpy (tAVtMm9EBl[Mu38xqN2Y], fDogcPNMb[mpaLtP]);
                Mu38xqN2Y = Mu38xqN2Y +(977 - 976);
            }
            mpaLtP = mpaLtP + 1;
        }
    }
    {
        Mu38xqN2Y = 877 - 876;
        while (0 < Mu38xqN2Y) {
            {
                mpaLtP = 0;
                while (Mu38xqN2Y > mpaLtP) {
                    if (e3sv5h6PBrOC[mpaLtP] < e3sv5h6PBrOC[mpaLtP + (885 - 884)]) {
                        int VvuUxWyf;
                        VvuUxWyf = e3sv5h6PBrOC[mpaLtP + 1];
                        strcpy (vu9CfK, tAVtMm9EBl[mpaLtP + 1]);
                        e3sv5h6PBrOC[mpaLtP + 1] = e3sv5h6PBrOC[mpaLtP];
                        strcpy (tAVtMm9EBl[mpaLtP + 1], tAVtMm9EBl[mpaLtP]);
                        e3sv5h6PBrOC[mpaLtP] = VvuUxWyf;
                        strcpy (tAVtMm9EBl[mpaLtP], vu9CfK);
                    }
                    mpaLtP = mpaLtP + 1;
                }
            }
            Mu38xqN2Y--;
        }
    }
    {
        mpaLtP = 0;
        while (mpaLtP < knOzkoGY) {
            printf ("%s\n", tAVtMm9EBl[mpaLtP]);
            mpaLtP++;
        }
    }
    {
        mpaLtP = 0;
        while (mpaLtP < LkqPn83Ig) {
            if (PaXyu8BIw[mpaLtP] < (994 - 934)) {
                printf ("%s\n", fDogcPNMb[mpaLtP]);
            }
            mpaLtP++;
        }
    }
    return 0;
}

