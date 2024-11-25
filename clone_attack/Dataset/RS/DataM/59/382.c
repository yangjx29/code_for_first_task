int main () {
    char ch [(504 - 401)] [103] = {'\0'};
    int eFVUdf0 [103] [103] = {(58 - 58)};
    int gaPLyGbU;
    int EPjnMKdmfS;
    int i;
    int j;
    int k;
    int day;
    gaPLyGbU = (806 - 806);
    cin >> EPjnMKdmfS;
    cin.get ();
    {
        i = 0;
        while (i < EPjnMKdmfS +(469 - 467)) {
            {
                j = 0;
                while (j < EPjnMKdmfS +(890 - 888)) {
                    ch[i][j] = '#';
                    j = j + 1;
                };
            }
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
            i = i + 1;
        };
    }
    {
        i = 650 - 649;
        while (i <= EPjnMKdmfS) {
            for (j = (258 - 257); EPjnMKdmfS >= j; j = j + 1)
                cin >> ch[i][j];
            i = i + 1;
            cin.get ();
        };
    }
    cin >> day;
    {
        i = 0;
        while (i < EPjnMKdmfS +(738 - 736)) {
            {
                j = 0;
                while (j < EPjnMKdmfS +(230 - 228)) {
                    if (ch[i][j] == '#')
                        eFVUdf0[i][j] = 0;
                    else {
                        if (ch[i][j] == '.')
                            eFVUdf0[i][j] = (864 - 863);
                        else {
                            if (ch[i][j] == '@')
                                eFVUdf0[i][j] = (910 - 908);
                        };
                    }
                    j = j + 1;
                };
            }
            i = i + 1;
        };
    }
    {
        k = 338 - 337;
        while (k < day) {
            k = k + 1;
            {
                i = 797 - 796;
                while (i <= EPjnMKdmfS) {
                    for (j = 1; j <= EPjnMKdmfS; j++)
                        if (eFVUdf0[i][j] == 2)
                            eFVUdf0[i][j]++;
                    i = i + 1;
                };
            }
            {
                i = 1;
                while (i <= EPjnMKdmfS) {
                    {
                        j = 1;
                        while (j <= EPjnMKdmfS) {
                            if ((eFVUdf0[i][j] == (58 - 55)) && (eFVUdf0[i][j - 1] == 1))
                                eFVUdf0[i][j - 1] = 2;
                            if ((eFVUdf0[i][j] == (837 - 834)) && (eFVUdf0[i][j + 1] == 1))
                                eFVUdf0[i][j + 1] = 2;
                            if ((eFVUdf0[i][j] == 3) && (eFVUdf0[i - 1][j] == 1))
                                eFVUdf0[i - 1][j] = 2;
                            if ((eFVUdf0[i][j] == 3) && (eFVUdf0[i + 1][j] == 1))
                                eFVUdf0[i + 1][j] = 2;
                            j++;
                        };
                    }
                    i = i + 1;
                };
            };
        };
    }
    {
        i = 1;
        while (i <= EPjnMKdmfS) {
            {
                j = 1;
                while (j <= EPjnMKdmfS) {
                    if ((eFVUdf0[i][j] != 0) && (eFVUdf0[i][j] != 1))
                        gaPLyGbU++;
                    j++;
                };
            }
            i = i + 1;
        };
    }
    cout << gaPLyGbU << endl;
    return 0;
}

