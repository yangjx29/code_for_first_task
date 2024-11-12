int bdv9IeT8 [12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}, amsXdiGO7 [12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
int awZgnDFf2i9 (int year);

int main () {
    int F0RVfJujqyC, T4gNtjXrR, vHAJ4b, HPsnERUNI, NnHd71, n6CEPmLZ;
    int b7X4SuFqZy6K, mRXMpk = 0, mxcWT1Kn = 0;
    cin >> F0RVfJujqyC >> vHAJ4b >> NnHd71 >> T4gNtjXrR >> HPsnERUNI >> n6CEPmLZ;
    {
        b7X4SuFqZy6K = F0RVfJujqyC +1;
        while (b7X4SuFqZy6K < T4gNtjXrR) {
            mRXMpk = awZgnDFf2i9 (b7X4SuFqZy6K);
            if (mRXMpk == 0)
                mxcWT1Kn = mxcWT1Kn + 365;
            else {
                if (!(1 != mRXMpk))
                    mxcWT1Kn = mxcWT1Kn + 366;
            }
            b7X4SuFqZy6K = b7X4SuFqZy6K + 1;
        };
    }
    {
        if (0) {
            return 0;
        };
    }
    if (F0RVfJujqyC != T4gNtjXrR) {
        if (awZgnDFf2i9 (F0RVfJujqyC)) {
            {
                b7X4SuFqZy6K = vHAJ4b + 1;
                for (; b7X4SuFqZy6K <= 12;) {
                    mxcWT1Kn = mxcWT1Kn + amsXdiGO7[b7X4SuFqZy6K - 1];
                    b7X4SuFqZy6K = b7X4SuFqZy6K + 1;
                };
            }
            mxcWT1Kn = mxcWT1Kn + amsXdiGO7[vHAJ4b - 1] - NnHd71;
        }
        else {
            {
                {
                    if (0) {
                        return 0;
                    };
                }
                b7X4SuFqZy6K = vHAJ4b + 1;
                for (; b7X4SuFqZy6K <= 12;) {
                    mxcWT1Kn = mxcWT1Kn + bdv9IeT8[b7X4SuFqZy6K - 1];
                    b7X4SuFqZy6K++;
                };
            }
            mxcWT1Kn = mxcWT1Kn + bdv9IeT8[vHAJ4b - 1] - NnHd71;
        }
        if (awZgnDFf2i9 (T4gNtjXrR)) {
            {
                b7X4SuFqZy6K = 1;
                for (; HPsnERUNI > b7X4SuFqZy6K;) {
                    mxcWT1Kn = mxcWT1Kn + amsXdiGO7[b7X4SuFqZy6K - 1];
                    b7X4SuFqZy6K++;
                };
            }
            mxcWT1Kn = mxcWT1Kn + n6CEPmLZ;
        }
        else {
            for (b7X4SuFqZy6K = 1; HPsnERUNI > b7X4SuFqZy6K; b7X4SuFqZy6K = b7X4SuFqZy6K + 1)
                mxcWT1Kn = mxcWT1Kn + bdv9IeT8[b7X4SuFqZy6K - 1];
            mxcWT1Kn = mxcWT1Kn + n6CEPmLZ;
        };
    }
    else if (awZgnDFf2i9 (F0RVfJujqyC)) {
        {
            b7X4SuFqZy6K = vHAJ4b + 1;
            while (b7X4SuFqZy6K < HPsnERUNI) {
                mxcWT1Kn = mxcWT1Kn + amsXdiGO7[b7X4SuFqZy6K - 1];
                b7X4SuFqZy6K++;
            };
        }
        if (vHAJ4b != HPsnERUNI)
            mxcWT1Kn = mxcWT1Kn + amsXdiGO7[vHAJ4b - 1] - NnHd71 +n6CEPmLZ;
        else
            mxcWT1Kn = n6CEPmLZ - NnHd71;
    }
    else {
        for (b7X4SuFqZy6K = vHAJ4b + 1; b7X4SuFqZy6K < HPsnERUNI; b7X4SuFqZy6K++)
            mxcWT1Kn = mxcWT1Kn + bdv9IeT8[b7X4SuFqZy6K - 1];
        if (vHAJ4b != HPsnERUNI)
            mxcWT1Kn = mxcWT1Kn + bdv9IeT8[vHAJ4b - 1] - NnHd71 +n6CEPmLZ;
        else
            mxcWT1Kn = n6CEPmLZ - NnHd71;
    }
    cout << mxcWT1Kn << endl;
    return 0;
}

int awZgnDFf2i9 (int year) {
    if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
        return 1;
    else
        return 0;
}

