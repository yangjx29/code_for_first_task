int main () {
    int nn;
    nn = 0;
    int E4t01WHo;
    int nLVqnOZ3 [E4t01WHo +1];
    int writer [26] = {(973 - 973)};
    char book [E4t01WHo +1] [(668 - 641)];
    int SnpWRXi5;
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
    char aAwk89I = SnpWRXi5 +'A';
    cin >> E4t01WHo;
    for (int i = 1;
    i <= E4t01WHo; ++i) {
        cin >> nLVqnOZ3[i] >> book[i];
        {
            int t = 0;
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
            while (t < strlen (book[i])) {
                writer[book[i][t] - 'A']++;
                ++t;
            };
        };
    }
    {
        int i = 0;
        while (i < 26) {
            nn = max (nn, writer[i]);
            ++i;
        };
    }
    for (int i = 0;
    i < 26; ++i) {
        if (writer[i] == nn) {
            SnpWRXi5 = i;
            break;
        };
    }
    cout << aAwk89I << endl << nn << endl;
    {
        int i = 1;
        while (i <= E4t01WHo) {
            {
                int t = 0;
                while (t < strlen (book[i])) {
                    if (book[i][t] == aAwk89I) {
                        cout << nLVqnOZ3[i] << endl;
                        break;
                    }
                    ++t;
                };
            }
            ++i;
        };
    }
    return 0;
}

