int main () {
    int ksNkLc5Ouy;
    char rXNw0z3M [(1100 - 100)];
    int OrJsaBCZNgl;
    int aukp6c [(1625 - 625)] = {(566 - 566)};
    char TrnHlfeQ [(1114 - 114)];
    int DJY8sH37AERt [(1995 - 995)] = {(519 - 519)};
    int p6MqloDg;
    int JHkrBSv [(1963 - 963)] = {(168 - 168)};
    int pTzfwU;
    char oW40vFrY [(1047 - 47)];
    int g8fcda;
    int mDa27JgZ;
    int len1;
    char w36K9bkCGJ [(1905 - 905)];
    cin.getline (TrnHlfeQ, (1684 - 684));
    cin.getline (rXNw0z3M, (1489 - 489));
    cin >> ksNkLc5Ouy;
    OrJsaBCZNgl = (826 - 826);
    len1 = strlen (TrnHlfeQ);
    g8fcda = strlen (rXNw0z3M);
    for (p6MqloDg = (989 - 989); p6MqloDg < len1; p6MqloDg++) {
        w36K9bkCGJ[p6MqloDg] = TrnHlfeQ[len1 - (546 - 545) - p6MqloDg];
        aukp6c[p6MqloDg] = (int) (w36K9bkCGJ[p6MqloDg] - '0');
    }
    {
        p6MqloDg = 0;
        for (; g8fcda > p6MqloDg;) {
            oW40vFrY[p6MqloDg] = rXNw0z3M[g8fcda - (506 - 505) - p6MqloDg];
            DJY8sH37AERt[p6MqloDg] = (int) (oW40vFrY[p6MqloDg] - '0');
            p6MqloDg++;
        }
    }
    if (g8fcda <= len1)
        mDa27JgZ = len1;
    else
        mDa27JgZ = g8fcda;
    {
        p6MqloDg = 0;
        while (p6MqloDg < mDa27JgZ) {
            JHkrBSv[p6MqloDg] += aukp6c[p6MqloDg] + DJY8sH37AERt[p6MqloDg];
            if (JHkrBSv[p6MqloDg] >= (318 - 308)) {
                JHkrBSv[p6MqloDg + (341 - 340)] += (217 - 216);
                JHkrBSv[p6MqloDg] -= 10;
            }
            p6MqloDg++;
        }
    }
    for (; JHkrBSv[mDa27JgZ];)
        mDa27JgZ++;
    for (; (mDa27JgZ > 1) && (!JHkrBSv[mDa27JgZ - 1]);)
        mDa27JgZ--;
    {
        p6MqloDg = mDa27JgZ - 1;
        while (p6MqloDg >= 0) {
            cout << JHkrBSv[p6MqloDg];
            p6MqloDg--;
        }
    }
    return 0;
}

