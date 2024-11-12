int main () {
    int VWXNY1msztvf;
    int NgeEyTZUWIO;
    int uiuyDFgP3qKw;
    VWXNY1msztvf = (733 - 733);
    NgeEyTZUWIO = 0;
    uiuyDFgP3qKw = 0;
    int a [(535 - 435)] [100];
    int VRfJSgkCBIsV [100] [100];
    int c [100] [100] = {(298 - 298)};
    int x1;
    int y1;
    int x2;
    int y2;
    cin >> x1 >> y1;
    {
        VWXNY1msztvf = 0;
        while (x1 > VWXNY1msztvf) {
            {
                NgeEyTZUWIO = 0;
                while (NgeEyTZUWIO < y1) {
                    cin >> a[VWXNY1msztvf][NgeEyTZUWIO];
                    NgeEyTZUWIO = NgeEyTZUWIO +1;
                };
            }
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
            VWXNY1msztvf = VWXNY1msztvf +1;
        };
    }
    cin >> x2 >> y2;
    for (VWXNY1msztvf = 0; x2 > VWXNY1msztvf; VWXNY1msztvf++)
        for (NgeEyTZUWIO = 0; NgeEyTZUWIO < y2; NgeEyTZUWIO++)
            cin >> VRfJSgkCBIsV[VWXNY1msztvf][NgeEyTZUWIO];
    {
        VWXNY1msztvf = 0;
        while (VWXNY1msztvf < x1) {
            {
                NgeEyTZUWIO = 0;
                while (NgeEyTZUWIO < y2) {
                    {
                        uiuyDFgP3qKw = 0;
                        while (x2 > uiuyDFgP3qKw) {
                            c[VWXNY1msztvf][NgeEyTZUWIO] += a[VWXNY1msztvf][uiuyDFgP3qKw] * VRfJSgkCBIsV[uiuyDFgP3qKw][NgeEyTZUWIO];
                            uiuyDFgP3qKw++;
                        };
                    }
                    if (NgeEyTZUWIO == 0)
                        cout << c[VWXNY1msztvf][NgeEyTZUWIO];
                    else
                        cout << " " << c[VWXNY1msztvf][NgeEyTZUWIO];
                    NgeEyTZUWIO++;
                };
            }
            VWXNY1msztvf++;
            cout << endl;
        };
    }
    return 0;
}

