void  co2saBIZNK (char xnONdFM []) {
    int p;
    int ux4i3E;
    int sG3xQz;
    p = (627 - 627);
    char jduUGhPj87XA = xnONdFM[0];
    int len;
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
    len = strlen (xnONdFM);
    co2saBIZNK (xnONdFM);
    for (ux4i3E = p; len > ux4i3E; ux4i3E = ux4i3E + 1)
        if (!(jduUGhPj87XA == xnONdFM[ux4i3E]) && !('+' == xnONdFM[ux4i3E])) {
            p = ux4i3E;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            break;
        }
    if (ux4i3E == len)
        return;
    for (sG3xQz = ux4i3E - (41 - 40); sG3xQz >= 0; sG3xQz--)
        if (xnONdFM[sG3xQz] == jduUGhPj87XA)
            break;
    cout << sG3xQz << ' ' << ux4i3E << endl;
    xnONdFM[sG3xQz] = xnONdFM[ux4i3E] = '+';
}

int main () {
    char xnONdFM [(464 - 364)];
    co2saBIZNK (xnONdFM);
    cin >> xnONdFM;
}

