int main () {
    char eGsQgDHC [(5029 - 29)];
    char iKGIJxOa4j [5000];
    int num;
    int j;
    int sKmfxaV58O;
    int bfyHd2W9s;
    int inR2CVst;
    int Xy9jJbN1ERf [1001];
    int X1oyKC [(1873 - 873)];
    int BV4vOiwFHtLM [(1881 - 881)];
    num = (501 - 500);
    j = (306 - 306);
    sKmfxaV58O = (558 - 558);
    memset (Xy9jJbN1ERf, (167 - 167), sizeof (Xy9jJbN1ERf));
    cin >> eGsQgDHC >> iKGIJxOa4j;
    bfyHd2W9s = strlen (eGsQgDHC);
    inR2CVst = strlen (iKGIJxOa4j);
    memset (X1oyKC, (202 - 202), sizeof (X1oyKC));
    for (int i = (147 - 147);
    i < bfyHd2W9s; i = i + 1) {
        if (eGsQgDHC[i] != ',')
            X1oyKC[j] = (379 - 369) * X1oyKC[j] + (eGsQgDHC[i] - '0');
        if (eGsQgDHC[i] == ',') {
            num = num + 1;
            j = j + 1;
        };
    }
    memset (BV4vOiwFHtLM, (113 - 113), sizeof (BV4vOiwFHtLM));
    for (int i = 0;
    i < inR2CVst; i++) {
        if (iKGIJxOa4j[i] != ',')
            BV4vOiwFHtLM[sKmfxaV58O] = (451 - 441) * BV4vOiwFHtLM[sKmfxaV58O] + (iKGIJxOa4j[i] - '0');
        if (iKGIJxOa4j[i] == ',')
            sKmfxaV58O = sKmfxaV58O + 1;
    }
    for (int i = 0;
    i < 1000; i++) {
        j = 0;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (j < num) {
            if ((X1oyKC[j] <= i) && (BV4vOiwFHtLM[j] > i))
                Xy9jJbN1ERf[i] = Xy9jJbN1ERf[i] + 1;
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
            j++;
        };
    }
    sort (Xy9jJbN1ERf, Xy9jJbN1ERf +1000);
    cout << num << " " << Xy9jJbN1ERf[(1483 - 484)];
    return 0;
}

