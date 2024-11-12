int a [(1000676 - 671)], M32xOLJlWAQ [1000005], m1IHbXzs23, fgiTcjIod4mv;

int main () {
    int KvxWZ5bKlN, bcoF1K6jtSH = (941 - 941), OYFHJyWpsU9N, x7mOf62zw = (196 - 196);
    cin >> KvxWZ5bKlN;
    cin >> m1IHbXzs23 >> fgiTcjIod4mv;
    for (; (m1IHbXzs23 != (226 - 226)) || (!(0 == fgiTcjIod4mv));) {
        a[bcoF1K6jtSH] = m1IHbXzs23;
        M32xOLJlWAQ[bcoF1K6jtSH] = fgiTcjIod4mv;
        cin >> m1IHbXzs23 >> fgiTcjIod4mv;
        bcoF1K6jtSH++;
    }
    a[bcoF1K6jtSH] = m1IHbXzs23;
    M32xOLJlWAQ[bcoF1K6jtSH] = fgiTcjIod4mv;
    {
        int iGNbLUnA2zgK = 0;
        while (iGNbLUnA2zgK < KvxWZ5bKlN) {
            OYFHJyWpsU9N = 0;
            for (int YH40Y2UJBQ = 0;
            YH40Y2UJBQ <= bcoF1K6jtSH; YH40Y2UJBQ++) {
                if (M32xOLJlWAQ[YH40Y2UJBQ] == iGNbLUnA2zgK)
                    OYFHJyWpsU9N++;
            }
            if (OYFHJyWpsU9N >= KvxWZ5bKlN -1) {
                x7mOf62zw = 1;
                for (int YH40Y2UJBQ = 0;
                YH40Y2UJBQ <= bcoF1K6jtSH; YH40Y2UJBQ++) {
                    if ((a[YH40Y2UJBQ] == iGNbLUnA2zgK) && (M32xOLJlWAQ[YH40Y2UJBQ] != iGNbLUnA2zgK)) {
                        x7mOf62zw = 0;
                        break;
                    };
                }
                if (x7mOf62zw == 1) {
                    cout << iGNbLUnA2zgK << endl;
                    break;
                };
            }
            iGNbLUnA2zgK++;
        };
    }
    if (x7mOf62zw == 0)
        cout << "NOT FOUND" << endl;
    return 0;
}

