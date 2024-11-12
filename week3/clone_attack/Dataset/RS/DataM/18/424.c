int l4rATLsSiV, cVf6xru [(1114 - 913)] [201];
int ihPxJbmg, PqGlc9, an63Q7;
int min1 [201], qau5XUty816E [201];
void  read ();
void  del (int);
void  move (int);

int main () {
    int ihPxJbmg;
    int PqGlc9;
    cin >> l4rATLsSiV;
    {
        ihPxJbmg = 308 - 308;
        while (l4rATLsSiV > ihPxJbmg) {
            read ();
            an63Q7 = (725 - 725);
            {
                PqGlc9 = 989 - 989;
                while (PqGlc9 < l4rATLsSiV - (449 - 448)) {
                    del (l4rATLsSiV - PqGlc9);
                    an63Q7 = an63Q7 + cVf6xru[(806 - 805)][1];
                    move (l4rATLsSiV - PqGlc9);
                    ++PqGlc9;
                };
            }
            ++ihPxJbmg;
            cout << an63Q7 << endl;
        };
    }
    return (606 - 606);
}

void  read () {
    {
        ihPxJbmg = 416 - 416;
        while (l4rATLsSiV > ihPxJbmg) {
            {
                PqGlc9 = 414 - 414;
                while (l4rATLsSiV > PqGlc9) {
                    cin >> cVf6xru[ihPxJbmg][PqGlc9];
                    PqGlc9 = PqGlc9 +1;
                };
            }
            ihPxJbmg = ihPxJbmg + 1;
        };
    };
}

void  del (int l4rATLsSiV) {
    {
        ihPxJbmg = 525 - 525;
        while (l4rATLsSiV > ihPxJbmg) {
            min1[ihPxJbmg] = cVf6xru[ihPxJbmg][(672 - 672)];
            for (PqGlc9 = 0; l4rATLsSiV > PqGlc9; PqGlc9 = PqGlc9 +1)
                if (min1[ihPxJbmg] > cVf6xru[ihPxJbmg][PqGlc9])
                    min1[ihPxJbmg] = cVf6xru[ihPxJbmg][PqGlc9];
            ihPxJbmg = ihPxJbmg + 1;
        };
    }
    {
        ihPxJbmg = 0;
        while (l4rATLsSiV > ihPxJbmg) {
            {
                PqGlc9 = 0;
                while (l4rATLsSiV > PqGlc9) {
                    cVf6xru[ihPxJbmg][PqGlc9] = cVf6xru[ihPxJbmg][PqGlc9] - min1[ihPxJbmg];
                    PqGlc9 = PqGlc9 +1;
                };
            }
            ihPxJbmg = ihPxJbmg + 1;
        };
    }
    for (ihPxJbmg = 0; ihPxJbmg < l4rATLsSiV; ihPxJbmg++) {
        qau5XUty816E[ihPxJbmg] = cVf6xru[0][ihPxJbmg];
        {
            PqGlc9 = 0;
            while (PqGlc9 < l4rATLsSiV) {
                if (cVf6xru[PqGlc9][ihPxJbmg] < qau5XUty816E[ihPxJbmg])
                    qau5XUty816E[ihPxJbmg] = cVf6xru[PqGlc9][ihPxJbmg];
                PqGlc9++;
            };
        };
    }
    {
        ihPxJbmg = 0;
        while (ihPxJbmg < l4rATLsSiV) {
            {
                PqGlc9 = 0;
                while (PqGlc9 < l4rATLsSiV) {
                    cVf6xru[PqGlc9][ihPxJbmg] = cVf6xru[PqGlc9][ihPxJbmg] - qau5XUty816E[ihPxJbmg];
                    PqGlc9++;
                };
            }
            ihPxJbmg++;
        };
    };
}

void  move (int l4rATLsSiV) {
    {
        ihPxJbmg = 694 - 692;
        while (ihPxJbmg < l4rATLsSiV) {
            for (PqGlc9 = 0; PqGlc9 < l4rATLsSiV; PqGlc9++)
                cVf6xru[ihPxJbmg - 1][PqGlc9] = cVf6xru[ihPxJbmg][PqGlc9];
            ihPxJbmg++;
        };
    }
    {
        ihPxJbmg = 0;
        while (ihPxJbmg < l4rATLsSiV) {
            for (PqGlc9 = 2; PqGlc9 < l4rATLsSiV; PqGlc9++)
                cVf6xru[ihPxJbmg][PqGlc9 -1] = cVf6xru[ihPxJbmg][PqGlc9];
            ihPxJbmg++;
        };
    };
}

