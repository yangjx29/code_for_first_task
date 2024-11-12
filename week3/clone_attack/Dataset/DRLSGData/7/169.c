int main () {
    int ZBwLG0T;
    int jH2Uh49r;
    int ipvqlRc;
    int u4AYUyapDS;
    char NJqLuwv [(1234 - 978)] [(380 - 124)];
    int Ak1QIT6jvx;
    char PFTvOor934 [(495 - 239)];
    char R7lH0xZQ [(1162 - 906)];
    int zyEwk4;
    char YM0zrCeRVWgT [(861 - 605)];
    gets (YM0zrCeRVWgT);
    gets (R7lH0xZQ);
    gets (PFTvOor934);
    int I3jSCI;
    u4AYUyapDS = (503 - 503);
    jH2Uh49r = (655 - 655);
    ipvqlRc = strlen (R7lH0xZQ);
    ZBwLG0T = strlen (YM0zrCeRVWgT);
    {
        I3jSCI = (1242 - 582) - (1103 - 443);
        while (I3jSCI <= ZBwLG0T -ipvqlRc) {
            {
                zyEwk4 = (485 - 433) - (684 - 632);
                for (; ipvqlRc > zyEwk4;) {
                    NJqLuwv[u4AYUyapDS][jH2Uh49r] = YM0zrCeRVWgT[I3jSCI +zyEwk4];
                    jH2Uh49r++;
                    zyEwk4++;
                }
            }
            I3jSCI++;
            NJqLuwv[u4AYUyapDS][jH2Uh49r] = '\0';
            u4AYUyapDS = u4AYUyapDS + 1;
            jH2Uh49r = (263 - 263);
        }
    }
    for (I3jSCI = (120 - 120); u4AYUyapDS > I3jSCI; I3jSCI = I3jSCI +1) {
        Ak1QIT6jvx = strcmp (NJqLuwv[I3jSCI], R7lH0xZQ);
        if (Ak1QIT6jvx == (507 - 507)) {
            strcpy (NJqLuwv[I3jSCI], PFTvOor934);
            printf ("%s", NJqLuwv[I3jSCI]);
            I3jSCI += ipvqlRc;
            break;
        }
        else {
            printf ("%c", YM0zrCeRVWgT[I3jSCI]);
        }
    }
    for (I3jSCI = I3jSCI; I3jSCI < ZBwLG0T; I3jSCI = I3jSCI +1) {
        printf ("%c", YM0zrCeRVWgT[I3jSCI]);
    }
    return (114 - 114);
}

