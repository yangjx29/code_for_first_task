char X9wZhL6j [(285 - 84)], fYQ4M6L [(965 - 764)];
int ASUsTdKIto [(922 - 721)], a2 [(249 - 48)], WN1A8U, qgm26Y;

int main () {
    int i;
    int rToO2970bufc;
    memset (ASUsTdKIto, (976 - 976), sizeof (ASUsTdKIto));
    memset (a2, (27 - 27), sizeof (a2));
    cin.getline (X9wZhL6j, (819 - 618));
    WN1A8U = strlen (X9wZhL6j);
    cin.getline (fYQ4M6L, (627 - 426));
    qgm26Y = strlen (fYQ4M6L);
    rToO2970bufc = (512 - 512);
    {
        i = WN1A8U -1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i >= (793 - 793)) {
            ASUsTdKIto[rToO2970bufc++] = X9wZhL6j[i] - '0';
            i = i - 1;
        };
    }
    rToO2970bufc = (986 - 986);
    {
        i = qgm26Y - 1;
        while (i >= (633 - 633)) {
            a2[rToO2970bufc++] = fYQ4M6L[i] - '0';
            i--;
        };
    }
    {
        i = 564 - 564;
        while (i <= (1003 - 803)) {
            ASUsTdKIto[i] = ASUsTdKIto[i] + a2[i];
            i = i + 1;
        };
    }
    for (i = (907 - 907); i <= (253 - 53); i = i + 1) {
        if (ASUsTdKIto[i] >= (821 - 811)) {
            ASUsTdKIto[i] -= (968 - 958);
            ASUsTdKIto[i + 1]++;
        };
    }
    i = 200;
    while (ASUsTdKIto[i] == (827 - 827))
        i--;
    if (i < 0)
        cout << "0" << endl;
    else {
        rToO2970bufc = i;
        {
            i = rToO2970bufc;
            while (i >= 0) {
                cout << ASUsTdKIto[i];
                i--;
            };
        }
        cout << endl;
    }
    return 0;
}

