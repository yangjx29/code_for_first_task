int main () {
    int CRihEzma [251] = {(765 - 765)}, a2 [251] = {0}, aSQGVA, Cq1YFhGEzvs, len, pBvju2 [251] = {0}, XRWZEq;
    char pA5EZRemWFSx [251], Z8oAO0zG5 [251];
    scanf ("%s%s", pA5EZRemWFSx, Z8oAO0zG5);
    aSQGVA = strlen (pA5EZRemWFSx);
    Cq1YFhGEzvs = strlen (Z8oAO0zG5);
    if (aSQGVA > Cq1YFhGEzvs)
        len = aSQGVA;
    else
        len = Cq1YFhGEzvs;
    {
        XRWZEq = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (aSQGVA > XRWZEq) {
            CRihEzma[XRWZEq] = pA5EZRemWFSx[aSQGVA - (251 - 250) - XRWZEq] - '0';
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
            XRWZEq = XRWZEq +1;
        };
    }
    for (XRWZEq = 0; XRWZEq < Cq1YFhGEzvs; XRWZEq = XRWZEq +1)
        a2[XRWZEq] = Z8oAO0zG5[Cq1YFhGEzvs -1 - XRWZEq] - '0';
    {
        XRWZEq = 0;
        while (XRWZEq < len) {
            pBvju2[XRWZEq] = pBvju2[XRWZEq] + CRihEzma[XRWZEq] + a2[XRWZEq];
            if (pBvju2[XRWZEq] >= 10) {
                pBvju2[XRWZEq] = pBvju2[XRWZEq] - 10;
                pBvju2[XRWZEq +1]++;
            }
            XRWZEq++;
        };
    }
    if (pBvju2[len] != 0)
        len = len + 1;
    for (XRWZEq = len - 1; XRWZEq > 0; XRWZEq = XRWZEq -1) {
        if (pBvju2[XRWZEq] == 0)
            len = len - 1;
        else
            break;
    }
    for (XRWZEq = len - 1; XRWZEq >= 0; XRWZEq = XRWZEq -1)
        printf ("%d", pBvju2[XRWZEq]);
    return 0;
}

