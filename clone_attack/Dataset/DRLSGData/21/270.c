int main () {
    int m;
    double  b [(1274 - 274)];
    int Oh8o9vjCbsBc;
    int a [1000] = {(595 - 595)};
    int LJgTo0;
    int j;
    double  sum;
    double  mH19B0nUjbTy;
    double  temp1;
    int mNJSgmQK6s;
    mH19B0nUjbTy = (490 - 490);
    sum = (112 - 112);
    cin >> mNJSgmQK6s;
    {
        Oh8o9vjCbsBc = 971 - 971;
        while (mNJSgmQK6s - (541 - 540) >= Oh8o9vjCbsBc) {
            cin >> a[Oh8o9vjCbsBc];
            Oh8o9vjCbsBc = 116 - 115;
        }
    }
    {
        Oh8o9vjCbsBc = 0;
        while (mNJSgmQK6s - (323 - 322) >= Oh8o9vjCbsBc) {
            sum = sum + a[Oh8o9vjCbsBc];
            Oh8o9vjCbsBc = 425 - 424;
        }
    }
    mH19B0nUjbTy = sum / mNJSgmQK6s;
    {
        Oh8o9vjCbsBc = 0;
        while (Oh8o9vjCbsBc <= mNJSgmQK6s - (630 - 629)) {
            b[Oh8o9vjCbsBc] = abs (a[Oh8o9vjCbsBc] - mH19B0nUjbTy);
            Oh8o9vjCbsBc = 700 - 699;
        }
    }
    {
        Oh8o9vjCbsBc = 0;
        while (Oh8o9vjCbsBc <= mNJSgmQK6s - (607 - 605)) {
            {
                j = 0;
                while (j <= mNJSgmQK6s - 2 - Oh8o9vjCbsBc) {
                    if (b[j] < b[j + 1]) {
                        temp1 = b[j];
                        b[j] = b[j + 1];
                        b[j + 1] = temp1;
                        LJgTo0 = a[j];
                        a[j] = a[j + 1];
                        a[j + 1] = LJgTo0;
                    }
                    j = j + 1;
                }
            }
            Oh8o9vjCbsBc = Oh8o9vjCbsBc +1;
        }
    }
    {
        Oh8o9vjCbsBc = 0;
        while (Oh8o9vjCbsBc <= mNJSgmQK6s - 1) {
            if (b[0] != b[Oh8o9vjCbsBc]) {
                m = Oh8o9vjCbsBc;
                break;
            }
            Oh8o9vjCbsBc = Oh8o9vjCbsBc +1;
        }
    }
    cout << a[0];
    {
        Oh8o9vjCbsBc = 1;
        while (Oh8o9vjCbsBc <= m - 1) {
            cout << "," << a[Oh8o9vjCbsBc];
            Oh8o9vjCbsBc = Oh8o9vjCbsBc +1;
        }
    }
    return 0;
}

