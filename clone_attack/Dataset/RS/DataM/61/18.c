int main () {
    int n, i = 0;
    int KAzQov [n - 1];
    cin >> n;
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
    while (i <= (n - 1)) {
        cin >> KAzQov[i];
        i = i + 1;
    }
    i = 0;
    while (i <= (n - 1)) {
        int PH4OAmxn;
        int WGExTB3Aqskl;
        int j;
        int x3;
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
        PH4OAmxn = 1;
        WGExTB3Aqskl = 1;
        j = 3;
        if (KAzQov[i] <= 2) {
            cout << 1;
        }
        else {
            while (j <= KAzQov[i]) {
                j = j + 1;
                x3 = WGExTB3Aqskl +PH4OAmxn;
                PH4OAmxn = WGExTB3Aqskl;
                WGExTB3Aqskl = x3;
            }
            cout << WGExTB3Aqskl << endl;
        }
        i = i + 1;
    }
    return 0;
}

