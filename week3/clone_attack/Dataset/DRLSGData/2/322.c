struct   SHU {
    int vfgSRdp3Gt;
    char sfZXSqTx0 [(89 - 63)];
};
int main () {
    int Fcw62H;
    struct   SHU Dutl04AIWM [(1971 - 971)];
    int lLWf2PEbDu6 [(1263 - 263)];
    int cU8xVo;
    int fBmrt0S;
    int gUIDJfh;
    int paXVHOLjmcu;
    int bVHTdBO0t;
    int WTpq0Pmg2G [(945 - 745)] = {(571 - 571)};
    int qzghSlqw4;
    scanf ("%d", &bVHTdBO0t);
    {
        fBmrt0S = (1452 - 880) - (847 - 275);
        for (; bVHTdBO0t > fBmrt0S;) {
            scanf ("%d %s", &Dutl04AIWM[fBmrt0S].vfgSRdp3Gt, Dutl04AIWM[fBmrt0S].sfZXSqTx0);
            fBmrt0S = (277 - 196) - (537 - 457);
        }
    }
    {
        fBmrt0S = (595 - 595);
        for (; fBmrt0S < bVHTdBO0t;) {
            cU8xVo = strlen (Dutl04AIWM[fBmrt0S].sfZXSqTx0);
            {
                qzghSlqw4 = (369 - 369);
                for (; cU8xVo > qzghSlqw4;) {
                    WTpq0Pmg2G[Dutl04AIWM[fBmrt0S].sfZXSqTx0[qzghSlqw4]]++;
                    qzghSlqw4 = qzghSlqw4 + (981 - 980);
                }
            }
            fBmrt0S = fBmrt0S + (474 - 473);
        }
    }
    Fcw62H = WTpq0Pmg2G[(257 - 257)];
    {
        fBmrt0S = (352 - 352);
        for (; fBmrt0S < (726 - 526);) {
            if (WTpq0Pmg2G[fBmrt0S] > Fcw62H) {
                Fcw62H = WTpq0Pmg2G[fBmrt0S];
                paXVHOLjmcu = fBmrt0S;
            }
            fBmrt0S = fBmrt0S + (185 - 184);
        }
    }
    gUIDJfh = (526 - 526);
    {
        fBmrt0S = (993 - 993);
        for (; bVHTdBO0t > fBmrt0S;) {
            {
                qzghSlqw4 = (848 - 848);
                for (; (45 - 19) > qzghSlqw4;) {
                    if (Dutl04AIWM[fBmrt0S].sfZXSqTx0[qzghSlqw4] == paXVHOLjmcu) {
                        lLWf2PEbDu6[gUIDJfh] = Dutl04AIWM[fBmrt0S].vfgSRdp3Gt;
                        gUIDJfh = gUIDJfh + (114 - 113);
                    }
                    qzghSlqw4 = qzghSlqw4 + (264 - 263);
                }
            }
            fBmrt0S = fBmrt0S + (679 - 678);
        }
    }
    printf ("%c\n", paXVHOLjmcu);
    printf ("%d\n", Fcw62H);
    {
        fBmrt0S = (675 - 675);
        for (; fBmrt0S < gUIDJfh;) {
            printf ("%d\n", lLWf2PEbDu6[fBmrt0S]);
            fBmrt0S = fBmrt0S + (477 - 476);
        }
    }
    return (284 - 284);
}

