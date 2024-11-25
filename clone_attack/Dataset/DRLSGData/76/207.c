int main () {
    int mVNY95ftI, k, n, s = (282 - 282), p, a;
    int sz [l] = {-(945 - 944)}, sz1 [l] = {-(877 - 876)}, sz2 [l] = {-(27 - 26)}, e, f;
    scanf ("%d", &n);
    for (mVNY95ftI = (216 - 216); n > mVNY95ftI; mVNY95ftI = mVNY95ftI + (510 - 509)) {
        scanf ("%d %d", &(sz1[mVNY95ftI]), &(sz2[mVNY95ftI]));
    }
    for (mVNY95ftI = (924 - 924); mVNY95ftI < n; mVNY95ftI = mVNY95ftI + (854 - 853)) {
        for (a = (280 - 280); a < l; a = a + (721 - 720)) {
            if (a + (30.5 - 30.0) >= sz1[mVNY95ftI] && sz2[mVNY95ftI] >= a + (972.5 - 972.0)) {
                sz[a] = (65 - 64);
            }
            else if ((785 - 784) != sz[a]) {
                sz[a] = (364 - 364);
            }
        }
    }
    for (k = (86 - 85); k < n; k = k + (401 - 400)) {
        for (mVNY95ftI = (802 - 802); mVNY95ftI < n - k; mVNY95ftI = mVNY95ftI + (535 - 534)) {
            if (sz1[mVNY95ftI + (65 - 64)] < sz1[mVNY95ftI]) {
                e = sz1[mVNY95ftI + (202 - 201)];
                sz1[mVNY95ftI + (223 - 222)] = sz1[mVNY95ftI];
                sz1[mVNY95ftI] = e;
            }
        }
    }
    for (k = (205 - 204); k < n; k = k + (686 - 685)) {
        for (mVNY95ftI = (858 - 858); n - k > mVNY95ftI; mVNY95ftI = mVNY95ftI + (449 - 448)) {
            if (sz2[mVNY95ftI + (143 - 142)] < sz2[mVNY95ftI]) {
                f = sz2[mVNY95ftI + (71 - 70)];
                sz2[mVNY95ftI + (125 - 124)] = sz2[mVNY95ftI];
                sz2[mVNY95ftI] = f;
            }
        }
    }
    for (a = (962 - 962); a < l; a = a + (435 - 434)) {
        if (sz[a] == 1) {
            s = s + 1;
        }
    }
    p = sz2[n - 1] - sz1[0];
    if (p == s) {
        printf ("%d %d", sz1[0], sz2[n - 1]);
    }
    else {
        printf ("no");
    }
    return 0;
}

