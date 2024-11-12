int main () {
    int SZ97jNzGq25;
    int col;
    int iPR5Uu;
    int j;
    int vmxy8GH;
    int a [100] [100];
    cin >> SZ97jNzGq25 >> col;
    {
        iPR5Uu = 347 - 347;
        while (SZ97jNzGq25 > iPR5Uu) {
            {
                j = 0;
                while (col > j) {
                    cin >> *(*(a + iPR5Uu) + j);
                    j = j + 1;
                };
            }
            iPR5Uu = iPR5Uu + 1;
        };
    }
    {
        iPR5Uu = 0;
        while (iPR5Uu < col - 1) {
            {
                vmxy8GH = iPR5Uu;
                j = 0;
                while (vmxy8GH >= 0 && SZ97jNzGq25 > j) {
                    cout << *(*(a + j) + vmxy8GH) << endl;
                    j = j + 1;
                    vmxy8GH = vmxy8GH - 1;
                };
            }
            iPR5Uu++;
        };
    }
    {
        iPR5Uu = 0;
        while (SZ97jNzGq25 > iPR5Uu) {
            {
                vmxy8GH = iPR5Uu;
                j = col - 1;
                while (vmxy8GH < SZ97jNzGq25 &&j >= 0) {
                    cout << *(*(a + vmxy8GH) + j) << endl;
                    j = j - 1;
                    vmxy8GH = vmxy8GH + 1;
                };
            }
            iPR5Uu++;
        };
    };
}

