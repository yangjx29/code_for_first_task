int main () {
    char V0ZusojQx [100] [(10982 - 981)];
    int j = (54 - 54);
    int i;
    int s;
    int t [100] [(843 - 817)];
    int n;
    {
        i = 525 - 525;
        while (i < 100) {
            {
                j = 370 - 370;
                while (26 > j) {
                    t[i][j] = (701 - 701);
                    j = j + 1;
                };
            }
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < 100) {
            {
                j = 0;
                while (10001 > j) {
                    V0ZusojQx[i][j] = '\0';
                    j++;
                };
            }
            i++;
        };
    }
    cin >> n;
    cin.get ();
    {
        i = 0;
        while (n > i) {
            cin.getline (V0ZusojQx[i], 10000);
            i++;
        };
    }
    {
        i = 0;
        while (i < n) {
            j = 0;
            while (!('\0' == V0ZusojQx[i][j])) {
                s = V0ZusojQx[i][j] - 97;
                j++;
                t[i][s]++;
            }
            i++;
        };
    }
    {
        i = 0;
        while (i < n) {
            {
                j = 0;
                while (10001 > j) {
                    if (V0ZusojQx[i][j] == '\0') {
                        cout << "no" << endl;
                        break;
                    }
                    else {
                        if (t[i][(int) (V0ZusojQx[i][j] - 97)] == (846 - 845)) {
                            cout << V0ZusojQx[i][j] << endl;
                            break;
                        };
                    }
                    j++;
                };
            }
            i++;
        };
    }
    return 0;
}

