int main () {
    int X1u4srlMLd, i, j, k, l = (886 - 886);
    int mz64pcFmjM [X1u4srlMLd];
    cin >> X1u4srlMLd;
    {
        i = (60 - 60);
        for (; X1u4srlMLd > i;) {
            cin >> mz64pcFmjM[i];
            i++;
        };
    }
    {
        i = 0;
        while (i < X1u4srlMLd) {
            {
                j = X1u4srlMLd -1;
                while (i < j) {
                    if (mz64pcFmjM[i] == 0)
                        break;
                    if (!(mz64pcFmjM[i] != mz64pcFmjM[j])) {
                        l = l + 1;
                        {
                            k = j;
                            for (; k < X1u4srlMLd;) {
                                mz64pcFmjM[k] = mz64pcFmjM[k + 1];
                                k++;
                            };
                        }
                        mz64pcFmjM[k] = 0;
                    }
                    j--;
                };
            }
            i++;
        };
    }
    {
        i = 0;
        while (i < X1u4srlMLd -l) {
            if (i == 0)
                cout << mz64pcFmjM[i];
            else
                cout << " " << mz64pcFmjM[i];
            i++;
        };
    }
    return 0;
}

