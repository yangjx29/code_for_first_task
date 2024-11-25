int main () {
    int AL2Pl7MU [(977 - 877)] [100];
    int zfOz1Sb;
    int sZa6wKMT95rp;
    int col;
    int oYLW89r4blh;
    int Bv1s7c;
    zfOz1Sb = (776 - 776);
    int wZHjiKepQ1;
    cin >> oYLW89r4blh >> Bv1s7c;
    for (sZa6wKMT95rp = 0; oYLW89r4blh > sZa6wKMT95rp; sZa6wKMT95rp++) {
        col = 0;
        while (col < Bv1s7c) {
            cin >> AL2Pl7MU[sZa6wKMT95rp][col];
            col++;
        };
    }
    for (wZHjiKepQ1 = (299 - 298); wZHjiKepQ1 <= oYLW89r4blh / 2 + 1; wZHjiKepQ1++) {
        for (col = wZHjiKepQ1 - 1; col <= Bv1s7c -wZHjiKepQ1; col = col + 1) {
            if (zfOz1Sb == Bv1s7c *oYLW89r4blh)
                break;
            zfOz1Sb++;
            cout << AL2Pl7MU[wZHjiKepQ1 - 1][col] << endl;
        }
        for (sZa6wKMT95rp = wZHjiKepQ1; oYLW89r4blh - wZHjiKepQ1 >= sZa6wKMT95rp; sZa6wKMT95rp++) {
            if (zfOz1Sb == oYLW89r4blh * Bv1s7c)
                break;
            zfOz1Sb++;
            cout << AL2Pl7MU[sZa6wKMT95rp][Bv1s7c -wZHjiKepQ1] << endl;
        }
        for (col = Bv1s7c -wZHjiKepQ1 - 1; col >= wZHjiKepQ1 - 1; col--) {
            if (zfOz1Sb == oYLW89r4blh * Bv1s7c)
                break;
            cout << AL2Pl7MU[oYLW89r4blh - wZHjiKepQ1][col] << endl;
            zfOz1Sb++;
        }
        {
            sZa6wKMT95rp = oYLW89r4blh - wZHjiKepQ1 - 1;
            while (sZa6wKMT95rp >= wZHjiKepQ1) {
                if (zfOz1Sb == Bv1s7c *oYLW89r4blh)
                    break;
                cout << AL2Pl7MU[sZa6wKMT95rp][wZHjiKepQ1 - 1] << endl;
                sZa6wKMT95rp--;
                zfOz1Sb++;
            };
        }
        if (zfOz1Sb == oYLW89r4blh * Bv1s7c)
            break;
    }
    return 0;
}

