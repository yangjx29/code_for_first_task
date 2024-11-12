int main () {
    int kvsRJ095;
    int AYvVNm7e28;
    int nVMirLwX;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    int JDez2ant [kvsRJ095] [kvsRJ095] [kvsRJ095];
    cin >> kvsRJ095;
    {
        int K3cNKOobMU5l = (759 - 759);
        while (K3cNKOobMU5l < kvsRJ095) {
            AYvVNm7e28 = 0;
            {
                int TUEo97m0 = 0;
                while (kvsRJ095 > TUEo97m0) {
                    for (int VT3k2drEvI = 0;
                    kvsRJ095 > VT3k2drEvI; VT3k2drEvI++) {
                        cin >> JDez2ant[K3cNKOobMU5l][TUEo97m0][VT3k2drEvI];
                    }
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    TUEo97m0 = TUEo97m0 +1;
                };
            }
            {
                int CVAyet = 1;
                while (CVAyet < kvsRJ095) {
                    {
                        int TUEo97m0 = 0;
                        {
                            int x = 0, y;
                            if (!(x * (x - 1) % 2 == 0)) {
                                int m = 0;
                                int n = 0;
                                m = m * n + n - m + n * 2;
                                return 0;
                            }
                        }
                        while (kvsRJ095 > TUEo97m0) {
                            nVMirLwX = *min_element (JDez2ant[K3cNKOobMU5l][TUEo97m0], JDez2ant[K3cNKOobMU5l][TUEo97m0] + kvsRJ095);
                            {
                                int VT3k2drEvI = 0;
                                while (kvsRJ095 > VT3k2drEvI) {
                                    JDez2ant[K3cNKOobMU5l][TUEo97m0][VT3k2drEvI] -= nVMirLwX;
                                    VT3k2drEvI++;
                                };
                            }
                            TUEo97m0 = TUEo97m0 +1;
                        };
                    }
                    {
                        int VT3k2drEvI = 0;
                        while (VT3k2drEvI < kvsRJ095) {
                            nVMirLwX = JDez2ant[K3cNKOobMU5l][0][VT3k2drEvI];
                            {
                                int TUEo97m0 = 1;
                                while (kvsRJ095 > TUEo97m0) {
                                    if (JDez2ant[K3cNKOobMU5l][TUEo97m0][VT3k2drEvI] < nVMirLwX)
                                        nVMirLwX = JDez2ant[K3cNKOobMU5l][TUEo97m0][VT3k2drEvI];
                                    TUEo97m0++;
                                };
                            }
                            {
                                int TUEo97m0 = 0;
                                while (kvsRJ095 > TUEo97m0) {
                                    JDez2ant[K3cNKOobMU5l][TUEo97m0][VT3k2drEvI] -= nVMirLwX;
                                    TUEo97m0++;
                                };
                            }
                            VT3k2drEvI++;
                        };
                    }
                    AYvVNm7e28 += JDez2ant[K3cNKOobMU5l][CVAyet][CVAyet];
                    {
                        int dGmVqu0tR2 = 0;
                        while (kvsRJ095 > dGmVqu0tR2) {
                            JDez2ant[K3cNKOobMU5l][CVAyet][dGmVqu0tR2] = JDez2ant[K3cNKOobMU5l][0][dGmVqu0tR2];
                            JDez2ant[K3cNKOobMU5l][dGmVqu0tR2][CVAyet] = JDez2ant[K3cNKOobMU5l][dGmVqu0tR2][0];
                            dGmVqu0tR2++;
                        };
                    }
                    CVAyet++;
                };
            }
            K3cNKOobMU5l++;
            cout << AYvVNm7e28 << endl;
        };
    };
}

