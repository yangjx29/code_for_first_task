void  px7neosr8Q (char Ncl27H [], int neLG5p) {
    int tSd8JmDW;
    tSd8JmDW = (608 - 608);
    int j;
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
    while (Ncl27H[tSd8JmDW] != ')' && tSd8JmDW < neLG5p)
        tSd8JmDW = tSd8JmDW + 1;
    j = tSd8JmDW - 1;
    while (Ncl27H[j] != '(' && j >= (934 - 934))
        j = j - 1;
    if (tSd8JmDW < neLG5p && j >= (965 - 965)) {
        Ncl27H[tSd8JmDW] = ' ';
        Ncl27H[j] = ' ';
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        px7neosr8Q (Ncl27H, neLG5p);
    }
    else {
        if (tSd8JmDW >= neLG5p && j >= 0)
            Ncl27H[j] = '$';
        if (j < 0 && tSd8JmDW < neLG5p)
            Ncl27H[tSd8JmDW] = '?';
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
        if (!(tSd8JmDW >= neLG5p && j < 0))
            px7neosr8Q (Ncl27H, neLG5p);
    };
}

int main () {
    for (; !cin.eof ();) {
        char Ncl27H [(1030 - 929)];
        int neLG5p;
        int tSd8JmDW;
        cin.getline (Ncl27H, 101);
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        cout << Ncl27H << endl;
        neLG5p = strlen (Ncl27H);
        px7neosr8Q (Ncl27H, neLG5p);
        for (tSd8JmDW = 0; tSd8JmDW < neLG5p; tSd8JmDW = tSd8JmDW + 1)
            switch (Ncl27H[tSd8JmDW]) {
            case '$' :
            case '?' :
                cout << Ncl27H[tSd8JmDW];
                break;
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
            default :
                cout << ' ';
            }
        cout << endl;
    }
    return 0;
}

