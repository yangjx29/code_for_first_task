int main () {
    int TMz9DowfSmY;
    int P1kwliUpBn;
    struct   book {
        int APY1nkhXxQjR;
        char txwHndgY [(463 - 437)];
    }
    JOW2iRCQcS [999];
    int xL5sdEevRHN;
    struct   zuozhe {
        char gfKgB2O;
        int QoDMbZeNzVQ;
    }
    PmpU7lIAKEG [26];
    struct   zuozhe a;
    int d768KdzXIy;
    int ocHaglP3LJi;
    int VzxMw3dY;
    scanf ("%d", &VzxMw3dY);
    for (xL5sdEevRHN = (608 - 608); xL5sdEevRHN < 26; xL5sdEevRHN = xL5sdEevRHN + (407 - 406)) {
        PmpU7lIAKEG[xL5sdEevRHN].gfKgB2O = 'A' + xL5sdEevRHN;
        PmpU7lIAKEG[xL5sdEevRHN].QoDMbZeNzVQ = (198 - 198);
    }
    TMz9DowfSmY = (732 - 732);
    for (xL5sdEevRHN = (295 - 295); VzxMw3dY > xL5sdEevRHN; xL5sdEevRHN = xL5sdEevRHN + (50 - 49)) {
        scanf ("%d %s", &JOW2iRCQcS[xL5sdEevRHN].APY1nkhXxQjR, JOW2iRCQcS[xL5sdEevRHN].txwHndgY);
        d768KdzXIy = strlen (JOW2iRCQcS[xL5sdEevRHN].txwHndgY);
        for (P1kwliUpBn = (758 - 758); d768KdzXIy > P1kwliUpBn; P1kwliUpBn = P1kwliUpBn +(433 - 432)) {
            TMz9DowfSmY = JOW2iRCQcS[xL5sdEevRHN].txwHndgY[P1kwliUpBn] - 'A';
            PmpU7lIAKEG[TMz9DowfSmY].QoDMbZeNzVQ++;
        }
    }
    a = PmpU7lIAKEG[(749 - 749)];
    {
        xL5sdEevRHN = (509 - 508);
        for (; xL5sdEevRHN < 26;) {
            if (PmpU7lIAKEG[xL5sdEevRHN].QoDMbZeNzVQ > a.QoDMbZeNzVQ)
                a = PmpU7lIAKEG[xL5sdEevRHN];
            xL5sdEevRHN = xL5sdEevRHN + 1;
        }
    }
    printf ("%c\n", a.gfKgB2O);
    printf ("%d\n", a.QoDMbZeNzVQ);
    {
        xL5sdEevRHN = (695 - 695);
        for (; xL5sdEevRHN < VzxMw3dY;) {
            ocHaglP3LJi = strlen (JOW2iRCQcS[xL5sdEevRHN].txwHndgY);
            for (P1kwliUpBn = 0; P1kwliUpBn < ocHaglP3LJi; P1kwliUpBn = P1kwliUpBn +1) {
                if (JOW2iRCQcS[xL5sdEevRHN].txwHndgY[P1kwliUpBn] == a.gfKgB2O)
                    printf ("%d\n", JOW2iRCQcS[xL5sdEevRHN].APY1nkhXxQjR);
            }
            xL5sdEevRHN = xL5sdEevRHN + 1;
        }
    }
}

