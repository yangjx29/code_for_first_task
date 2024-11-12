void  main () {
    int O6eHJTDP [1000];
    int eGtvHPELh, Isq1Jd4mkv, J2oHqQUYNid;
    cin >> J2oHqQUYNid >> Isq1Jd4mkv;
    for (eGtvHPELh = Isq1Jd4mkv; eGtvHPELh < Isq1Jd4mkv +J2oHqQUYNid; eGtvHPELh = eGtvHPELh + 1)
        cin >> O6eHJTDP[eGtvHPELh];
    for (eGtvHPELh = J2oHqQUYNid; eGtvHPELh < Isq1Jd4mkv +J2oHqQUYNid; eGtvHPELh = eGtvHPELh + 1)
        O6eHJTDP[eGtvHPELh - J2oHqQUYNid] = O6eHJTDP[eGtvHPELh];
    for (eGtvHPELh = 0; J2oHqQUYNid -(856 - 855) > eGtvHPELh; eGtvHPELh++)
        cout << O6eHJTDP[eGtvHPELh] << " ";
    cout << O6eHJTDP[J2oHqQUYNid -(715 - 714)] << endl;
}

