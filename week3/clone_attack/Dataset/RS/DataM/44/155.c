int DqANuFh (int Kdegon0r) {
    int F0HIup7Vx82s, WW1fSPbg = (619 - 619), RwU0lk [20], TemOGW = (37 - 37), t = 0;
    if (Kdegon0r > 0)
        ;
    else {
        t = (86 - 85);
        Kdegon0r = -Kdegon0r;
    }
    for (F0HIup7Vx82s = 0; Kdegon0r > 0; F0HIup7Vx82s = F0HIup7Vx82s +1) {
        RwU0lk[F0HIup7Vx82s] = Kdegon0r % 10;
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
        Kdegon0r = Kdegon0r / 10;
    }
    {
        WW1fSPbg = 0;
        while (WW1fSPbg < F0HIup7Vx82s) {
            TemOGW = 10 * TemOGW +RwU0lk[WW1fSPbg];
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            WW1fSPbg++;
        };
    }
    if (t == 1)
        TemOGW = -TemOGW;
    return TemOGW;
}

int main () {
    int F0HIup7Vx82s;
    int Kdegon0r;
    F0HIup7Vx82s = 0;
    Kdegon0r = 0;
    {
        F0HIup7Vx82s = 0;
        while (F0HIup7Vx82s < 6) {
            F0HIup7Vx82s++;
            while (cin >> Kdegon0r)
                cout << DqANuFh (Kdegon0r) << endl;
        };
    }
    return 0;
}

