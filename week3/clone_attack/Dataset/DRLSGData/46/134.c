int FEZwHb [100] [100] = {0};

int main () {
    int BniarB5g;
    int cqD2tpSkJljH;
    int hxnXdgG8t0WZ;
    void  Ulu6iNSc9 (char f7M3EAmQnZ, int tXH1NQ, int AU4P7bsCxwN, int U8SijU3FtK, int MX0uq1nK5b);
    int dT37WVHZ;
    int XMIG1XP;
    int d1i6JE;
    scanf ("%d%d", &BniarB5g, &d1i6JE);
    {
        hxnXdgG8t0WZ = 0;
        for (; hxnXdgG8t0WZ < BniarB5g;) {
            {
                dT37WVHZ = 0;
                for (; dT37WVHZ < d1i6JE;) {
                    scanf ("%d", &FEZwHb[hxnXdgG8t0WZ][dT37WVHZ]);
                    dT37WVHZ++;
                }
            }
            hxnXdgG8t0WZ++;
        }
    }
    Ulu6iNSc9 ('y', 0, 0, d1i6JE - 1, BniarB5g -1);
}

void  Ulu6iNSc9 (char f7M3EAmQnZ, int tXH1NQ, int AU4P7bsCxwN, int U8SijU3FtK, int MX0uq1nK5b) {
    int XMIG1XP;
    int cqD2tpSkJljH;
    int dT37WVHZ;
    int hxnXdgG8t0WZ;
    if (f7M3EAmQnZ == 'y') {
        {
            hxnXdgG8t0WZ = tXH1NQ;
            for (; hxnXdgG8t0WZ <= U8SijU3FtK;) {
                printf ("%d\n", FEZwHb[AU4P7bsCxwN][hxnXdgG8t0WZ]);
                hxnXdgG8t0WZ++;
            }
        }
        if (AU4P7bsCxwN != MX0uq1nK5b)
            Ulu6iNSc9 ('x', tXH1NQ, AU4P7bsCxwN +1, U8SijU3FtK, MX0uq1nK5b);
    }
    if (f7M3EAmQnZ == 'x') {
        {
            hxnXdgG8t0WZ = AU4P7bsCxwN;
            for (; hxnXdgG8t0WZ <= MX0uq1nK5b;) {
                printf ("%d\n", FEZwHb[hxnXdgG8t0WZ][U8SijU3FtK]);
                hxnXdgG8t0WZ++;
            }
        }
        if (tXH1NQ != U8SijU3FtK)
            Ulu6iNSc9 ('z', tXH1NQ, AU4P7bsCxwN, U8SijU3FtK -1, MX0uq1nK5b);
    }
    if (f7M3EAmQnZ == 'z') {
        {
            hxnXdgG8t0WZ = U8SijU3FtK;
            while (hxnXdgG8t0WZ >= tXH1NQ) {
                printf ("%d\n", FEZwHb[MX0uq1nK5b][hxnXdgG8t0WZ]);
                hxnXdgG8t0WZ--;
            }
        }
        if (AU4P7bsCxwN != MX0uq1nK5b)
            Ulu6iNSc9 ('s', tXH1NQ, AU4P7bsCxwN, U8SijU3FtK, MX0uq1nK5b -1);
    }
    if (f7M3EAmQnZ == 's') {
        {
            hxnXdgG8t0WZ = MX0uq1nK5b;
            while (hxnXdgG8t0WZ >= AU4P7bsCxwN) {
                printf ("%d\n", FEZwHb[hxnXdgG8t0WZ][tXH1NQ]);
                hxnXdgG8t0WZ--;
            }
        }
        if (tXH1NQ != U8SijU3FtK)
            Ulu6iNSc9 ('y', tXH1NQ + 1, AU4P7bsCxwN, U8SijU3FtK, MX0uq1nK5b);
    }
}

