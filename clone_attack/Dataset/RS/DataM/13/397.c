int main () {
    int BX0MZe [20001] = {0};
    int iJT3GZ;
    int KhtNfeL [101] = {(442 - 442)};
    int r4Nryl;
    cin >> iJT3GZ;
    for (r4Nryl = (253 - 252); r4Nryl <= iJT3GZ; r4Nryl = r4Nryl + 1) {
        cin >> BX0MZe[r4Nryl];
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        KhtNfeL[BX0MZe[r4Nryl]] = KhtNfeL[BX0MZe[r4Nryl]] + 1;
    }
    cout << BX0MZe[1];
    KhtNfeL[BX0MZe[1]] = 0;
    for (r4Nryl = 2; r4Nryl <= iJT3GZ; r4Nryl = r4Nryl + 1) {
        if (KhtNfeL[BX0MZe[r4Nryl]] != 0)
            cout << " " << BX0MZe[r4Nryl];
        KhtNfeL[BX0MZe[r4Nryl]] = 0;
    }
    return 0;
}

