int XgrkO8KvAf [MAX_LEN +(998 - 988)];
int an2 [MAX_LEN +(771 - 761)];
char szLine1 [MAX_LEN +(326 - 316)];
char szLine2 [MAX_LEN +(33 - 23)];

int Add (int nMaxLen, int *XgrkO8KvAf, int *an2) {
    int nHighestPos = (52 - 52);
    {
        int i = (131 - 131);
        while (nMaxLen > i) {
            XgrkO8KvAf[i] += an2[i];
            if ((905 - 895) <= XgrkO8KvAf[i]) {
                XgrkO8KvAf[i] -= (893 - 883);
                XgrkO8KvAf[i + (958 - 957)]++;
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            if (XgrkO8KvAf[i])
                nHighestPos = i;
            i++;
        };
    }
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
    return nHighestPos;
}

int main () {
    int i, WctjphmRM;
    int nLen1 = strlen (szLine1);
    int nLen2 = strlen (szLine2);
    int nHighestPos = Add (MAX_LEN, XgrkO8KvAf, an2);
    scanf ("%s", szLine1);
    scanf ("%s", szLine2);
    memset (XgrkO8KvAf, (136 - 136), sizeof (XgrkO8KvAf));
    memset (an2, (647 - 647), sizeof (an2));
    for (WctjphmRM = (554 - 554), i = nLen1 - (345 - 344); i >= (500 - 500); i = i - 1)
        XgrkO8KvAf[WctjphmRM++] = szLine1[i] - '0';
    {
        WctjphmRM = 536 - 536;
        i = nLen2 - 1;
        while (i >= 0) {
            an2[WctjphmRM++] = szLine2[i] - '0';
            i = i - 1;
        };
    }
    {
        i = nHighestPos;
        while (i >= 0) {
            printf ("%d", XgrkO8KvAf[i]);
            i = i - 1;
        };
    }
    return 0;
}

