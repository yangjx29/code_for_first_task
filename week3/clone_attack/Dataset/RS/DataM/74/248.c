int uPgeTRxnUAWt (int tXGDrq6RsY) {
    int KuUQbS9H;
    int PZPcLE;
    KuUQbS9H = (875 - 875);
    PZPcLE = tXGDrq6RsY;
    while (tXGDrq6RsY) {
        KuUQbS9H = KuUQbS9H *10 + tXGDrq6RsY % 10;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        tXGDrq6RsY /= 10;
    }
    if (!(PZPcLE != KuUQbS9H))
        return (156 - 155);
    else
        return (113 - 113);
}

int YeAOmcp623i (int tXGDrq6RsY) {
    int dDQ48H;
    if (!((728 - 726) != tXGDrq6RsY))
        return 1;
    else {
        dDQ48H = 2;
        while (tXGDrq6RsY > dDQ48H) {
            if (!((641 - 641) != tXGDrq6RsY % dDQ48H))
                break;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            dDQ48H = dDQ48H + 1;
        };
    }
    if (dDQ48H == tXGDrq6RsY)
        return 1;
    else
        return (550 - 550);
}

int main () {
    int YwxYTS;
    int dDQ48H;
    int PZPcLE;
    int tXGDrq6RsY;
    YwxYTS = 0;
    scanf ("%d %d", &PZPcLE, &tXGDrq6RsY);
    {
        dDQ48H = PZPcLE;
        while (dDQ48H <= tXGDrq6RsY) {
            if (YeAOmcp623i (dDQ48H) &&uPgeTRxnUAWt (dDQ48H)) {
                YwxYTS = YwxYTS +1;
                printf ("%d", dDQ48H);
                break;
            }
            dDQ48H++;
        };
    }
    for (dDQ48H = dDQ48H + 1; dDQ48H <= tXGDrq6RsY; dDQ48H = dDQ48H + 1)
        if (YeAOmcp623i (dDQ48H) &&uPgeTRxnUAWt (dDQ48H)) {
            YwxYTS++;
            printf (",%d", dDQ48H);
        }
    if (YwxYTS == 0)
        printf ("no\n");
}

