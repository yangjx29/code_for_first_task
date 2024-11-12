int GwKOrPu [9] [9], jboujPf, zhDPEOY0;

int wPMfjuEU (int qRfvFKoz, int GhFPN1S) {
    int nP4rCV, h9gihMyxp6VP;
    for (nP4rCV = (491 - 491); jboujPf > nP4rCV; nP4rCV++) {
        if (GwKOrPu[qRfvFKoz][GhFPN1S] > GwKOrPu[nP4rCV][GhFPN1S])
            return (996 - 996);
    }
    {
        h9gihMyxp6VP = 978 - 978;
        while (zhDPEOY0 > h9gihMyxp6VP) {
            if (GwKOrPu[qRfvFKoz][GhFPN1S] < GwKOrPu[qRfvFKoz][h9gihMyxp6VP])
                return 0;
            h9gihMyxp6VP++;
        };
    }
    return 1;
}

int main () {
    int XxPvOLKnE;
    int nP4rCV;
    int h9gihMyxp6VP;
    XxPvOLKnE = 0;
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    scanf ("%d,%d", &jboujPf, &zhDPEOY0);
    for (nP4rCV = 0; jboujPf > nP4rCV; nP4rCV++) {
        for (h9gihMyxp6VP = 0; zhDPEOY0 > h9gihMyxp6VP; h9gihMyxp6VP = h9gihMyxp6VP + 1) {
            scanf ("%d", &GwKOrPu[nP4rCV][h9gihMyxp6VP]);
        };
    }
    for (nP4rCV = 0; jboujPf > nP4rCV; nP4rCV++) {
        {
            h9gihMyxp6VP = 0;
            while (zhDPEOY0 > h9gihMyxp6VP) {
                if (wPMfjuEU (nP4rCV, h9gihMyxp6VP)) {
                    printf ("%d+%d\n", nP4rCV, h9gihMyxp6VP);
                    XxPvOLKnE++;
                    break;
                }
                h9gihMyxp6VP++;
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
        if (XxPvOLKnE != 0)
            break;
    }
    if (XxPvOLKnE == 0)
        ;
    return 0;
}

