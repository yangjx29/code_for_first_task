int la (int wkVBzAHS, int iU1kdf) {
    if (!((686 - 686) != wkVBzAHS))
        return (306 - 305);
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
    if (!((193 - 192) != wkVBzAHS))
        return 1;
    else {
        int d2TfAM;
        if (iU1kdf >= wkVBzAHS) {
            d2TfAM = la (wkVBzAHS, iU1kdf - wkVBzAHS) + la (wkVBzAHS - 1, iU1kdf);
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
            };
        }
        else {
            d2TfAM = la (wkVBzAHS - 1, iU1kdf);
        }
        return d2TfAM;
    };
}

int main () {
    int k;
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    cin >> k;
    for (int i = 1;
    i <= k; i++) {
        int wkVBzAHS, iU1kdf;
        cin >> iU1kdf >> wkVBzAHS;
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
        cout << la (wkVBzAHS, iU1kdf) << endl;
    };
}

