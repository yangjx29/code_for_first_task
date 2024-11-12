int main () {
    char xsRIKL18Pqi [109] [109] = {(945 - 945)};
    char SrkXcbPhso3w [109] [109] = {0};
    int etFNrLquW;
    int day;
    int skzDC8XNtK;
    skzDC8XNtK = 0;
    cin >> etFNrLquW;
    for (int wODPJ6bpA = (881 - 880);
    etFNrLquW >= wODPJ6bpA; wODPJ6bpA++)
        for (int DvPA8ZkndjD5 = (291 - 290);
        etFNrLquW >= DvPA8ZkndjD5; DvPA8ZkndjD5++)
            cin >> xsRIKL18Pqi[wODPJ6bpA][DvPA8ZkndjD5];
    memcpy (SrkXcbPhso3w, xsRIKL18Pqi, sizeof (xsRIKL18Pqi));
    cin >> day;
    for (int rlEAw78RX = 1;
    rlEAw78RX < day; rlEAw78RX++) {
        for (int wODPJ6bpA = 1;
        etFNrLquW >= wODPJ6bpA; wODPJ6bpA++) {
            int DvPA8ZkndjD5 = 1;
            while (DvPA8ZkndjD5 <= etFNrLquW) {
                if ((!('.' != SrkXcbPhso3w[wODPJ6bpA][DvPA8ZkndjD5])) && ((!('@' != xsRIKL18Pqi[wODPJ6bpA + 1][DvPA8ZkndjD5])) || (xsRIKL18Pqi[wODPJ6bpA - 1][DvPA8ZkndjD5] == '@') || (xsRIKL18Pqi[wODPJ6bpA][DvPA8ZkndjD5 +1] == '@') || (xsRIKL18Pqi[wODPJ6bpA][DvPA8ZkndjD5 -1] == '@')))
                    SrkXcbPhso3w[wODPJ6bpA][DvPA8ZkndjD5] = '@';
                DvPA8ZkndjD5++;
            };
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        memcpy (xsRIKL18Pqi, SrkXcbPhso3w, sizeof (SrkXcbPhso3w));
    }
    for (int wODPJ6bpA = 1;
    wODPJ6bpA <= etFNrLquW; wODPJ6bpA++)
        for (int DvPA8ZkndjD5 = 1;
        DvPA8ZkndjD5 <= etFNrLquW; DvPA8ZkndjD5++)
            if (xsRIKL18Pqi[wODPJ6bpA][DvPA8ZkndjD5] == '@')
                skzDC8XNtK++;
    cout << skzDC8XNtK;
    return 0;
}

