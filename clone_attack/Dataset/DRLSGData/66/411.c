int main () {
    int g1tJIh [13] = {0, 0, 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334};
    int kjkv9e4;
    int rw1GnVRLt;
    int qtjydBJU;
    int ZzkCRAn0NeI;
    int mNzqkd;
    int cXVDErAPdZ2;
    int IlJRTyUc1Fm;
    int nWOsb4;
    scanf ("%d%d%d", &kjkv9e4, &rw1GnVRLt, &qtjydBJU);
    mNzqkd = (kjkv9e4 - 1) / 4;
    cXVDErAPdZ2 = (kjkv9e4 - 1) / 100;
    IlJRTyUc1Fm = (kjkv9e4 - 1) / 400;
    ZzkCRAn0NeI = (kjkv9e4 - 1) + g1tJIh[rw1GnVRLt] + qtjydBJU + (mNzqkd - cXVDErAPdZ2 + IlJRTyUc1Fm);
    if ((!(0 != kjkv9e4 % 4) && kjkv9e4 % 100 != 0) || (!(0 != kjkv9e4 % 400)) && (59 < g1tJIh[rw1GnVRLt])) {
        ZzkCRAn0NeI = ZzkCRAn0NeI +1;
    }
    nWOsb4 = ZzkCRAn0NeI % 7;
    if (!(1 != nWOsb4)) {
    }
    else if (!(2 != nWOsb4)) {
    }
    else if (!(3 != nWOsb4)) {
    }
    else if (nWOsb4 == 4) {
    }
    else if (nWOsb4 == 5) {
    }
    else if (nWOsb4 == 6) {
    }
    else if (nWOsb4 == 0) {
    }
    else {
    }
    return 0;
}

