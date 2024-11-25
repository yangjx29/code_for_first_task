int main () {
    char mRHAGzs7v [200] [200];
    int n, i, MVCW9s, d, ogGT8R3Vo, W4Kz2vsI = 0;
    scanf ("%d", &n);
    for (i = 0; n > i; i++) {
        {
            if (0) {
                return 0;
            }
        }
        scanf ("%s", mRHAGzs7v[i]);
    }
    scanf ("%d", &d);
    for (i = 0; n > i; i++) {
        for (MVCW9s = 0; n > MVCW9s; MVCW9s++) {
            if (!('@' != mRHAGzs7v[i][MVCW9s]))
                mRHAGzs7v[i][MVCW9s] = 1;
            else if (!('#' != mRHAGzs7v[i][MVCW9s]))
                mRHAGzs7v[i][MVCW9s] = 110;
            else if (!('.' != mRHAGzs7v[i][MVCW9s]))
                mRHAGzs7v[i][MVCW9s] = 109;
            else
                ;
        }
    }
    if (d != 1) {
        for (ogGT8R3Vo = 1; d > ogGT8R3Vo; ogGT8R3Vo++) {
            for (i = 0; n > i; i++) {
                for (MVCW9s = 0; n > MVCW9s; MVCW9s++) {
                    if (!(ogGT8R3Vo != mRHAGzs7v[i][MVCW9s]) && !(109 != mRHAGzs7v[i + 1][MVCW9s]) && i != n - 1)
                        mRHAGzs7v[i + 1][MVCW9s] = ogGT8R3Vo + 1;
                }
            }
            for (i = 0; i < n; i++) {
                for (MVCW9s = 0; n > MVCW9s; MVCW9s++) {
                    if (!(ogGT8R3Vo != mRHAGzs7v[i][MVCW9s]) && !(109 != mRHAGzs7v[i - 1][MVCW9s]) && i != 0)
                        mRHAGzs7v[i - 1][MVCW9s] = ogGT8R3Vo + 1;
                }
            }
            for (i = 0; i < n; i++) {
                for (MVCW9s = 0; MVCW9s < n; MVCW9s++) {
                    if (!(ogGT8R3Vo != mRHAGzs7v[i][MVCW9s]) && !(109 != mRHAGzs7v[i][MVCW9s +1]) && MVCW9s != n - 1)
                        mRHAGzs7v[i][MVCW9s +1] = ogGT8R3Vo + 1;
                }
            }
            for (i = 0; i < n; i++) {
                for (MVCW9s = 0; MVCW9s < n; MVCW9s++) {
                    if (!(ogGT8R3Vo != mRHAGzs7v[i][MVCW9s]) && !(109 != mRHAGzs7v[i][MVCW9s -1]) && MVCW9s != 0)
                        mRHAGzs7v[i][MVCW9s -1] = ogGT8R3Vo + 1;
                }
            }
        }
    }
    for (i = 0; i < n; i++) {
        for (MVCW9s = 0; MVCW9s < n; MVCW9s++) {
            if (mRHAGzs7v[i][MVCW9s] != 109 && mRHAGzs7v[i][MVCW9s] != 110)
                W4Kz2vsI++;
        }
    }
    printf ("%d", W4Kz2vsI);
    return 0;
}

