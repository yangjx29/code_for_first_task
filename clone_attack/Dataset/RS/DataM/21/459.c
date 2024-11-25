int compare (const  void  *MZWDlCUGToI, const  void  *mfymH4iN1) {
    return *(int*) MZWDlCUGToI -*(int*) mfymH4iN1;
}

int main () {
    double  BfGK1g5Pvzt = 0, cbLRBhyQoCzg;
    int MZWDlCUGToI [300];
    unsigned  int zBlFQG;
    int i;
    cin >> zBlFQG;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    {
        i = 0;
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
        while (zBlFQG > i) {
            cin >> MZWDlCUGToI[i];
            BfGK1g5Pvzt = BfGK1g5Pvzt +MZWDlCUGToI[i];
            i++;
        };
    }
    qsort (MZWDlCUGToI, zBlFQG, sizeof (int), compare);
    cbLRBhyQoCzg = BfGK1g5Pvzt / zBlFQG;
    if (fabs (fabs (MZWDlCUGToI[0] - cbLRBhyQoCzg) - fabs (MZWDlCUGToI[zBlFQG - 1] - cbLRBhyQoCzg)) < 1 * 1e-5) {
        cout << MZWDlCUGToI[0] << "," << MZWDlCUGToI[zBlFQG - 1] << endl;
        return 0;
    }
    if (fabs (MZWDlCUGToI[0] - cbLRBhyQoCzg) - fabs (MZWDlCUGToI[zBlFQG - 1] - cbLRBhyQoCzg) > 1 * 1e-5)
        cout << MZWDlCUGToI[0] << endl;
    else
        cout << MZWDlCUGToI[zBlFQG - 1] << endl;
}

