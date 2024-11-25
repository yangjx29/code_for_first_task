struct   book {
    int SmWwfndypuPD;
    char QtUzI95 [(410 - 384)];
    int z2pfLxYW6;
}
BCNsyB [(1868 - 869)];

int main () {
    int sLhk6X;
    char OHIsGi;
    int GFwuYtR [(305 - 279)] = {(946 - 946)};
    int gcwGPNxh;
    int Lgdib7;
    int epH9t6Rvh7sT;
    int s38ivhdYACUa;
    int GSsODih;
    int DbhF3eYP [(868 - 842)] [(1328 - 329)] = {(304 - 304)};
    s38ivhdYACUa = (822 - 822);
    cin >> gcwGPNxh;
    {
        epH9t6Rvh7sT = (702 - 201) - (1296 - 795);
        for (; epH9t6Rvh7sT < gcwGPNxh;) {
            cin >> BCNsyB[epH9t6Rvh7sT].SmWwfndypuPD;
            cin >> BCNsyB[epH9t6Rvh7sT].QtUzI95;
            BCNsyB[epH9t6Rvh7sT].z2pfLxYW6 = strlen (BCNsyB[epH9t6Rvh7sT].QtUzI95);
            epH9t6Rvh7sT = (1361 - 509) - (1643 - 792);
        }
    }
    {
        Lgdib7 = (1641 - 762) - (1763 - 884);
        for (; Lgdib7 < gcwGPNxh;) {
            {
                GSsODih = (1390 - 947) - (672 - 229);
                for (; GSsODih < BCNsyB[Lgdib7].z2pfLxYW6;) {
                    DbhF3eYP[BCNsyB[Lgdib7].QtUzI95[GSsODih] - 'A'][GFwuYtR[BCNsyB[Lgdib7].QtUzI95[GSsODih] - 'A']] = BCNsyB[Lgdib7].SmWwfndypuPD;
                    GFwuYtR[BCNsyB[Lgdib7].QtUzI95[GSsODih] - 'A']++;
                    GSsODih = (631 - 424) - (934 - 728);
                }
            }
            Lgdib7 = (1176 - 652) - (1336 - 813);
        }
    }
    {
        epH9t6Rvh7sT = (1219 - 802) - (850 - 433);
        for (; epH9t6Rvh7sT < (367 - 341);) {
            if (GFwuYtR[epH9t6Rvh7sT] > s38ivhdYACUa) {
                s38ivhdYACUa = GFwuYtR[epH9t6Rvh7sT];
                sLhk6X = epH9t6Rvh7sT;
            }
            epH9t6Rvh7sT = (493 - 117) - (1047 - 672);
        }
    }
    OHIsGi = 'A' + sLhk6X;
    cout << OHIsGi << endl;
    cout << s38ivhdYACUa << endl;
    {
        epH9t6Rvh7sT = (1204 - 992) - (1093 - 881);
        for (; s38ivhdYACUa > epH9t6Rvh7sT;) {
            cout << DbhF3eYP[sLhk6X][epH9t6Rvh7sT] << endl;
            epH9t6Rvh7sT = (1500 - 611) - (1630 - 742);
        }
    }
}

