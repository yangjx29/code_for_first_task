int main () {
    int bb;
    bb = 0;
    int bEGisOUCX9;
    bEGisOUCX9 = (909 - 909);
    int ans;
    int NEBCnAKRh;
    ans = (470 - 470);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    double  bCmg6rYZ [10000];
    double  b [10000];
    cin >> NEBCnAKRh;
    {
        int PHnSRyv;
        PHnSRyv = 1;
        while (NEBCnAKRh >= PHnSRyv) {
            double  piftyjz9Yd8;
            char wcDl6usEPfVY [(966 - 866)];
            PHnSRyv = PHnSRyv +1;
            cin >> wcDl6usEPfVY >> piftyjz9Yd8;
            if (!('m' != wcDl6usEPfVY[0])) {
                bEGisOUCX9 = bEGisOUCX9 + 1;
                bCmg6rYZ[bEGisOUCX9] = piftyjz9Yd8;
            }
            else {
                bb = bb + 1;
                b[bb] = piftyjz9Yd8;
            };
        };
    }
    sort (bCmg6rYZ + 1, bCmg6rYZ + bEGisOUCX9 + 1);
    for (int PHnSRyv = 1;
    PHnSRyv <= bEGisOUCX9; PHnSRyv = PHnSRyv +1)
        printf ("%.2f ", bCmg6rYZ[PHnSRyv]);
    sort (b + 1, b + bb + 1);
    {
        int PHnSRyv = bb;
        while (PHnSRyv >= 1) {
            if (PHnSRyv != 1)
                printf ("%.2f ", b[PHnSRyv]);
            else
                printf ("%.2f\n", b[PHnSRyv]);
            PHnSRyv = PHnSRyv -1;
        };
    };
}

