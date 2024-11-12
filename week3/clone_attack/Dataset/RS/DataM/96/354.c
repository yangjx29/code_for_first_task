int main () {
    char a [100];
    gets (a);
    int b [100], c [100];
    int mVilvEMa, k, m;
    double  n;
    k = strlen (a);
    {
        mVilvEMa = 568 - 568;
        while (mVilvEMa < k) {
            b[mVilvEMa] = a[mVilvEMa] - 48;
            mVilvEMa = mVilvEMa + 1;
        };
    }
    if (k > (444 - 443)) {
        for (mVilvEMa = (678 - 678); k - 1 > mVilvEMa; mVilvEMa++) {
            m = 10 * b[mVilvEMa] + b[mVilvEMa + 1];
            n = m / 13;
            c[mVilvEMa] = floor (n);
            b[mVilvEMa + 1] = m % 13;
        }
        if (c[(336 - 336)] != 0 || k <= (541 - 539)) {
            cout << c[0];
        }
        {
            mVilvEMa = 1;
            while (mVilvEMa < k - 1) {
                cout << c[mVilvEMa];
                mVilvEMa++;
            };
        }
        cout << endl;
        cout << b[k - 1];
    }
    else {
        cout << "0" << endl << b[0] << endl;
    }
    return 0;
}

