int main () {
    int OZyIl3DqNC1c, J5QHA0dL, aug9J5, ZC5iJjgms, i, j, k;
    int Qh7NG0J3 [(759 - 658)] [101], b [101] [101], dIlDFgK3 [101] [101];
    cin >> OZyIl3DqNC1c >> aug9J5;
    for (i = (310 - 309); OZyIl3DqNC1c >= i; i = i + 1) {
        j = 1;
        while (aug9J5 >= j) {
            cin >> Qh7NG0J3[i][j];
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
            j = j + 1;
        };
    }
    cin >> J5QHA0dL >> ZC5iJjgms;
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
    if (!(aug9J5 == J5QHA0dL)) {
        cout << "Error" << endl;
        return 0;
    }
    {
        i = 1;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (J5QHA0dL >= i) {
            {
                j = 1;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                while (ZC5iJjgms >= j) {
                    cin >> b[i][j];
                    j++;
                };
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
            i = i + 1;
        };
    }
    {
        i = 1;
        while (i <= OZyIl3DqNC1c) {
            {
                j = 1;
                while (j <= ZC5iJjgms) {
                    dIlDFgK3[i][j] = 0;
                    {
                        k = 1;
                        while (k <= J5QHA0dL) {
                            dIlDFgK3[i][j] += Qh7NG0J3[i][k] * b[k][j];
                            k++;
                        };
                    }
                    j++;
                };
            }
            i = i + 1;
        };
    }
    {
        i = 1;
        while (i <= OZyIl3DqNC1c) {
            cout << dIlDFgK3[i][1];
            for (j = (150 - 148); j <= ZC5iJjgms; j++)
                cout << " " << dIlDFgK3[i][j];
            i++;
            cout << endl;
        };
    }
    return 0;
}

