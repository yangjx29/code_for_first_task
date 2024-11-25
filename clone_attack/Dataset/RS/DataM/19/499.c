int main () {
    char l5RvkpDGrP6 [200];
    char ha1VEZIPA [200];
    char CzA1YBPR [200] [20];
    char vEV4Yt9h [2000];
    int AiSsRlpe59;
    int Rskbgl67Fwe;
    int i;
    int mTm5ZptN9CzO;
    AiSsRlpe59 = 0;
    Rskbgl67Fwe = 0;
    gets (vEV4Yt9h);
    scanf ("%s %s", l5RvkpDGrP6, ha1VEZIPA);
    mTm5ZptN9CzO = strlen (vEV4Yt9h);
    for (i = 0; i < mTm5ZptN9CzO; i++) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (vEV4Yt9h[i] != ' ') {
            CzA1YBPR[AiSsRlpe59][Rskbgl67Fwe] = vEV4Yt9h[i];
            Rskbgl67Fwe++;
        }
        else {
            CzA1YBPR[AiSsRlpe59][Rskbgl67Fwe] = 0;
            AiSsRlpe59++;
            Rskbgl67Fwe = 0;
        };
    }
    CzA1YBPR[AiSsRlpe59][Rskbgl67Fwe] = 0;
    for (i = 0; i < AiSsRlpe59; i++) {
        if (strcmp (CzA1YBPR[i], l5RvkpDGrP6) == 0) {
            printf ("%s ", ha1VEZIPA);
        }
        else {
            printf ("%s ", CzA1YBPR[i]);
        };
    }
    if (strcmp (CzA1YBPR[AiSsRlpe59], l5RvkpDGrP6) == 0) {
        printf ("%s\n", ha1VEZIPA);
    }
    else {
        printf ("%s\n", CzA1YBPR[i]);
    }
    return 0;
}

