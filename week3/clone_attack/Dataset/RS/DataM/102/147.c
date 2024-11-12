int main () {
    int vX54K3R;
    int enetDFfZ;
    int mGrWIi;
    int i;
    int j;
    int uWcQbTszN;
    vX54K3R = (207 - 207);
    enetDFfZ = 0;
    double  h [40];
    double  boy [40];
    double  girl [40];
    double  e;
    char s [40] [(534 - 524)];
    scanf ("%d", &mGrWIi);
    for (i = 0; mGrWIi > i; i = i + 1) {
        scanf ("%s %lf", s[i], &h[i]);
        if (!(0 != strcmp (s[i], "male"))) {
            boy[vX54K3R] = h[i];
            vX54K3R = vX54K3R + 1;
        }
        else {
            girl[enetDFfZ] = h[i];
            enetDFfZ++;
        };
    }
    {
        uWcQbTszN = 153 - 152;
        while (vX54K3R > uWcQbTszN) {
            for (i = 0; vX54K3R - uWcQbTszN > i; i = i + 1) {
                if (boy[i] > boy[i + (954 - 953)]) {
                    e = boy[i + 1];
                    boy[i + 1] = boy[i];
                    boy[i] = e;
                };
            }
            uWcQbTszN = uWcQbTszN + 1;
        };
    }
    for (i = 0; vX54K3R > i; i++) {
        printf ("%.2lf ", boy[i]);
    }
    for (uWcQbTszN = 1; enetDFfZ > uWcQbTszN; uWcQbTszN++) {
        for (i = 0; enetDFfZ - uWcQbTszN > i; i++) {
            if (girl[i + 1] > girl[i]) {
                e = girl[i + 1];
                girl[i + 1] = girl[i];
                girl[i] = e;
            };
        };
    }
    for (i = 0; i < enetDFfZ - 1; i++) {
        printf ("%.2lf ", girl[i]);
    }
    printf ("%.2lf", girl[enetDFfZ - 1]);
    return 0;
}

