int main () {
    int nG1lwCJUjv [(166 - 66)] [(616 - 516)];
    int b [(314 - 214)] [100];
    int c [100] [100];
    int eTJ3ZAhc02F;
    int y1;
    int oFcX9H;
    int y2;
    int i;
    int sshdoq7N;
    int tegOtq7ljH6;
    cin >> eTJ3ZAhc02F >> y1;
    {
        i = 346 - 346;
        while (100 > i) {
            {
                sshdoq7N = 0;
                while (100 > sshdoq7N) {
                    nG1lwCJUjv[i][sshdoq7N] = 0, b[i][sshdoq7N] = 0, c[i][sshdoq7N] = 0;
                    sshdoq7N++;
                };
            }
            i++;
        };
    }
    {
        i = 0;
        while (eTJ3ZAhc02F > i) {
            {
                sshdoq7N = 0;
                while (y1 > sshdoq7N) {
                    cin >> nG1lwCJUjv[i][sshdoq7N];
                    sshdoq7N++;
                };
            }
            i++;
        };
    }
    cin >> oFcX9H >> y2;
    {
        i = 0;
        while (oFcX9H > i) {
            {
                sshdoq7N = 0;
                while (y2 > sshdoq7N) {
                    cin >> b[i][sshdoq7N];
                    sshdoq7N++;
                };
            }
            i++;
        };
    }
    {
        i = 0;
        while (eTJ3ZAhc02F > i) {
            {
                sshdoq7N = 0;
                while (y2 > sshdoq7N) {
                    {
                        tegOtq7ljH6 = 0;
                        while (oFcX9H > tegOtq7ljH6) {
                            c[i][sshdoq7N] = c[i][sshdoq7N] + nG1lwCJUjv[i][tegOtq7ljH6] * b[tegOtq7ljH6][sshdoq7N];
                            tegOtq7ljH6++;
                        };
                    }
                    sshdoq7N++;
                };
            }
            i++;
        };
    }
    {
        i = 0;
        while (eTJ3ZAhc02F > i) {
            {
                sshdoq7N = 0;
                while (y2 > sshdoq7N) {
                    if (sshdoq7N != 0)
                        cout << ' ' << c[i][sshdoq7N];
                    else
                        cout << c[i][sshdoq7N];
                    sshdoq7N++;
                };
            }
            i++;
            cout << endl;
        };
    }
    return 0;
}

