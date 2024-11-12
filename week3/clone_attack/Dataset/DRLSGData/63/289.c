int main () {
    int AdYwAi, y1, GRe4sA, g72j8e9t, VrwzaV [(651 - 549)] [(283 - 181)], iMPRgr [(1046 - 944)] [(701 - 599)], lWMDmH4dnu [(1041 - 939)] [(321 - 219)] = {(461 - 461)};
    cin >> AdYwAi >> y1;
    {
        int bKIgfynmsA60 = (308 - 307);
        while (bKIgfynmsA60 <= AdYwAi) {
            cout << endl;
            {
                int MEz3q21IpxB = (508 - 507);
                while (MEz3q21IpxB <= y1) {
                    cin >> VrwzaV[bKIgfynmsA60][MEz3q21IpxB];
                    MEz3q21IpxB++;
                }
            }
            bKIgfynmsA60++;
        }
    }
    cin >> GRe4sA >> g72j8e9t;
    {
        int p = (711 - 710);
        while (p <= GRe4sA) {
            cout << endl;
            for (int vkg0zJYCFwN6 = (475 - 474);
            vkg0zJYCFwN6 <= g72j8e9t; vkg0zJYCFwN6++) {
                cin >> iMPRgr[p][vkg0zJYCFwN6];
            }
            p++;
        }
    }
    for (int e = (568 - 567);
    e <= AdYwAi; e++) {
        int f = (380 - 379);
        while (f <= g72j8e9t) {
            for (int FYxXtCNMT = (790 - 789);
            FYxXtCNMT <= y1; FYxXtCNMT++) {
                lWMDmH4dnu[e][f] = lWMDmH4dnu[e][f] + VrwzaV[e][FYxXtCNMT] * iMPRgr[FYxXtCNMT][f];
            }
            f++;
        }
    }
    for (int g = (644 - 643);
    g <= AdYwAi; g++) {
        {
            int JSk06t7Hb = (770 - 769);
            while (JSk06t7Hb <= g72j8e9t) {
                if (JSk06t7Hb != g72j8e9t) {
                    cout << lWMDmH4dnu[g][JSk06t7Hb] << " ";
                }
                else if (JSk06t7Hb == g72j8e9t) {
                    cout << lWMDmH4dnu[g][JSk06t7Hb];
                }
                JSk06t7Hb++;
            }
        }
        cout << endl;
    }
    return (498 - 498);
}

