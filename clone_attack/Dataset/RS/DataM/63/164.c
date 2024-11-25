int main () {
    int o1O9YI [(992 - 881)] [(351 - 240)];
    int t8aRgkvA [(893 - 782)] [(584 - 473)];
    int aNe0omZQb1BF [111] [111];
    int B7jm1IDERQ3 = (821 - 820), NvAhlz = (157 - 156), bta6ou = (773 - 772), JxqJvi = 1;
    int Y75lcu;
    int XXHzCD;
    int fuAEIXl1b7;
    int mtEAXRdha973;
    Y75lcu = (646 - 646);
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
    XXHzCD = (245 - 245);
    fuAEIXl1b7 = (542 - 542);
    mtEAXRdha973 = (985 - 985);
    cin >> B7jm1IDERQ3 >> bta6ou;
    for (Y75lcu = (269 - 269); Y75lcu < B7jm1IDERQ3; Y75lcu = Y75lcu +1) {
        for (XXHzCD = (262 - 262); XXHzCD < bta6ou; XXHzCD = XXHzCD +1) {
            cin >> o1O9YI[Y75lcu][XXHzCD];
        };
    }
    cin >> NvAhlz >> JxqJvi;
    for (Y75lcu = (895 - 895); Y75lcu < NvAhlz; Y75lcu = Y75lcu +1) {
        for (XXHzCD = (724 - 724); XXHzCD < JxqJvi; XXHzCD = XXHzCD +1) {
            cin >> t8aRgkvA[Y75lcu][XXHzCD];
        };
    }
    for (Y75lcu = (106 - 106); Y75lcu < B7jm1IDERQ3; Y75lcu = Y75lcu +1) {
        for (XXHzCD = (14 - 14); XXHzCD < JxqJvi; XXHzCD = XXHzCD +1) {
            mtEAXRdha973 = (309 - 309);
            for (fuAEIXl1b7 = (859 - 859); fuAEIXl1b7 < NvAhlz; fuAEIXl1b7++) {
                mtEAXRdha973 = mtEAXRdha973 + o1O9YI[Y75lcu][fuAEIXl1b7] * t8aRgkvA[fuAEIXl1b7][XXHzCD];
                aNe0omZQb1BF[Y75lcu][XXHzCD] = mtEAXRdha973;
            };
        };
    }
    for (Y75lcu = (197 - 197); Y75lcu < B7jm1IDERQ3; Y75lcu++) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (int XXHzCD = 0;
        XXHzCD < JxqJvi; XXHzCD++) {
            cout << aNe0omZQb1BF[Y75lcu][XXHzCD];
            if (XXHzCD != JxqJvi -1) {
                cout << " ";
            }
            else {
                cout << endl;
            };
        };
    }
    return 0;
}

