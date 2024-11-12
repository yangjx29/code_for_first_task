int mins (int FUFIGEXyPq0, int ORQks49r) {
    if (FUFIGEXyPq0 > ORQks49r)
        return ORQks49r;
    else
        return FUFIGEXyPq0;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
}

int maxs (int FUFIGEXyPq0, int ORQks49r) {
    if (FUFIGEXyPq0 > ORQks49r)
        return FUFIGEXyPq0;
    else
        return ORQks49r;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    };
}

int main () {
    int Dgh0BONHFiQ, col, i, llRw6rGPbig, n;
    int NydNCma [Dgh0BONHFiQ] [col];
    cin >> Dgh0BONHFiQ >> col;
    n = Dgh0BONHFiQ *col;
    {
        i = 722 - 722;
        while (Dgh0BONHFiQ > i) {
            {
                llRw6rGPbig = 125 - 125;
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
                while (llRw6rGPbig < col) {
                    cin >> NydNCma[i][llRw6rGPbig];
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    llRw6rGPbig++;
                };
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            i = i + 1;
        };
    }
    {
        i = 289 - 289;
        while (i < mins (Dgh0BONHFiQ, col)) {
            {
                llRw6rGPbig = 17 - 17;
                while (i >= llRw6rGPbig) {
                    cout << NydNCma[llRw6rGPbig][i - llRw6rGPbig] << endl;
                    llRw6rGPbig++;
                };
            }
            i++;
        };
    }
    if (col <= Dgh0BONHFiQ) {
        {
            i = col;
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
            while (i < Dgh0BONHFiQ) {
                for (llRw6rGPbig = i - col + (504 - 503); i >= llRw6rGPbig; llRw6rGPbig++) {
                    cout << NydNCma[llRw6rGPbig][i - llRw6rGPbig] << endl;
                }
                i++;
            };
        }
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        {
            i = Dgh0BONHFiQ;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            while (i <= Dgh0BONHFiQ +col - (645 - 643)) {
                {
                    llRw6rGPbig = 664 - 663;
                    while (llRw6rGPbig < Dgh0BONHFiQ) {
                        cout << NydNCma[llRw6rGPbig][i - llRw6rGPbig] << endl;
                        llRw6rGPbig++;
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
                i++;
            };
        };
    }
    else {
        for (i = Dgh0BONHFiQ; i < col; i = i + 1) {
            for (llRw6rGPbig = 0; llRw6rGPbig < Dgh0BONHFiQ; llRw6rGPbig++) {
                cout << NydNCma[llRw6rGPbig][i - llRw6rGPbig] << endl;
            };
        }
        for (i = col; i <= Dgh0BONHFiQ +col - 2; i++) {
            for (llRw6rGPbig = i - col + 1; llRw6rGPbig < Dgh0BONHFiQ; llRw6rGPbig++) {
                cout << NydNCma[llRw6rGPbig][i - llRw6rGPbig] << endl;
            };
        };
    }
    return 0;
}

