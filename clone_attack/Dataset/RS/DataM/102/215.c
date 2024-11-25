int QKPpArHR;
double  VNFPLOuBM [50], RSQL3d6 [50];
int N2Jgz0, NEFMKQZr;
char TYdUND345f [10];

int main () {
    cin >> QKPpArHR;
    N2Jgz0 = NEFMKQZr = 0;
    {
        int Fclu6jFrOCh = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (QKPpArHR > Fclu6jFrOCh) {
            Fclu6jFrOCh = Fclu6jFrOCh +1;
            scanf ("%s", TYdUND345f);
            if (strcmp (TYdUND345f, "male") == 0)
                cin >> VNFPLOuBM[N2Jgz0++];
            else
                cin >> RSQL3d6[NEFMKQZr++];
        };
    }
    sort (VNFPLOuBM, VNFPLOuBM +N2Jgz0);
    sort (RSQL3d6, RSQL3d6 +NEFMKQZr);
    {
        int Fclu6jFrOCh = 0;
        while (N2Jgz0 > Fclu6jFrOCh) {
            printf ("%.2f ", VNFPLOuBM[Fclu6jFrOCh]);
            Fclu6jFrOCh = Fclu6jFrOCh +1;
        };
    }
    for (int Fclu6jFrOCh = NEFMKQZr -1;
    Fclu6jFrOCh > 0; Fclu6jFrOCh = Fclu6jFrOCh -1)
        printf ("%.2f ", RSQL3d6[Fclu6jFrOCh]);
    printf ("%.2f\n", RSQL3d6[0]);
    return 0;
}

