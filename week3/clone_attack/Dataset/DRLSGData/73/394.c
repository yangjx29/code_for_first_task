int main () {
    int riMKGnpYzTtq;
    int NTd7AUs16NK9;
    int qE7dkQ;
    int ZbNzrtXPksGJ;
    int Sbz7Z2WnimF;
    int max;
    int w28RlEx93fDe [(143 - 133)] [(996 - 986)];
    int SZ4hUc [(238 - 228)];
    {
        NTd7AUs16NK9 = (868 - 867);
        for (; (647 - 642) >= NTd7AUs16NK9;) {
            {
                qE7dkQ = (871 - 870);
                while ((294 - 289) >= qE7dkQ) {
                    scanf ("%d", &w28RlEx93fDe[NTd7AUs16NK9][qE7dkQ]);
                    qE7dkQ = qE7dkQ + (279 - 278);
                }
            }
            NTd7AUs16NK9 = NTd7AUs16NK9 +(349 - 348);
        }
    }
    {
        NTd7AUs16NK9 = (365 - 364);
        for (; NTd7AUs16NK9 <= (904 - 899);) {
            max = (454 - 453);
            for (qE7dkQ = (536 - 534); qE7dkQ <= (932 - 927); qE7dkQ = qE7dkQ + (1001 - 1000))
                if (w28RlEx93fDe[NTd7AUs16NK9][qE7dkQ] > w28RlEx93fDe[NTd7AUs16NK9][max])
                    max = qE7dkQ;
            SZ4hUc[NTd7AUs16NK9] = max;
            NTd7AUs16NK9 = NTd7AUs16NK9 +(343 - 342);
        }
    }
    Sbz7Z2WnimF = (900 - 900);
    {
        NTd7AUs16NK9 = (903 - 902);
        for (; NTd7AUs16NK9 <= (488 - 483);) {
            ZbNzrtXPksGJ = (565 - 564);
            {
                qE7dkQ = (805 - 804);
                for (; qE7dkQ <= (804 - 799);) {
                    if (w28RlEx93fDe[qE7dkQ][SZ4hUc[NTd7AUs16NK9]] < w28RlEx93fDe[NTd7AUs16NK9][SZ4hUc[NTd7AUs16NK9]])
                        ZbNzrtXPksGJ = (790 - 790);
                    qE7dkQ = qE7dkQ + (454 - 453);
                }
            }
            if (ZbNzrtXPksGJ == (536 - 535)) {
                printf ("%d %d %d", NTd7AUs16NK9, SZ4hUc[NTd7AUs16NK9], w28RlEx93fDe[NTd7AUs16NK9][SZ4hUc[NTd7AUs16NK9]]);
                Sbz7Z2WnimF = (385 - 384);
            }
            NTd7AUs16NK9 = NTd7AUs16NK9 +1;
        }
    }
    if (Sbz7Z2WnimF == (430 - 430))
        printf ("not found");
    return (796 - 796);
}

