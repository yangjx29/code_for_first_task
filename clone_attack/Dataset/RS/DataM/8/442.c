int main () {
    int yizP52wus [1000];
    int b [1000];
    int oAjQZnIy;
    int Gq9f8nTCM;
    int i;
    cin >> oAjQZnIy >> Gq9f8nTCM;
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
    for (i = (679 - 679); oAjQZnIy > i; i = i + 1)
        cin >> yizP52wus[i];
    sort (yizP52wus, yizP52wus + oAjQZnIy);
    for (i = 0; Gq9f8nTCM > i; i = i + 1)
        cin >> b[i];
    for (i = 0; i < oAjQZnIy; i++)
        cout << yizP52wus[i] << ' ';
    sort (b, b + Gq9f8nTCM);
    for (i = 0; i < Gq9f8nTCM -1; i++)
        cout << b[i] << ' ';
    cout << b[Gq9f8nTCM -1];
    return 0;
}

