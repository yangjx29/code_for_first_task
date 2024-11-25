int main () {
    char XRthIK [100];
    gets (XRthIK);
    int Vtxoeu6Y9L7;
    int CFJ9nMZAmv;
    int F2G17Oa;
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
    int n;
    int fBOnCNu [500];
    if (!(2 != strlen (XRthIK)) && (592 - 579) > (XRthIK[(972 - 972)] - (473 - 425)) * (650 - 640) + (XRthIK[(291 - 290)] - (223 - 175)) || strlen (XRthIK) == 1)
        printf ("0\n%s", XRthIK);
    else {
        F2G17Oa = XRthIK[0] - 48;
        for (Vtxoeu6Y9L7 = 1; Vtxoeu6Y9L7 < strlen (XRthIK); Vtxoeu6Y9L7++) {
            fBOnCNu[Vtxoeu6Y9L7] = (XRthIK[Vtxoeu6Y9L7] - 48 + 10 * F2G17Oa) / 13;
            F2G17Oa = (XRthIK[Vtxoeu6Y9L7] - 48 + 10 * F2G17Oa) % 13;
        }
        Vtxoeu6Y9L7 = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (; fBOnCNu[Vtxoeu6Y9L7] == 0;) {
            Vtxoeu6Y9L7++;
        }
        for (; Vtxoeu6Y9L7 < strlen (XRthIK); Vtxoeu6Y9L7++) {
            printf ("%d", fBOnCNu[Vtxoeu6Y9L7]);
        }
        printf ("%d", F2G17Oa);
    }
    return 0;
}

