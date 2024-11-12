int main () {
    int m, tAEStI [1002], i, rp2V0fWdDmbo [26] = {0}, htMDLJUVaWA, j, n = 0;
    char name [1002] [27];
    char a;
    char max;
    cin >> m;
    {
        i = 0;
        while (i < m) {
            cin >> tAEStI[i];
            cin >> name[i];
            htMDLJUVaWA = strlen (name[i]);
            {
                j = 0;
                while (j < htMDLJUVaWA) {
                    a = name[i][j];
                    j++;
                    rp2V0fWdDmbo[a - 'A']++;
                };
            }
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < 26) {
            if (rp2V0fWdDmbo[i] > n) {
                n = rp2V0fWdDmbo[i];
                max = i + 'A';
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            i = i + 1;
        };
    }
    cout << max << endl;
    cout << n << endl;
    {
        i = 0;
        while (i < m) {
            htMDLJUVaWA = strlen (name[i]);
            {
                j = 0;
                while (j < htMDLJUVaWA) {
                    if (name[i][j] == max) {
                        cout << tAEStI[i] << endl;
                        break;
                    }
                    j++;
                };
            }
            i++;
        };
    }
    return 0;
}

