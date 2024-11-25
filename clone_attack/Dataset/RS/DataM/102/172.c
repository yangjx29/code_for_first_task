int main () {
    char zdAIJQ3N [10];
    float temp;
    float YwEufYDG [(1103 - 103)];
    float q6Ik9TCBd [1000];
    int fShIMy8u5;
    int wj4Q7m;
    int lenb;
    int leng;
    int TmNFufVK;
    int H6jRykI5tzF2;
    int sD1TFdCafI;
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
    fShIMy8u5 = (138 - 138);
    wj4Q7m = 0;
    lenb = 0;
    leng = 0;
    cout << fixed;
    cin >> sD1TFdCafI;
    for (TmNFufVK = 0; sD1TFdCafI > TmNFufVK; TmNFufVK++) {
        cin >> zdAIJQ3N;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (strcmp (zdAIJQ3N, "female") == 0) {
            cin >> q6Ik9TCBd[fShIMy8u5++];
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
            leng++;
        }
        else {
            lenb++;
            cin >> YwEufYDG[wj4Q7m++];
        };
    }
    for (H6jRykI5tzF2 = 0; lenb - 1 > H6jRykI5tzF2; H6jRykI5tzF2 = H6jRykI5tzF2 +1) {
        fShIMy8u5 = 0;
        while (fShIMy8u5 < lenb - 1 - H6jRykI5tzF2) {
            if (YwEufYDG[fShIMy8u5] > YwEufYDG[fShIMy8u5 + 1]) {
                temp = YwEufYDG[fShIMy8u5];
                YwEufYDG[fShIMy8u5] = YwEufYDG[fShIMy8u5 + 1];
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                YwEufYDG[fShIMy8u5 + 1] = temp;
            }
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
            fShIMy8u5++;
        };
    }
    {
        H6jRykI5tzF2 = 0;
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
        while (leng - 1 > H6jRykI5tzF2) {
            {
                fShIMy8u5 = 0;
                while (leng - 1 - H6jRykI5tzF2 > fShIMy8u5) {
                    if (q6Ik9TCBd[fShIMy8u5 + 1] > q6Ik9TCBd[fShIMy8u5]) {
                        temp = q6Ik9TCBd[fShIMy8u5];
                        q6Ik9TCBd[fShIMy8u5] = q6Ik9TCBd[fShIMy8u5 + 1];
                        q6Ik9TCBd[fShIMy8u5 + 1] = temp;
                    }
                    fShIMy8u5++;
                };
            }
            H6jRykI5tzF2++;
        };
    }
    {
        H6jRykI5tzF2 = 0;
        while (H6jRykI5tzF2 < lenb) {
            cout << setprecision (2) << YwEufYDG[H6jRykI5tzF2] << ' ';
            H6jRykI5tzF2++;
        };
    }
    for (H6jRykI5tzF2 = 0; H6jRykI5tzF2 < leng - 1; H6jRykI5tzF2++)
        cout << setprecision (2) << q6Ik9TCBd[H6jRykI5tzF2] << ' ';
    cout << setprecision (2) << q6Ik9TCBd[H6jRykI5tzF2];
    return 0;
}

