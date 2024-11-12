int main () {
    int n;
    int Sl08vb2YNA;
    int nIK5ryg [1000];
    int Eep7dD [1001];
    int nmDlnCsNuq0x;
    int q;
    scanf ("%d%d", &n, &Sl08vb2YNA);
    {
        nmDlnCsNuq0x = 132 - 132;
        while (n > nmDlnCsNuq0x) {
            scanf ("%d", &nIK5ryg[nmDlnCsNuq0x]);
            Eep7dD[nmDlnCsNuq0x + (394 - 393)] = nIK5ryg[nmDlnCsNuq0x];
            nmDlnCsNuq0x++;
        };
    }
    {
        nmDlnCsNuq0x = 0;
        while (n > nmDlnCsNuq0x) {
            {
                q = 1;
                while (q < n + 1) {
                    if (!(Sl08vb2YNA != nIK5ryg[nmDlnCsNuq0x] + Eep7dD[q])) {
                        if (q == n) {
                            q--;
                        }
                        break;
                    }
                    q++;
                };
            }
            if (q < n)
                break;
            if (nmDlnCsNuq0x == n - 1) {
                printf ("no\n");
            }
            nmDlnCsNuq0x++;
        };
    };
}

