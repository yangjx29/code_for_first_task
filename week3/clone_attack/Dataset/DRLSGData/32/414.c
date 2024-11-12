int main () {
    char K4ydaPU89c7 [200], AQohbckWM [200];
    int GHTuD3Id0Q, L3xElh, HVcIi7z9HG, L16KjxJ0, HqJzalpj, l4F2KAjkb3pV, WQ85my [101] = {0}, PPcqzIAU [101] = {0}, nESrXNhVv [101] = {0};
    cin >> GHTuD3Id0Q;
    cin.get ();
    {
        L3xElh = 1;
        for (; GHTuD3Id0Q >= L3xElh;) {
            cin.getline (K4ydaPU89c7, 101);
            HqJzalpj = strlen (K4ydaPU89c7);
            memset (WQ85my, 0, sizeof (WQ85my));
            memset (PPcqzIAU, 0, sizeof (PPcqzIAU));
            memset (nESrXNhVv, 0, sizeof (nESrXNhVv));
            {
                L16KjxJ0 = HqJzalpj -1;
                HVcIi7z9HG = 0;
                for (; L16KjxJ0 >= 0;) {
                    WQ85my[HVcIi7z9HG] = K4ydaPU89c7[L16KjxJ0] - '0';
                    HVcIi7z9HG++;
                    L16KjxJ0 = L16KjxJ0 -1;
                }
            }
            cin.getline (AQohbckWM, 101);
            l4F2KAjkb3pV = strlen (AQohbckWM);
            {
                HVcIi7z9HG = 0;
                L16KjxJ0 = l4F2KAjkb3pV - 1;
                for (; L16KjxJ0 >= 0;) {
                    PPcqzIAU[HVcIi7z9HG] = AQohbckWM[L16KjxJ0] - '0';
                    HVcIi7z9HG++;
                    L16KjxJ0 = L16KjxJ0 -1;
                }
            }
            {
                HVcIi7z9HG = 0;
                for (; HVcIi7z9HG < HqJzalpj;) {
                    if (PPcqzIAU[HVcIi7z9HG] <= WQ85my[HVcIi7z9HG])
                        nESrXNhVv[HVcIi7z9HG] = WQ85my[HVcIi7z9HG] - PPcqzIAU[HVcIi7z9HG];
                    else {
                        L16KjxJ0 = HVcIi7z9HG +1;
                        nESrXNhVv[HVcIi7z9HG] = WQ85my[HVcIi7z9HG] + 10 - PPcqzIAU[HVcIi7z9HG];
                        for (; WQ85my[L16KjxJ0] == 0;) {
                            WQ85my[L16KjxJ0] = 9;
                            L16KjxJ0++;
                        }
                        WQ85my[L16KjxJ0]--;
                    }
                    HVcIi7z9HG++;
                }
            }
            {
                HVcIi7z9HG = HqJzalpj -1;
                for (; HVcIi7z9HG >= 0;) {
                    if (nESrXNhVv[HVcIi7z9HG] != 0) {
                        {
                            L16KjxJ0 = HVcIi7z9HG;
                            for (; L16KjxJ0 >= 0;) {
                                cout << nESrXNhVv[L16KjxJ0];
                                L16KjxJ0--;
                            }
                        }
                        break;
                    }
                    HVcIi7z9HG = HVcIi7z9HG -1;
                }
            }
            cout << endl;
            if (L3xElh != GHTuD3Id0Q)
                cin.get ();
            L3xElh++;
        }
    }
    return 0;
}

