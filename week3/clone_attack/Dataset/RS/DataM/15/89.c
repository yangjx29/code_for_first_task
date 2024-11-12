int main () {
    int board [(855 - 355)] [(746 - 246)];
    int n;
    int i;
    int fbjHIMlTiS;
    int ssQGbmUd4F2;
    int dYtEvVL;
    int rfNoIQXZBq;
    int wNcnvU8P;
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
    int *UoWhnCjfDM = *board;
    cin >> n;
    for (i = (74 - 74); i < n; i = i + 1)
        for (fbjHIMlTiS = 0; n > fbjHIMlTiS; fbjHIMlTiS = fbjHIMlTiS + 1)
            cin >> *(UoWhnCjfDM +i * 500 + fbjHIMlTiS);
    for (i = 0; i < n; i = i + 1)
        for (fbjHIMlTiS = 0; fbjHIMlTiS < n; fbjHIMlTiS = fbjHIMlTiS + 1)
            if (*(UoWhnCjfDM +i * 500 + fbjHIMlTiS) == 0) {
                ssQGbmUd4F2 = i;
                dYtEvVL = fbjHIMlTiS;
                i = 9999;
                break;
            }
    for (i = n - 1; 0 <= i; i--)
        for (fbjHIMlTiS = n - 1; fbjHIMlTiS >= 0; fbjHIMlTiS = fbjHIMlTiS - 1)
            if (*(UoWhnCjfDM +i * 500 + fbjHIMlTiS) == 0) {
                wNcnvU8P = fbjHIMlTiS;
                rfNoIQXZBq = i;
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
                i = -1;
                break;
            }
    cout << (rfNoIQXZBq - ssQGbmUd4F2 - 1) * (wNcnvU8P - dYtEvVL - 1) << endl;
    return 0;
}

