int main () {
    int Ny3bhC;
    int WlEJTH;
    int GCtSfa;
    int MopnR1285Q;
    int len;
    int q;
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
    char str [1000];
    cin >> str;
    len = strlen (str);
    {
        q = 2;
        while (len >= q) {
            for (Ny3bhC = 0; str[Ny3bhC] != 0; Ny3bhC++) {
                GCtSfa = Ny3bhC;
                while ((!(str[Ny3bhC +q + Ny3bhC -1 - GCtSfa] != str[GCtSfa])) && (GCtSfa < Ny3bhC +q / 2)) {
                    GCtSfa = GCtSfa +1;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    };
                }
                if (GCtSfa == Ny3bhC +q / 2) {
                    for (WlEJTH = Ny3bhC; WlEJTH <= Ny3bhC +q - 1; WlEJTH = WlEJTH +1)
                        cout << str[WlEJTH];
                    cout << endl;
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
            q = q + 1;
        };
    }
    return 0;
}

