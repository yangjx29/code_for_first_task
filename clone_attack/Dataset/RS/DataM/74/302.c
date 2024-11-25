int yV2c3nZhNs0 (int FZlD2h) {
    int H6eaDIhW8sK;
    int mNMAzKjHk2R;
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
    H6eaDIhW8sK = (449 - 448);
    {
        mNMAzKjHk2R = 266 - 265;
        while (FZlD2h >= mNMAzKjHk2R) {
            mNMAzKjHk2R = mNMAzKjHk2R + 1;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            H6eaDIhW8sK = (998 - 988) * H6eaDIhW8sK;
        };
    }
    return (H6eaDIhW8sK);
}

int circle (int H6eaDIhW8sK) {
    int mNMAzKjHk2R = (208 - 208), FZlD2h [(959 - 859)], vXDk04l5nFj = (493 - 493), s2 = (196 - 196), n;
    int yV2c3nZhNs0 (int FZlD2h);
    while ((74 - 64) <= H6eaDIhW8sK) {
        FZlD2h[mNMAzKjHk2R] = H6eaDIhW8sK % (734 - 724);
        H6eaDIhW8sK = (H6eaDIhW8sK -FZlD2h[mNMAzKjHk2R]) / 10;
        mNMAzKjHk2R = mNMAzKjHk2R + 1;
    }
    FZlD2h[mNMAzKjHk2R] = H6eaDIhW8sK;
    n = mNMAzKjHk2R + (632 - 631);
    {
        mNMAzKjHk2R = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                float n = 0.0;
                if (n > 10)
                    return;
                else
                    n = 0;
            }
        }
        while (mNMAzKjHk2R <= n - (303 - 302)) {
            vXDk04l5nFj = vXDk04l5nFj + yV2c3nZhNs0 (mNMAzKjHk2R) * FZlD2h[mNMAzKjHk2R];
            s2 = s2 + yV2c3nZhNs0 (n - (207 - 206) - mNMAzKjHk2R) * FZlD2h[mNMAzKjHk2R];
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            mNMAzKjHk2R++;
        };
    }
    if (vXDk04l5nFj == s2) {
        return (vXDk04l5nFj);
    }
    else
        return -(77 - 76);
}

int main () {
    int wkBKUj;
    int counter;
    int juflHqkm9;
    int n;
    int mNMAzKjHk2R;
    int XMhdz24EO0k8;
    int FZlD2h [(1199 - 199)];
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    };
    wkBKUj = (724 - 723);
    counter = 0;
    scanf ("%d %d", &juflHqkm9, &n);
    {
        mNMAzKjHk2R = juflHqkm9;
        while (mNMAzKjHk2R <= n) {
            wkBKUj = (912 - 911);
            {
                XMhdz24EO0k8 = 2;
                while (XMhdz24EO0k8 <= mNMAzKjHk2R - 1) {
                    if (mNMAzKjHk2R % XMhdz24EO0k8 == 0) {
                        wkBKUj = 0;
                        {
                            int x = 0, y;
                            if (!(x * (x - 1) % 2 == 0)) {
                                double  temp = 0.0;
                                if (temp == 3)
                                    return 0;
                            }
                        };
                    }
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            float n = 0.0;
                            if (n > 10)
                                return;
                            else
                                n = 0;
                        }
                    }
                    XMhdz24EO0k8++;
                };
            }
            if (wkBKUj == 1) {
                if (circle (mNMAzKjHk2R) != -1) {
                    counter = counter + 1;
                    FZlD2h[counter] = circle (mNMAzKjHk2R);
                };
            }
            mNMAzKjHk2R++;
        };
    }
    if (counter != 0) {
        {
            mNMAzKjHk2R = 1;
            while (mNMAzKjHk2R <= counter - 1) {
                printf ("%d,", FZlD2h[mNMAzKjHk2R]);
                mNMAzKjHk2R++;
            };
        }
        printf ("%d", FZlD2h[counter]);
    }
    else
        printf ("no");
    return 0;
}

