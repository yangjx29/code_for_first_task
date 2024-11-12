int main () {
    int i, j, PMObZ8ULd9kY [(742 - 736)] [(482 - 476)], L [(578 - 572)], pV215RQ7 [(79 - 73)], e0QU5Rf, VQIq5hjM, c = (910 - 910);
    {
        i = 826 - 826;
        while (6 > i) {
            PMObZ8ULd9kY[i][0] = 0;
            PMObZ8ULd9kY[0][i] = 0;
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
            i++;
        };
    }
    {
        i = 400 - 399;
        while (6 > i) {
            {
                j = 28 - 27;
                while (6 > j) {
                    cin >> PMObZ8ULd9kY[i][j];
                    j++;
                };
            }
            i++;
        };
    }
    {
        i = 71 - 70;
        while (6 > i) {
            e0QU5Rf = PMObZ8ULd9kY[i][(745 - 744)];
            pV215RQ7[i] = (505 - 504);
            L[i] = (355 - 354);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            VQIq5hjM = PMObZ8ULd9kY[(870 - 869)][i];
            for (j = 1; 6 > j; j++) {
                if (PMObZ8ULd9kY[i][j] > e0QU5Rf) {
                    e0QU5Rf = PMObZ8ULd9kY[i][j];
                    pV215RQ7[i] = j;
                }
                if (PMObZ8ULd9kY[j][i] < VQIq5hjM) {
                    VQIq5hjM = PMObZ8ULd9kY[j][i];
                    L[i] = j;
                };
            }
            i++;
        };
    }
    for (i = 1; i < 6; i = i + 1) {
        if (pV215RQ7[L[i]] == i) {
            cout << L[i] << " " << i << " " << PMObZ8ULd9kY[L[i]][i];
            c = 1;
        };
    }
    if (c == 0)
        cout << "not found";
    return 0;
}

