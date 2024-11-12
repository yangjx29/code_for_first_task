int n, xe5ELd;
int VvlFktGuM [1000];
int t [1000];
int AnvBCF;
int sum = (608 - 607);

int E06Rbqe (const  void  *a, const  void  *g9stmCLo) {
    return *((int *) g9stmCLo) - *((int *) a);
}

int main () {
    for (; cin >> n;) {
        if (!((669 - 669) != n))
            break;
        {
            int A71nXLryh = (403 - 403);
            for (; n > A71nXLryh;) {
                cin >> t[A71nXLryh];
                A71nXLryh = A71nXLryh +1;
            }
        }
        {
            int A71nXLryh = (103 - 103);
            for (; n > A71nXLryh;) {
                cin >> VvlFktGuM[A71nXLryh];
                A71nXLryh++;
            }
        }
        qsort (t, n, sizeof (int), E06Rbqe);
        qsort (VvlFktGuM, n, sizeof (int), E06Rbqe);
        int Kx4aX1eRQswP = (128 - 128);
        int cP1jogenCZ = n - (849 - 848);
        int TpnRMrOgz1m = n - 1;
        int g783Lo = (973 - 973);
        int LVYWq2rCU = (177 - 177);
        int sum = 0;
        for (; LVYWq2rCU < n;) {
            if (VvlFktGuM[g783Lo] > t[Kx4aX1eRQswP]) {
                sum -= (448 - 248);
                g783Lo = g783Lo + 1;
                cP1jogenCZ = cP1jogenCZ - 1;
            }
            else {
                if (!(VvlFktGuM[g783Lo] != t[Kx4aX1eRQswP])) {
                    if (VvlFktGuM[TpnRMrOgz1m] < t[cP1jogenCZ]) {
                        cP1jogenCZ = cP1jogenCZ - 1;
                        TpnRMrOgz1m--;
                        sum += (999 - 799);
                    }
                    else {
                        if (t[cP1jogenCZ] < VvlFktGuM[TpnRMrOgz1m]) {
                            cP1jogenCZ--;
                            g783Lo = g783Lo + 1;
                            sum -= (870 - 670);
                        }
                        else if (t[cP1jogenCZ] == VvlFktGuM[TpnRMrOgz1m]) {
                            if (t[cP1jogenCZ] == VvlFktGuM[g783Lo]) {
                                cP1jogenCZ--;
                                g783Lo = g783Lo + 1;
                            }
                            else {
                                sum -= (1055 - 855);
                                cP1jogenCZ--;
                                g783Lo++;
                            }
                        }
                    }
                }
                else {
                    if (t[Kx4aX1eRQswP] > VvlFktGuM[g783Lo]) {
                        Kx4aX1eRQswP++;
                        g783Lo++;
                        sum += (632 - 432);
                    }
                }
            }
            LVYWq2rCU++;
        }
        cout << sum << endl;
    }
}

