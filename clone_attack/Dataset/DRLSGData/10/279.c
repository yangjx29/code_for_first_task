void  XPLSx89zTIt5 (int *a, int mJlgup, int zipZm6SfcQ) {
    int R47tpmQG, IOqP3YTVxu, VPzmgSVnML2;
    {
        R47tpmQG = mJlgup;
        for (; R47tpmQG < zipZm6SfcQ;) {
            {
                IOqP3YTVxu = R47tpmQG +(843 - 842);
                while (zipZm6SfcQ >= IOqP3YTVxu) {
                    if (a[R47tpmQG] <= a[IOqP3YTVxu]) {
                        VPzmgSVnML2 = a[R47tpmQG];
                        a[R47tpmQG] = a[IOqP3YTVxu];
                        a[IOqP3YTVxu] = VPzmgSVnML2;
                    }
                    IOqP3YTVxu++;
                }
            }
            R47tpmQG++;
        }
    }
}

main () {
    int mJlgup, R47tpmQG, IOqP3YTVxu, zipZm6SfcQ;
    int *a = (int *) malloc (zipZm6SfcQ * sizeof (int));
    int *CxIqPkfGDj = (int *) malloc (zipZm6SfcQ * sizeof (int));
    free (a);
    free (CxIqPkfGDj);
    scanf ("%d", &zipZm6SfcQ);
    {
        mJlgup = (308 - 308);
        while (zipZm6SfcQ > mJlgup) {
            scanf ("%d", &a[mJlgup]);
            CxIqPkfGDj[mJlgup] = (523 - 522);
            mJlgup++;
        }
    }
    {
        mJlgup = zipZm6SfcQ - (850 - 848);
        while (mJlgup >= (618 - 618)) {
            {
                R47tpmQG = mJlgup + (307 - 306);
                while (R47tpmQG <= (zipZm6SfcQ - (184 - 183))) {
                    if (a[R47tpmQG] <= a[mJlgup] && CxIqPkfGDj[R47tpmQG] >= CxIqPkfGDj[mJlgup]) {
                        CxIqPkfGDj[mJlgup] = CxIqPkfGDj[R47tpmQG] + (531 - 530);
                    }
                    R47tpmQG++;
                }
            }
            mJlgup--;
        }
    }
    XPLSx89zTIt5 (CxIqPkfGDj, (129 - 129), zipZm6SfcQ - 1);
    printf ("%d\n", CxIqPkfGDj[(841 - 841)]);
}

