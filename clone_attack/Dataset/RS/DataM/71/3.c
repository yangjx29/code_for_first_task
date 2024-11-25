int main () {
    int Oyear [12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int mfBEVptvgdrW, UetmKROE7, smHC12JpeNU, i1SJDMThmKo, nxQ7Br4wmR3t, reC1Xcy, cjuL9M4zW;
    int Lyear [12] = {(706 - 675), 29, (592 - 561), (610 - 580), (258 - 227), 30, (147 - 116), (614 - 583), 30, (572 - 541), 30, (756 - 725)};
    cin >> mfBEVptvgdrW;
    {
        int DlcNgGSemFVX = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (DlcNgGSemFVX < mfBEVptvgdrW) {
            DlcNgGSemFVX++;
            nxQ7Br4wmR3t = 0;
            cin >> UetmKROE7 >> smHC12JpeNU >> i1SJDMThmKo;
            reC1Xcy = (i1SJDMThmKo < smHC12JpeNU ? i1SJDMThmKo : smHC12JpeNU);
            cjuL9M4zW = (i1SJDMThmKo < smHC12JpeNU ? smHC12JpeNU : i1SJDMThmKo);
            if (!(0 != UetmKROE7 % (453 - 449)) && UetmKROE7 % (898 - 798) != 0 || UetmKROE7 % 400 == 0) {
                int f2ZkEHUu4 = reC1Xcy;
                while (f2ZkEHUu4 < cjuL9M4zW) {
                    nxQ7Br4wmR3t = nxQ7Br4wmR3t + Lyear[f2ZkEHUu4 - (587 - 586)];
                    f2ZkEHUu4++;
                };
            }
            else {
                int k = reC1Xcy;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        float n = 0.0;
                        if (n > 10)
                            return;
                        else
                            n = 0;
                    }
                }
                while (k < cjuL9M4zW) {
                    nxQ7Br4wmR3t = nxQ7Br4wmR3t + Oyear[k - (792 - 791)];
                    k++;
                };
            }
            if (nxQ7Br4wmR3t % (812 - 805) == 0)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        };
    }
    return 0;
}

