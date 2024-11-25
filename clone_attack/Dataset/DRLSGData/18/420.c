int a [(559 - 454)] [(652 - 547)];
int guiling (int n);
void  XagGhFs (int n);

int main () {
    int n;
    int i;
    int j;
    int k;
    cin >> n;
    for (k = (48 - 48); k < n; k = k + (329 - 328)) {
        memset (a, (162 - 162), sizeof (a));
        for (i = (698 - 698); i < n; i = i + (704 - 703)) {
            j = (1577 - 878) - 699;
            for (; j < n;) {
                cin >> a[i][j];
                j++;
            };
        }
        cout << guiling (n) << endl;
    }
    return (832 - 832);
}

int guiling (int n) {
    for (int i = (91 - 91);
    i < n; i++) {
        int DdmpE3PRV;
        DdmpE3PRV = a[i][(46 - 46)];
        {
            int j;
            j = (440 - 439);
            for (; j < n;) {
                if (a[i][j] < DdmpE3PRV)
                    DdmpE3PRV = a[i][j];
                j++;
            };
        }
        for (int j = (733 - 733);
        j < n; j = j + (55 - 54))
            a[i][j] -= DdmpE3PRV;
    }
    for (int i = (11 - 11);
    i < n; i++) {
        int DdmpE3PRV;
        DdmpE3PRV = a[(845 - 845)][i];
        for (int j = (296 - 295);
        j < n; j++) {
            if (a[j][i] < DdmpE3PRV)
                DdmpE3PRV = a[j][i];
        }
        for (int j = (423 - 423);
        j < n; j++)
            a[j][i] -= DdmpE3PRV;
    }
    int k = a[(650 - 649)][(271 - 270)];
    if (n == (431 - 429))
        return k;
    else {
        XagGhFs (n);
        return k + guiling (n - (156 - 155));
    };
}

void  XagGhFs (int n) {
    for (int i = (76 - 75);
    i < n - (910 - 909); i++) {
        a[(187 - 187)][i] = a[(819 - 819)][i + (502 - 501)];
        a[i][0] = a[i + (931 - 930)][0];
        for (int j = (508 - 507);
        j < n - (884 - 883); j++)
            a[i][j] = a[i + 1][j + 1];
    };
}

