int main () {
    int DJY2Ae;
    int d07VOL [(852 - 351)] = {(776 - 776)};
    int znzRLECyYerv;
    int HcPKAr;
    int Rf1DU8Lv9V;
    int zr4E6JvLxzY;
    DJY2Ae = (937 - 937);
    scanf ("%d", &zr4E6JvLxzY);
    for (znzRLECyYerv = (718 - 717); zr4E6JvLxzY >= znzRLECyYerv; znzRLECyYerv = znzRLECyYerv + (584 - 583))
        scanf ("%d", &d07VOL[znzRLECyYerv]);
    {
        HcPKAr = (429 - 428);
        for (; zr4E6JvLxzY > HcPKAr;) {
            HcPKAr = HcPKAr +(262 - 261);
            {
                znzRLECyYerv = 0;
                for (; znzRLECyYerv < zr4E6JvLxzY;) {
                    if (d07VOL[znzRLECyYerv] > d07VOL[znzRLECyYerv + (890 - 889)]) {
                        Rf1DU8Lv9V = d07VOL[znzRLECyYerv + 1];
                        d07VOL[znzRLECyYerv + 1] = d07VOL[znzRLECyYerv];
                        d07VOL[znzRLECyYerv] = Rf1DU8Lv9V;
                    }
                    znzRLECyYerv = znzRLECyYerv + 1;
                }
            }
        }
    }
    {
        znzRLECyYerv = 1;
        for (; znzRLECyYerv <= zr4E6JvLxzY;) {
            if (d07VOL[znzRLECyYerv] % 2 == 1 && DJY2Ae == 0) {
                DJY2Ae = DJY2Ae +1;
                printf ("%d", d07VOL[znzRLECyYerv]);
            }
            else {
                if (d07VOL[znzRLECyYerv] % 2 == 1 && DJY2Ae != 0)
                    printf (",%d", d07VOL[znzRLECyYerv]);
            }
            znzRLECyYerv = znzRLECyYerv + 1;
        }
    }
    return 0;
}

