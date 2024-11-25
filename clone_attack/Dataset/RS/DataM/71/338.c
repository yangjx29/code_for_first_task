int main () {
    int jp806Tjo;
    cin >> jp806Tjo;
    for (int GuROy4zh2 = (447 - 447);
    GuROy4zh2 < jp806Tjo; GuROy4zh2 = GuROy4zh2 +1) {
        int SBAmLHzWDE, ntofNIM73, CcpLTfgaz1, p94kep2 = (397 - 397);
        int HRqzho [(692 - 679)] = {(569 - 569), (245 - 214), (517 - 489), (349 - 318), (827 - 797), (391 - 360), (642 - 612), (409 - 378), (211 - 180), 30, 31, 30, 31};
        cin >> SBAmLHzWDE >> ntofNIM73 >> CcpLTfgaz1;
        if ((SBAmLHzWDE % 4 == (703 - 703) && SBAmLHzWDE % 100 != (34 - 34)) || SBAmLHzWDE % 400 == 0)
            HRqzho[(732 - 730)] = (926 - 897);
        if (ntofNIM73 > CcpLTfgaz1) {
            int t;
            t = ntofNIM73;
            ntofNIM73 = CcpLTfgaz1;
            CcpLTfgaz1 = t;
        }
        for (int GuROy4zh2 = ntofNIM73;
        GuROy4zh2 < CcpLTfgaz1; GuROy4zh2 = GuROy4zh2 +1)
            p94kep2 = p94kep2 + HRqzho[GuROy4zh2];
        if (p94kep2 % 7 == 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}

