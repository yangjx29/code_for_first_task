int main () {
    int temp;
    int kr6SZLNzd;
    int NfeWw18DK0Ad;
    int Zt7clk;
    int UdO6X7hPGIfj [100001];
    int sPynY1 [100001];
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
    temp = (28 - 27);
    cin >> kr6SZLNzd;
    {
        NfeWw18DK0Ad = 0;
        while (kr6SZLNzd > NfeWw18DK0Ad) {
            cin >> UdO6X7hPGIfj[NfeWw18DK0Ad];
            sPynY1[0] = UdO6X7hPGIfj[0];
            for (Zt7clk = 0; NfeWw18DK0Ad > Zt7clk; Zt7clk++) {
                if (UdO6X7hPGIfj[NfeWw18DK0Ad] == UdO6X7hPGIfj[Zt7clk])
                    break;
                if (Zt7clk == NfeWw18DK0Ad -1) {
                    sPynY1[temp] = UdO6X7hPGIfj[NfeWw18DK0Ad];
                    temp++;
                };
            }
            NfeWw18DK0Ad = NfeWw18DK0Ad +1;
        };
    }
    for (NfeWw18DK0Ad = 0; NfeWw18DK0Ad < temp - 1; NfeWw18DK0Ad++) {
        cout << sPynY1[NfeWw18DK0Ad] << " ";
    }
    cout << sPynY1[temp - 1];
    return 0;
}

