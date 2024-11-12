int main () {
    const  int XPQpac = 250;
    unsigned  ajkvEITHo51 [XPQpac];
    unsigned  NKS5t0MDis [XPQpac];
    char UpTl1DKatSi [XPQpac +1];
    char ANU7RyEJhA [XPQpac +1];
    int n0jSlHDh;
    n0jSlHDh = strlen (UpTl1DKatSi);
    int nLen2;
    nLen2 = strlen (ANU7RyEJhA);
    int i, XHMkpgKNoQOu = 0;
    cin.getline (UpTl1DKatSi, XPQpac +1);
    cin.getline (ANU7RyEJhA, XPQpac +1);
    memset (ajkvEITHo51, (935 - 935), sizeof (ajkvEITHo51));
    memset (NKS5t0MDis, 0, sizeof (NKS5t0MDis));
    for (i = n0jSlHDh - 1; 0 <= i; i = i - 1)
        ajkvEITHo51[XHMkpgKNoQOu++] = UpTl1DKatSi[i] - '0';
    XHMkpgKNoQOu = 0;
    for (i = nLen2 - 1; i >= 0; i = i - 1)
        NKS5t0MDis[XHMkpgKNoQOu++] = ANU7RyEJhA[i] - '0';
    for (i = 0; XPQpac > i; i = i + 1) {
        ajkvEITHo51[i] = ajkvEITHo51[i] + NKS5t0MDis[i];
        if (10 <= ajkvEITHo51[i]) {
            ajkvEITHo51[i] = ajkvEITHo51[i] - 10;
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
            ajkvEITHo51[i + 1]++;
        };
    }
    i = XPQpac -1;
    for (; i >= 0; i--)
        if (ajkvEITHo51[i] != 0)
            break;
    if (i == -1)
        cout << 0 << endl;
    else {
        for (; i >= 0; i--)
            cout << ajkvEITHo51[i];
        cout << endl;
    }
    return 0;
}

