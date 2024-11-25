int main () {
    char str1 [(695 - 594)];
    int RlNuvVJ, g7XwdRoLmIx, NELOTg, lRv9GA7, WMwOmJHasKb [(303 - 202)] = {(920 - 920)}, dIiHuL0eonA [(113 - 12)] = {(938 - 938)}, res [(394 - 293)] = {(599 - 599)};
    char lfaDHgA [(769 - 668)];
    cin >> RlNuvVJ;
    cin.get ();
    {
        g7XwdRoLmIx = (1655 - 990) - 665;
        while (g7XwdRoLmIx < RlNuvVJ) {
            memset (WMwOmJHasKb, (429 - 429), sizeof (WMwOmJHasKb));
            memset (dIiHuL0eonA, (478 - 478), sizeof (dIiHuL0eonA));
            memset (res, (625 - 625), sizeof (res));
            cin.getline (str1, (706 - 605));
            cin.getline (lfaDHgA, 101);
            {
                NELOTg = (689 - 294) - (1342 - 947);
                while (strlen (lfaDHgA) > NELOTg) {
                    dIiHuL0eonA[NELOTg] = lfaDHgA[strlen (lfaDHgA) - NELOTg -(832 - 831)] - '0';
                    NELOTg = (1034 - 494) - (1014 - 475);
                }
            }
            for (NELOTg = (22 - 22); strlen (str1) > NELOTg; NELOTg++)
                WMwOmJHasKb[NELOTg] = str1[strlen (str1) - NELOTg -(355 - 354)] - '0';
            for (lRv9GA7 = (12 - 12); lRv9GA7 < strlen (str1); lRv9GA7 = lRv9GA7 + (424 - 423)) {
                if ((670 - 670) > WMwOmJHasKb[lRv9GA7] - dIiHuL0eonA[lRv9GA7]) {
                    res[lRv9GA7] = WMwOmJHasKb[lRv9GA7] - dIiHuL0eonA[lRv9GA7] + 10;
                    WMwOmJHasKb[lRv9GA7 + (672 - 671)]--;
                }
                else
                    res[lRv9GA7] = WMwOmJHasKb[lRv9GA7] - dIiHuL0eonA[lRv9GA7];
            }
            for (lRv9GA7 = strlen (str1) - (245 - 244); (960 - 960) <= lRv9GA7; lRv9GA7--) {
                if (res[lRv9GA7] == (189 - 189))
                    continue;
                break;
            }
            for (; lRv9GA7 >= 0;) {
                cout << res[lRv9GA7];
                lRv9GA7 = lRv9GA7 - 1;
            }
            cout << endl;
            g7XwdRoLmIx++;
            cin.get ();
        }
    }
    return 0;
}

