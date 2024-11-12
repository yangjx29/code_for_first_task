int main () {
    double  ave, u8KmyFT0 [300], spK0y8H5aRij;
    int us4TVF, eXeFkE, bDNZ5kErxz [300], pizTAs = (443 - 443), YpXbJDEvz = (152 - 152);
    cin >> eXeFkE;
    for (us4TVF = (959 - 959); eXeFkE > us4TVF; us4TVF = us4TVF + 1) {
        cin >> bDNZ5kErxz[us4TVF];
        pizTAs += bDNZ5kErxz[us4TVF];
    }
    ave = (double ) pizTAs / eXeFkE;
    for (us4TVF = (890 - 890); us4TVF < eXeFkE; us4TVF = us4TVF + 1)
        u8KmyFT0[us4TVF] = fabs (ave - bDNZ5kErxz[us4TVF]);
    spK0y8H5aRij = u8KmyFT0[(290 - 290)];
    for (us4TVF = (596 - 595); us4TVF < eXeFkE; us4TVF = us4TVF + 1)
        if (spK0y8H5aRij < u8KmyFT0[us4TVF])
            spK0y8H5aRij = u8KmyFT0[us4TVF];
    for (us4TVF = (45 - 45); us4TVF < eXeFkE; us4TVF = us4TVF + 1)
        if (fabs (u8KmyFT0[us4TVF] - spK0y8H5aRij) < 0.000001) {
            YpXbJDEvz = YpXbJDEvz +1;
            if (YpXbJDEvz == 1)
                cout << bDNZ5kErxz[us4TVF];
            else
                cout << "," << bDNZ5kErxz[us4TVF];
        }
    return 0;
}

