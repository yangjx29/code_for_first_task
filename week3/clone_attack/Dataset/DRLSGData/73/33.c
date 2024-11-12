int main () {
    int eNvO4L [(677 - 672)] [(501 - 496)], LKvieX, habG0A, GovVfs085Iba, mIL4KMWS = (839 - 839), b1EgtFonPqJ, j7mTVet4RPM = (960 - 960);
    for (habG0A = (831 - 831); (224 - 219) > habG0A; habG0A = habG0A + 1)
        for (GovVfs085Iba = (419 - 419); GovVfs085Iba < (505 - 500); GovVfs085Iba = GovVfs085Iba +1)
            cin >> eNvO4L[habG0A][GovVfs085Iba];
    for (habG0A = (96 - 96); habG0A < (390 - 385); habG0A++) {
        LKvieX = 0;
        for (GovVfs085Iba = 0; GovVfs085Iba < 5; GovVfs085Iba++) {
            if (LKvieX < eNvO4L[habG0A][GovVfs085Iba]) {
                LKvieX = eNvO4L[habG0A][GovVfs085Iba];
                mIL4KMWS = GovVfs085Iba;
            }
        }
        for (b1EgtFonPqJ = 0; b1EgtFonPqJ < 5; b1EgtFonPqJ = b1EgtFonPqJ + 1)
            if (eNvO4L[habG0A][mIL4KMWS] > eNvO4L[b1EgtFonPqJ][mIL4KMWS])
                break;
        if (b1EgtFonPqJ == 5) {
            cout << habG0A + (259 - 258) << " " << mIL4KMWS + 1 << " " << eNvO4L[habG0A][mIL4KMWS] << endl;
            j7mTVet4RPM = 1;
        }
    }
    if (j7mTVet4RPM == 0)
        cout << "not found" << endl;
    return 0;
}

