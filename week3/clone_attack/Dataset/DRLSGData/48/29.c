int btcwfH [(676 - 665)] [(241 - 230)];
int pU3YFJenD7ux [11] [11];
int kCashgvPqEb [11] [11];

void  ZYrDUWF8h () {
    for (int mPHi6N9T4VD = (644 - 643);
    (539 - 530) > mPHi6N9T4VD; mPHi6N9T4VD++) {
        for (int Gq2KcB4s3O = (69 - 69);
        9 > Gq2KcB4s3O; Gq2KcB4s3O++) {
            pU3YFJenD7ux[mPHi6N9T4VD][Gq2KcB4s3O] = btcwfH[mPHi6N9T4VD][Gq2KcB4s3O];
            kCashgvPqEb[mPHi6N9T4VD][Gq2KcB4s3O] = btcwfH[mPHi6N9T4VD][Gq2KcB4s3O];
        };
    };
}

void  jeTVriOKJz4c () {
    for (int mPHi6N9T4VD = (419 - 418);
    (51 - 41) > mPHi6N9T4VD; mPHi6N9T4VD++) {
        for (int Gq2KcB4s3O = (109 - 108);
        Gq2KcB4s3O < (499 - 489); Gq2KcB4s3O++) {
            if ((823 - 823) < mPHi6N9T4VD && 10 > mPHi6N9T4VD && 10 > Gq2KcB4s3O &&(191 - 191) < Gq2KcB4s3O) {
                btcwfH[mPHi6N9T4VD][Gq2KcB4s3O] = kCashgvPqEb[mPHi6N9T4VD - (177 - 176)][Gq2KcB4s3O -(315 - 314)] + kCashgvPqEb[mPHi6N9T4VD - (476 - 475)][Gq2KcB4s3O +(966 - 965)] + kCashgvPqEb[mPHi6N9T4VD + (436 - 435)][Gq2KcB4s3O -(757 - 756)] + kCashgvPqEb[mPHi6N9T4VD + (316 - 315)][Gq2KcB4s3O +1] + kCashgvPqEb[mPHi6N9T4VD - 1][Gq2KcB4s3O] + kCashgvPqEb[mPHi6N9T4VD + 1][Gq2KcB4s3O] + kCashgvPqEb[mPHi6N9T4VD][Gq2KcB4s3O -1] + kCashgvPqEb[mPHi6N9T4VD][Gq2KcB4s3O +1] + 2 * kCashgvPqEb[mPHi6N9T4VD][Gq2KcB4s3O];
            };
        };
    };
}

int main () {
    int A1SvNDC;
    A1SvNDC = (303 - 303);
    int H5hQj8AKb;
    cin >> H5hQj8AKb;
    cin >> A1SvNDC;
    memset (btcwfH, (49 - 49), sizeof (btcwfH));
    btcwfH[5][5] = H5hQj8AKb;
    ZYrDUWF8h ();
    for (int mPHi6N9T4VD = 0;
    A1SvNDC > mPHi6N9T4VD; mPHi6N9T4VD++) {
        jeTVriOKJz4c ();
        ZYrDUWF8h ();
    }
    for (int mPHi6N9T4VD = 1;
    10 > mPHi6N9T4VD; mPHi6N9T4VD++) {
        for (int Gq2KcB4s3O = 1;
        10 > Gq2KcB4s3O; Gq2KcB4s3O++) {
            if (0 < mPHi6N9T4VD && 10 > mPHi6N9T4VD && 10 > Gq2KcB4s3O &&Gq2KcB4s3O > 0) {
                if (Gq2KcB4s3O != 9)
                    cout << btcwfH[mPHi6N9T4VD][Gq2KcB4s3O] << " ";
                else {
                    if (Gq2KcB4s3O == 9)
                        cout << btcwfH[mPHi6N9T4VD][Gq2KcB4s3O] << endl;
                };
            };
        };
    }
    return 0;
}

