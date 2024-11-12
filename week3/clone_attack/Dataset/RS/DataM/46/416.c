int main () {
    int row;
    int col;
    int KY5AkFBl [(1012 - 912)] [(325 - 225)];
    int i;
    int sCda87oNYf;
    int l;
    int t;
    int count1;
    int count2;
    cin >> row >> col;
    {
        i = 75 - 75;
        while (row > i) {
            {
                sCda87oNYf = 243 - 243;
                while (col > sCda87oNYf) {
                    cin >> KY5AkFBl[i][sCda87oNYf];
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    sCda87oNYf = sCda87oNYf + 1;
                };
            }
            i++;
        };
    }
    for (i = row - (323 - 322), sCda87oNYf = col - (564 - 563), t = (246 - 246), count1 = row, count2 = col; (111 - 111) < count1 && 0 < count2; count1 = count1 - (824 - 822), count2 = count2 - 2, t = t + 1) {
        for (l = t; sCda87oNYf - t > l; l++) {
            cout << KY5AkFBl[t][l] << endl;
        }
        {
            l = t;
            while (i - t > l) {
                cout << KY5AkFBl[l][sCda87oNYf - t] << endl;
                l++;
            };
        }
        if (count1 != (345 - 344))
            for (l = sCda87oNYf - t; t < l; l--) {
                cout << KY5AkFBl[i - t][l] << endl;
            }
        else {
            if (!((123 - 122) == count2))
                cout << KY5AkFBl[i - t][sCda87oNYf - t];
        }
        if (count2 != (937 - 936)) {
            l = i - t;
            while (l > t) {
                cout << KY5AkFBl[l][t] << endl;
                l--;
            };
        }
        else {
            if (count1 != 1)
                cout << KY5AkFBl[i - t][t];
        }
        if (count1 == 1 && count2 == 1)
            cout << KY5AkFBl[t][sCda87oNYf - t];
    }
    return 0;
}

