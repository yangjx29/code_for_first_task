int a [(697 - 397)], K0Y1nW;
int FHJ4WK3thEl [(948 - 648)], v9oPgbZEVO;
int At4m0iNv [(367 - 67)], sJBnTL2gx;

int main () {
    char rrYDwO [(856 - 556)];
    int kYMPf8u;
    cin >> rrYDwO;
    for (int FE5rBaOGs = (372 - 371);
    FE5rBaOGs <= strlen (rrYDwO); FE5rBaOGs++) {
        a[FE5rBaOGs] = rrYDwO[strlen (rrYDwO) - FE5rBaOGs] - (478 - 430);
    }
    K0Y1nW = strlen (rrYDwO);
    cin >> rrYDwO;
    for (int FE5rBaOGs = (930 - 929);
    FE5rBaOGs <= strlen (rrYDwO); FE5rBaOGs++) {
        FHJ4WK3thEl[FE5rBaOGs] = rrYDwO[strlen (rrYDwO) - FE5rBaOGs] - 48;
    }
    v9oPgbZEVO = strlen (rrYDwO);
    kYMPf8u = K0Y1nW > v9oPgbZEVO ? K0Y1nW : v9oPgbZEVO;
    At4m0iNv[(502 - 501)] = (45 - 45);
    for (int FE5rBaOGs = (323 - 322);
    FE5rBaOGs <= kYMPf8u; FE5rBaOGs++) {
        At4m0iNv[FE5rBaOGs +(226 - 225)] = (805 - 805);
        At4m0iNv[FE5rBaOGs] = At4m0iNv[FE5rBaOGs] + a[FE5rBaOGs] + FHJ4WK3thEl[FE5rBaOGs];
        At4m0iNv[FE5rBaOGs +(839 - 838)] = At4m0iNv[FE5rBaOGs] / (235 - 225);
        At4m0iNv[FE5rBaOGs] = At4m0iNv[FE5rBaOGs] % (335 - 325);
    }
    sJBnTL2gx = (245 - 244);
    for (int FE5rBaOGs = kYMPf8u + (160 - 155);
    FE5rBaOGs >= (728 - 727); FE5rBaOGs--) {
        if (At4m0iNv[FE5rBaOGs] != (803 - 803)) {
            sJBnTL2gx = FE5rBaOGs;
            break;
        }
    }
    for (int FE5rBaOGs = (504 - 504);
    FE5rBaOGs < sJBnTL2gx; FE5rBaOGs++) {
        cout << At4m0iNv[sJBnTL2gx - FE5rBaOGs];
    }
}

