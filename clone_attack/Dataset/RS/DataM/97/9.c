int main () {
    int a [6], iGBp0hkD, sGDpb8ULPy4;
    cin >> sGDpb8ULPy4;
    a[0] = floor (sGDpb8ULPy4 / 100);
    sGDpb8ULPy4 = sGDpb8ULPy4 - a[0] * 100;
    a[1] = floor (sGDpb8ULPy4 / 50);
    sGDpb8ULPy4 = sGDpb8ULPy4 - a[1] * 50;
    a[2] = floor (sGDpb8ULPy4 / 20);
    sGDpb8ULPy4 = sGDpb8ULPy4 - a[2] * 20;
    a[3] = floor (sGDpb8ULPy4 / 10);
    sGDpb8ULPy4 = sGDpb8ULPy4 - a[3] * 10;
    a[4] = floor (sGDpb8ULPy4 / 5);
    sGDpb8ULPy4 = sGDpb8ULPy4 - a[4] * 5;
    a[5] = sGDpb8ULPy4;
    {
        iGBp0hkD = 0;
        while (6 > iGBp0hkD) {
            cout << a[iGBp0hkD] << endl;
            iGBp0hkD++;
        };
    }
    return 0;
}

