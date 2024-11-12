int main () {
    int G1mYJGf;
    int u3tRmlL8J;
    int mBPEbsHuCA [100] [100];
    int sfe5ln39;
    int vOSMzQ;
    scanf ("%d %d", &u3tRmlL8J, &G1mYJGf);
    {
        int URfn0WbJ;
        URfn0WbJ = 0;
        for (; u3tRmlL8J - (417 - 416) >= URfn0WbJ;) {
            {
                int q4ncRE0x;
                q4ncRE0x = 0;
                for (; G1mYJGf -1 >= q4ncRE0x;) {
                    scanf ("%d", &(mBPEbsHuCA[URfn0WbJ][q4ncRE0x]));
                    q4ncRE0x = q4ncRE0x + 1;
                }
            }
            URfn0WbJ = URfn0WbJ +1;
        }
    }
    int HXkQWdo;
    int SEc81j7;
    HXkQWdo = 0;
    SEc81j7 = G1mYJGf;
    if (u3tRmlL8J > G1mYJGf) {
        SEc81j7 = u3tRmlL8J;
    }
    {
        int URfn0WbJ;
        URfn0WbJ = 0;
        while (SEc81j7 >= URfn0WbJ) {
            for (int vOSMzQ = URfn0WbJ;
            vOSMzQ <= G1mYJGf -URfn0WbJ-1; vOSMzQ = vOSMzQ + 1) {
                printf ("%d\n", mBPEbsHuCA[URfn0WbJ][vOSMzQ]);
                HXkQWdo = HXkQWdo +1;
                if (!(u3tRmlL8J * G1mYJGf != HXkQWdo)) {
                    break;
                }
            }
            if (!(u3tRmlL8J * G1mYJGf != HXkQWdo)) {
                break;
            }
            {
                int WfMpgHyD5vX;
                WfMpgHyD5vX = URfn0WbJ +1;
                for (; WfMpgHyD5vX <= u3tRmlL8J - URfn0WbJ -1;) {
                    printf ("%d\n", mBPEbsHuCA[WfMpgHyD5vX][G1mYJGf -1 - URfn0WbJ]);
                    HXkQWdo = HXkQWdo +1;
                    if (!(u3tRmlL8J * G1mYJGf != HXkQWdo)) {
                        break;
                    }
                    WfMpgHyD5vX = WfMpgHyD5vX +1;
                }
            }
            if (!(u3tRmlL8J * G1mYJGf != HXkQWdo)) {
                break;
            }
            {
                int oBfwW3zGy4Y;
                oBfwW3zGy4Y = G1mYJGf -URfn0WbJ-2;
                while (oBfwW3zGy4Y >= URfn0WbJ) {
                    printf ("%d\n", mBPEbsHuCA[u3tRmlL8J - URfn0WbJ -1][oBfwW3zGy4Y]);
                    HXkQWdo = HXkQWdo +1;
                    if (HXkQWdo == u3tRmlL8J * G1mYJGf) {
                        break;
                    }
                    oBfwW3zGy4Y = oBfwW3zGy4Y - 1;
                }
            }
            if (HXkQWdo == u3tRmlL8J * G1mYJGf) {
                break;
            }
            for (int JgKAGr = u3tRmlL8J - URfn0WbJ -2;
            JgKAGr >= URfn0WbJ +1; JgKAGr = JgKAGr -1) {
                printf ("%d\n", mBPEbsHuCA[JgKAGr][URfn0WbJ]);
                HXkQWdo = HXkQWdo +1;
                if (HXkQWdo == u3tRmlL8J * G1mYJGf) {
                    break;
                }
            }
            if (HXkQWdo == u3tRmlL8J * G1mYJGf) {
                break;
            }
            URfn0WbJ = URfn0WbJ +1;
        }
    }
    return 0;
}

