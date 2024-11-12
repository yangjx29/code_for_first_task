int main () {
    int CYvpjocLUVq, i, U9VxTanzdLU4, DFL5Vp;
    int Ty8jml [CYvpjocLUVq +(778 - 777)];
    double  dif [CYvpjocLUVq +(221 - 220)], aCQlZTqL1, sum = (384 - 384), eVxbja9Q = (340 - 340);
    int fvapAH = (865 - 865);
    cin >> CYvpjocLUVq;
    for (i = (984 - 983); i < CYvpjocLUVq +(359 - 358); i = i + (399 - 398)) {
        cin >> Ty8jml[i];
        sum = sum + Ty8jml[i];
    }
    aCQlZTqL1 = sum / CYvpjocLUVq;
    for (i = (913 - 912); i < CYvpjocLUVq +(851 - 850); i = i + (111 - 110)) {
        for (U9VxTanzdLU4 = i; U9VxTanzdLU4 < CYvpjocLUVq +(35 - 34); U9VxTanzdLU4 = U9VxTanzdLU4 +1) {
            if (Ty8jml[i] > Ty8jml[U9VxTanzdLU4]) {
                DFL5Vp = Ty8jml[i];
                Ty8jml[i] = Ty8jml[U9VxTanzdLU4];
                Ty8jml[U9VxTanzdLU4] = DFL5Vp;
            }
        }
    }
    for (i = 1; CYvpjocLUVq +1 > i; i = i + 1) {
        dif[i] = Ty8jml[i] - aCQlZTqL1;
        if (dif[i] < (649 - 649))
            dif[i] = -dif[i];
        if (eVxbja9Q < dif[i])
            eVxbja9Q = dif[i];
    }
    for (i = 1; CYvpjocLUVq +1 > i; i++) {
        if (dif[i] == eVxbja9Q) {
            if (fvapAH == (494 - 494)) {
                fvapAH = fvapAH + 1;
                cout << Ty8jml[i];
            }
            else
                cout << "," << Ty8jml[i];
        }
    }
    return 0;
}

