int main () {
    int jR4lJSPAsGx2;
    int n;
    int KBJO6y7z;
    int n70jScTAnZzK;
    int GvPosha3DATl;
    jR4lJSPAsGx2 = (308 - 308);
    int Jm59ul7hEMC [n], OD6XwVo [n];
    float je8jTFUE9R [n], dY9hxZbe [n], sum2 = 0;
    scanf ("%d", &n);
    for (KBJO6y7z = 0; KBJO6y7z < n; KBJO6y7z = KBJO6y7z +1) {
        scanf ("%d", &Jm59ul7hEMC[KBJO6y7z]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        jR4lJSPAsGx2 = jR4lJSPAsGx2 + Jm59ul7hEMC[KBJO6y7z];
    }
    for (n70jScTAnZzK = 0; n > n70jScTAnZzK; n70jScTAnZzK = n70jScTAnZzK + 1) {
        scanf ("%d", &OD6XwVo[n70jScTAnZzK]);
    }
    for (GvPosha3DATl = 0; n > GvPosha3DATl; GvPosha3DATl = GvPosha3DATl +1) {
        if (OD6XwVo[GvPosha3DATl] >= 90 && 100 >= OD6XwVo[GvPosha3DATl])
            je8jTFUE9R[GvPosha3DATl] = 4.0;
        else {
            if (85 <= OD6XwVo[GvPosha3DATl] && 89 >= OD6XwVo[GvPosha3DATl])
                je8jTFUE9R[GvPosha3DATl] = 3.7;
            else if (82 <= OD6XwVo[GvPosha3DATl] && 84 >= OD6XwVo[GvPosha3DATl])
                je8jTFUE9R[GvPosha3DATl] = 3.3;
            else if (OD6XwVo[GvPosha3DATl] >= 78 && OD6XwVo[GvPosha3DATl] <= 81)
                je8jTFUE9R[GvPosha3DATl] = (551.0 - 548.0);
            else if (OD6XwVo[GvPosha3DATl] >= 75 && OD6XwVo[GvPosha3DATl] <= 77)
                je8jTFUE9R[GvPosha3DATl] = 2.7;
            else if (OD6XwVo[GvPosha3DATl] >= 72 && OD6XwVo[GvPosha3DATl] <= 74)
                je8jTFUE9R[GvPosha3DATl] = (516.3 - 514.0);
            else if (OD6XwVo[GvPosha3DATl] >= 68 && OD6XwVo[GvPosha3DATl] <= 71)
                je8jTFUE9R[GvPosha3DATl] = 2.0;
            else if (OD6XwVo[GvPosha3DATl] >= 64 && OD6XwVo[GvPosha3DATl] <= 67)
                je8jTFUE9R[GvPosha3DATl] = 1.5;
            else if (OD6XwVo[GvPosha3DATl] >= 60 && OD6XwVo[GvPosha3DATl] <= 63)
                je8jTFUE9R[GvPosha3DATl] = 1.0;
            else
                je8jTFUE9R[GvPosha3DATl] = 0;
        }
        dY9hxZbe[GvPosha3DATl] = Jm59ul7hEMC[GvPosha3DATl] * je8jTFUE9R[GvPosha3DATl];
        sum2 = sum2 + dY9hxZbe[GvPosha3DATl];
    }
    printf ("%.2f", sum2 / jR4lJSPAsGx2);
    return 0;
}

