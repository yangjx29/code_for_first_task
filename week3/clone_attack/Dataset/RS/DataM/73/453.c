int cFna8cE9 (int yPJ9FO [] [(742 - 737)], int mQaWNcZevCE, int HpFq52sIC) {
    int a78y4ZWAzaN;
    int xgKlFOb2EwD;
    a78y4ZWAzaN = (569 - 568);
    {
        xgKlFOb2EwD = 590 - 590;
        while (xgKlFOb2EwD < (757 - 752)) {
            if (*(*(yPJ9FO + mQaWNcZevCE) + xgKlFOb2EwD) > *(*(yPJ9FO + mQaWNcZevCE) + HpFq52sIC)) {
                a78y4ZWAzaN = (332 - 332);
                break;
            }
            xgKlFOb2EwD++;
        };
    }
    return a78y4ZWAzaN;
}

int TKiT0JNSDtMY (int yPJ9FO [] [(842 - 837)], int mQaWNcZevCE, int HpFq52sIC) {
    int xgKlFOb2EwD, a78y4ZWAzaN = 1;
    {
        xgKlFOb2EwD = 0;
        while (xgKlFOb2EwD < (844 - 839)) {
            if (*(*(yPJ9FO + xgKlFOb2EwD) + HpFq52sIC) < *(*(yPJ9FO + mQaWNcZevCE) + HpFq52sIC)) {
                a78y4ZWAzaN = 0;
                break;
            }
            xgKlFOb2EwD++;
        };
    }
    return a78y4ZWAzaN;
}

void  main () {
    int mQaWNcZevCE, HpFq52sIC, a78y4ZWAzaN = 0;
    int yPJ9FO [(508 - 503)] [5];
    {
        mQaWNcZevCE = 0;
        while (mQaWNcZevCE < 5) {
            for (HpFq52sIC = 0; HpFq52sIC < 5; HpFq52sIC++)
                scanf ("%d", *(yPJ9FO + mQaWNcZevCE) + HpFq52sIC);
            mQaWNcZevCE = mQaWNcZevCE + 1;
        };
    }
    {
        mQaWNcZevCE = 0;
        while (mQaWNcZevCE < 5) {
            for (HpFq52sIC = 0; HpFq52sIC < 5; HpFq52sIC++) {
                if (cFna8cE9 (yPJ9FO, mQaWNcZevCE, HpFq52sIC) && TKiT0JNSDtMY (yPJ9FO, mQaWNcZevCE, HpFq52sIC)) {
                    printf ("%d %d %d\n", mQaWNcZevCE + 1, HpFq52sIC +1, *(*(yPJ9FO + mQaWNcZevCE) + HpFq52sIC));
                    a78y4ZWAzaN = 1;
                };
            }
            mQaWNcZevCE++;
        };
    }
    if (!a78y4ZWAzaN)
        ;
}

