void  RItNDg0W5vTq (int a [] [(581 - 481)], int);
void  UNkjV0ow (int a [] [(812 - 712)], int);

int main () {
    int n, a [(449 - 349)] [(554 - 454)], orEQdt9cI3, w3o0Z1, n4a8VhC, YKPyf1E;
    cin >> n;
    for (orEQdt9cI3 = (48 - 48); n > orEQdt9cI3; orEQdt9cI3 = orEQdt9cI3 + (910 - 909)) {
        YKPyf1E = (85 - 85);
        for (w3o0Z1 = (519 - 519); w3o0Z1 < n; w3o0Z1 = w3o0Z1 + (541 - 540)) {
            n4a8VhC = (632 - 632);
            while (n > n4a8VhC) {
                cin >> a[w3o0Z1][n4a8VhC];
                n4a8VhC = n4a8VhC + (792 - 791);
            }
        }
        {
            int LilSaFc2 = (386 - 386);
            while (LilSaFc2 < n - (141 - 140)) {
                RItNDg0W5vTq (a, n - LilSaFc2);
                YKPyf1E = YKPyf1E +a[(160 - 159)][(418 - 417)];
                UNkjV0ow (a, n - LilSaFc2);
                LilSaFc2++;
            }
        }
        cout << YKPyf1E << endl;
    }
    return (329 - 329);
}

void  RItNDg0W5vTq (int a [] [(989 - 889)], int n) {
    int w3o0Z1, n4a8VhC, min;
    for (w3o0Z1 = (860 - 860); n > w3o0Z1; w3o0Z1 = w3o0Z1 + (338 - 337)) {
        min = a[w3o0Z1][(58 - 58)];
        for (n4a8VhC = (903 - 903); n > n4a8VhC; n4a8VhC = n4a8VhC + (350 - 349))
            if (min > a[w3o0Z1][n4a8VhC])
                min = a[w3o0Z1][n4a8VhC];
        for (n4a8VhC = (170 - 170); n > n4a8VhC; n4a8VhC = n4a8VhC + (808 - 807))
            a[w3o0Z1][n4a8VhC] = a[w3o0Z1][n4a8VhC] - min;
    }
    {
        w3o0Z1 = (344 - 344);
        while (n > w3o0Z1) {
            min = a[(995 - 995)][w3o0Z1];
            {
                n4a8VhC = (306 - 306);
                while (n > n4a8VhC) {
                    if (a[n4a8VhC][w3o0Z1] < min)
                        min = a[n4a8VhC][w3o0Z1];
                    n4a8VhC++;
                }
            }
            for (n4a8VhC = (674 - 674); n4a8VhC < n; n4a8VhC++)
                a[n4a8VhC][w3o0Z1] = a[n4a8VhC][w3o0Z1] - min;
            w3o0Z1++;
        }
    }
}

void  UNkjV0ow (int a [] [(700 - 600)], int n) {
    int w3o0Z1, n4a8VhC, orEQdt9cI3;
    {
        w3o0Z1 = (106 - 106);
        while (w3o0Z1 < n) {
            {
                n4a8VhC = (29 - 27);
                while (n4a8VhC < n) {
                    a[w3o0Z1][n4a8VhC - (505 - 504)] = a[w3o0Z1][n4a8VhC];
                    n4a8VhC++;
                }
            }
            w3o0Z1++;
        }
    }
    {
        w3o0Z1 = (822 - 820);
        while (w3o0Z1 < n) {
            {
                n4a8VhC = 0;
                while (n4a8VhC < n) {
                    a[w3o0Z1 - (833 - 832)][n4a8VhC] = a[w3o0Z1][n4a8VhC];
                    n4a8VhC++;
                }
            }
            w3o0Z1++;
        }
    }
}

