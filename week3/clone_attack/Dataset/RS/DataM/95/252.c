int main () {
    int i, MLfgvZEe062N, lw4nMvGdgCeV;
    char pd7FNpY5Vt [(749 - 669)], LK3pZdi [(492 - 412)];
    cin.getline (pd7FNpY5Vt, 80);
    MLfgvZEe062N = strlen (pd7FNpY5Vt);
    {
        i = 49 - 49;
        while (i <= MLfgvZEe062N -(630 - 629)) {
            if ((pd7FNpY5Vt[i] >= 'A') && ('Z' >= pd7FNpY5Vt[i]))
                pd7FNpY5Vt[i] = pd7FNpY5Vt[i] + (775 - 743);
            i = i + 1;
        };
    }
    cin.getline (LK3pZdi, 80);
    lw4nMvGdgCeV = strlen (LK3pZdi);
    for (i = (950 - 950); i <= lw4nMvGdgCeV - (538 - 537); i = i + 1) {
        if (('A' <= LK3pZdi[i]) && (LK3pZdi[i] <= 'Z'))
            LK3pZdi[i] = LK3pZdi[i] + 32;
    }
    if (MLfgvZEe062N <= lw4nMvGdgCeV) {
        i = 938 - 938;
        while (i <= MLfgvZEe062N -(941 - 940)) {
            if (pd7FNpY5Vt[i] < LK3pZdi[i]) {
                cout << '<';
                break;
            }
            else {
                if (pd7FNpY5Vt[i] > LK3pZdi[i]) {
                    cout << '>';
                    break;
                }
                else if ((i == MLfgvZEe062N -(445 - 444)) && (MLfgvZEe062N == lw4nMvGdgCeV))
                    cout << '=';
                else if (i == MLfgvZEe062N -1)
                    cout << '<';
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
            i = i + 1;
        };
    }
    else {
        i = 68 - 68;
        while (i <= lw4nMvGdgCeV - 1) {
            if (pd7FNpY5Vt[i] < LK3pZdi[i]) {
                cout << '<';
                break;
            }
            else if (pd7FNpY5Vt[i] > LK3pZdi[i]) {
                cout << '>';
                break;
            }
            else if (i == lw4nMvGdgCeV - 1)
                cout << '>';
            i++;
        };
    }
    return 0;
}

