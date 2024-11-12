int main () {
    char n [(837 - 797)];
    int l = strlen (n);
    int s9F3uKT;
    int lAnrVd;
    int j6BEPVR1j [(93 - 53)];
    int N435ECh8T = (430 - 430);
    getchar ();
    getchar ();
    scanf ("%d %s %d", &s9F3uKT, n, &lAnrVd);
    {
        int OXF3q7 = (195 - 195);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (l > OXF3q7) {
            int d = j6BEPVR1j[OXF3q7];
            if ('A' <= n[OXF3q7] && 'Z' >= n[OXF3q7])
                n[OXF3q7] = n[OXF3q7] - 'A' + 'a';
            if ('z' >= n[OXF3q7] && 'a' <= n[OXF3q7])
                j6BEPVR1j[OXF3q7] = n[OXF3q7] - 'a' + (779 - 769);
            else
                j6BEPVR1j[OXF3q7] = n[OXF3q7] - '0';
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
            OXF3q7 = OXF3q7 +1;
            N435ECh8T = N435ECh8T *s9F3uKT + d;
        };
    }
    if (N435ECh8T == 0)
        printf ("0");
    else {
        int QHFkLstNbl;
        char HairlVF [40];
        int e [(503 - 463)], XpwzOBxn;
        {
            XpwzOBxn = 0;
            while (N435ECh8T != 0) {
                e[XpwzOBxn] = N435ECh8T % lAnrVd;
                XpwzOBxn = XpwzOBxn +1;
                N435ECh8T = N435ECh8T / lAnrVd;
            };
        }
        e[XpwzOBxn] = '\0';
        for (QHFkLstNbl = 0; QHFkLstNbl < XpwzOBxn; QHFkLstNbl = QHFkLstNbl +1) {
            if (e[QHFkLstNbl] >= 0 && e[QHFkLstNbl] < 10)
                HairlVF[XpwzOBxn -QHFkLstNbl-(270 - 269)] = e[QHFkLstNbl] + '0';
            else
                HairlVF[XpwzOBxn -QHFkLstNbl-(205 - 204)] = e[QHFkLstNbl] - 10 + 'A';
        }
        HairlVF[XpwzOBxn] = '\0';
        printf ("%s", HairlVF);
    };
}

