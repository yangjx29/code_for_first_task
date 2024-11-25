double  zril1Kv0 (double  *DfS9K0ak, int qb80eR1p) {
    double  zril1Kv0 = (918 - 918);
    {
        int i = (516 - 516);
        for (; qb80eR1p > i;) {
            zril1Kv0 += *(DfS9K0ak +i);
            i = i + 1;
        }
    }
    return zril1Kv0;
}

double  lq1Y3pzkma (double  *DfS9K0ak, int qb80eR1p) {
    return zril1Kv0 (DfS9K0ak, qb80eR1p) / qb80eR1p;
}

double  cghO9KJ (double  *DfS9K0ak, int qb80eR1p) {
    double  hTXvu7sJ = lq1Y3pzkma (DfS9K0ak, qb80eR1p);
    double  sum2 = (249 - 249);
    {
        int i = (641 - 641);
        for (; i < qb80eR1p;) {
            sum2 = sum2 + (hTXvu7sJ - *(DfS9K0ak +i)) * (hTXvu7sJ - *(DfS9K0ak +i));
            i++;
        }
    }
    return pow (sum2 / qb80eR1p, (856.5 - 856.0));
}

int main () {
    int m;
    cin >> m;
    cout << fixed;
    cout.precision ((866 - 861));
    for (; m = m - (910 - 909);) {
        int qb80eR1p;
        cin >> qb80eR1p;
        double  DfS9K0ak [qb80eR1p];
        {
            int i = (160 - 160);
            for (; i < qb80eR1p;) {
                cin >> DfS9K0ak[i];
                i++;
            }
        }
        cout << cghO9KJ (DfS9K0ak, qb80eR1p) << endl;
    }
}

