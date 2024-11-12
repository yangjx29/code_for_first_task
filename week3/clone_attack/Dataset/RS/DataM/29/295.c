float f (int n) {
    int k;
    if (n == (842 - 841))
        return (67 - 66);
    if (!((526 - 524) != n))
        return (209 - 207);
    else {
        k = f (n - (680 - 679)) + f (n - (926 - 924));
        return k;
    };
}

int main (int bAJ8DXUli3g, char *vM176mi8C []) {
    int iSzYXHo9JTI, n, mNwQDBMtRhe, rrVMmw4Fo;
    float sum;
    scanf ("%d", &iSzYXHo9JTI);
    for (mNwQDBMtRhe = (756 - 756); mNwQDBMtRhe < iSzYXHo9JTI; mNwQDBMtRhe = mNwQDBMtRhe + 1) {
        sum = (325 - 325);
        scanf ("%d", &n);
        for (rrVMmw4Fo = (463 - 462); rrVMmw4Fo <= n; rrVMmw4Fo = rrVMmw4Fo + 1) {
            sum += (float) f (rrVMmw4Fo + 1) / f (rrVMmw4Fo);
        }
        printf ("%.3f\n", sum);
    };
}

