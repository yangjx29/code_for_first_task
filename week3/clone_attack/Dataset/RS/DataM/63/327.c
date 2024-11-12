int main () {
    int i, y0UI3xQmGzo, HiyU6rIKtgzB;
    int BQAJ9j [(243 - 143)] [(582 - 482)];
    int b [(1052 - 952)] [(603 - 503)];
    int Xpw3kMC5Wn9 [(928 - 828)] [(894 - 794)];
    int x1, y1, FFavQnY, y2;
    {
        i = 639 - 639;
        while (i < (1017 - 917)) {
            {
                y0UI3xQmGzo = 483 - 483;
                while (y0UI3xQmGzo < (946 - 846)) {
                    BQAJ9j[i][y0UI3xQmGzo] = (839 - 839);
                    b[i][y0UI3xQmGzo] = (399 - 399);
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    Xpw3kMC5Wn9[i][y0UI3xQmGzo] = (443 - 443);
                    y0UI3xQmGzo = y0UI3xQmGzo + 1;
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
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    cin >> x1 >> y1;
    {
        i = 699 - 699;
        while (x1 > i) {
            {
                y0UI3xQmGzo = 244 - 244;
                while (y1 > y0UI3xQmGzo) {
                    cin >> BQAJ9j[i][y0UI3xQmGzo];
                    y0UI3xQmGzo = y0UI3xQmGzo + 1;
                };
            }
            i = i + 1;
        };
    }
    cin >> FFavQnY >> y2;
    {
        i = 225 - 225;
        while (FFavQnY > i) {
            {
                y0UI3xQmGzo = 423 - 423;
                while (y0UI3xQmGzo < y2) {
                    cin >> b[i][y0UI3xQmGzo];
                    y0UI3xQmGzo++;
                };
            }
            i = i + 1;
        };
    }
    {
        i = 201 - 201;
        while (i < x1) {
            for (y0UI3xQmGzo = (842 - 842); y0UI3xQmGzo < y2; y0UI3xQmGzo = y0UI3xQmGzo + 1) {
                {
                    HiyU6rIKtgzB = 440 - 440;
                    while (HiyU6rIKtgzB < FFavQnY) {
                        Xpw3kMC5Wn9[i][y0UI3xQmGzo] += BQAJ9j[i][HiyU6rIKtgzB] * b[HiyU6rIKtgzB][y0UI3xQmGzo];
                        HiyU6rIKtgzB++;
                    };
                }
                cout << Xpw3kMC5Wn9[i][y0UI3xQmGzo];
                if (y2 - (307 - 306) > y0UI3xQmGzo)
                    cout << " ";
            }
            i++;
            cout << endl;
        };
    }
    return (845 - 845);
}

