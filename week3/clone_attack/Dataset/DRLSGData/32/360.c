int main () {
    char a [200], TyBsjr [200];
    int x8w3FVi7Y;
    cin >> x8w3FVi7Y;
    for (; x8w3FVi7Y >= 1;) {
        int V6KzrN [200] = {0}, Nyl1SAMduJBC [200] = {0}, D9doECJIv [200] = {0}, SUwQ6KIN, le2, BLcsnYuQov89, j, D2t4IFneWj;
        cin >> a;
        SUwQ6KIN = strlen (a);
        cin >> TyBsjr;
        le2 = strlen (TyBsjr);
        {
            BLcsnYuQov89 = 0;
            j = SUwQ6KIN -1;
            for (; SUwQ6KIN -1 >= BLcsnYuQov89, 0 <= j;) {
                V6KzrN[BLcsnYuQov89] = a[j] - '0';
                BLcsnYuQov89++;
                j--;
            }
        }
        {
            BLcsnYuQov89 = 0;
            j = le2 - 1;
            while (le2 - 1 >= BLcsnYuQov89, 0 <= j) {
                Nyl1SAMduJBC[BLcsnYuQov89] = TyBsjr[j] - '0';
                j--;
                BLcsnYuQov89++;
            }
        }
        {
            BLcsnYuQov89 = 0;
            for (; BLcsnYuQov89 <= 199;) {
                if (V6KzrN[BLcsnYuQov89] >= Nyl1SAMduJBC[BLcsnYuQov89])
                    D9doECJIv[BLcsnYuQov89] = V6KzrN[BLcsnYuQov89] - Nyl1SAMduJBC[BLcsnYuQov89];
                if (V6KzrN[BLcsnYuQov89] < Nyl1SAMduJBC[BLcsnYuQov89]) {
                    D9doECJIv[BLcsnYuQov89] = 10 + V6KzrN[BLcsnYuQov89] - Nyl1SAMduJBC[BLcsnYuQov89];
                    V6KzrN[BLcsnYuQov89 +1] = V6KzrN[BLcsnYuQov89 +1] - 1;
                }
                BLcsnYuQov89++;
            }
        }
        {
            BLcsnYuQov89 = 199;
            for (; BLcsnYuQov89 >= 0;) {
                if (D9doECJIv[BLcsnYuQov89] != 0) {
                    D2t4IFneWj = BLcsnYuQov89;
                    break;
                }
                BLcsnYuQov89--;
            }
        }
        x8w3FVi7Y--;
        {
            BLcsnYuQov89 = D2t4IFneWj;
            for (; BLcsnYuQov89 >= 0;) {
                cout << D9doECJIv[BLcsnYuQov89];
                BLcsnYuQov89--;
            }
        }
        cout << endl;
    }
    return 0;
}

