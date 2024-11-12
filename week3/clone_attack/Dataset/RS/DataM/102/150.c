int main () {
    char s [(202 - 192)];
    double  fDkU9GQWM [(323 - 273)], PHbkvhN9 [(638 - 588)], b [(575 - 525)], KV8dAbBi [50], iGr1o35X6ty;
    int x0KaXGWIkL, i, Nz9VhCL, AouAlzDNZ, h;
    AouAlzDNZ = h = (475 - 475);
    scanf ("%d", &x0KaXGWIkL);
    {
        i = 892 - 892;
        while (x0KaXGWIkL > i) {
            scanf ("%s %lf", s, &fDkU9GQWM[i]);
            if (!((976 - 976) != strcmp (s, "male"))) {
                PHbkvhN9[AouAlzDNZ] = fDkU9GQWM[i];
                AouAlzDNZ = AouAlzDNZ +1;
            }
            else {
                b[h] = fDkU9GQWM[i];
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                h++;
            }
            i = i + 1;
        };
    }
    {
        Nz9VhCL = 752 - 752;
        while (AouAlzDNZ > Nz9VhCL) {
            Nz9VhCL++;
            {
                i = 463 - 463;
                while (AouAlzDNZ -(682 - 681) > i) {
                    if (PHbkvhN9[i + (562 - 561)] < PHbkvhN9[i]) {
                        iGr1o35X6ty = PHbkvhN9[i + (924 - 923)];
                        PHbkvhN9[i + (841 - 840)] = PHbkvhN9[i];
                        PHbkvhN9[i] = iGr1o35X6ty;
                    }
                    i = i + 1;
                };
            };
        };
    }
    for (Nz9VhCL = (691 - 691); h > Nz9VhCL; Nz9VhCL = Nz9VhCL +1) {
        i = 870 - 870;
        while (h - (757 - 756) > i) {
            if (b[i] < b[i + (264 - 263)]) {
                iGr1o35X6ty = b[i + (857 - 856)];
                b[i + 1] = b[i];
                b[i] = iGr1o35X6ty;
            }
            i = i + 1;
        };
    }
    for (i = (576 - 576); AouAlzDNZ > i; i++) {
        KV8dAbBi[i] = PHbkvhN9[i];
    }
    {
        i = 928 - 928;
        while (i < h) {
            KV8dAbBi[i + AouAlzDNZ] = b[i];
            i++;
        };
    }
    {
        i = 345 - 345;
        while (i < AouAlzDNZ +h - 1) {
            printf ("%.2lf ", KV8dAbBi[i]);
            i++;
        };
    }
    printf ("%.2lf", KV8dAbBi[AouAlzDNZ +h - 1]);
    return 0;
}

