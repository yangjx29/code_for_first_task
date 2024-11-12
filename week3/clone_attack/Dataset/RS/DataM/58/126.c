int main () {
    char GEV8UdNeWR [81];
    int Pn1TEcXiFOx, Um3AQBFN, n, gFYo49Tg;
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
    cin.get ();
    {
        Pn1TEcXiFOx = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n > Pn1TEcXiFOx) {
            gFYo49Tg = 1;
            cin.getline (GEV8UdNeWR, 81);
            if ((!('_' != GEV8UdNeWR[0])) || (('a' <= GEV8UdNeWR[0]) && (GEV8UdNeWR[0] <= 'z')) || (('A' <= GEV8UdNeWR[0]) && ('Z' >= GEV8UdNeWR[0]))) {
                {
                    Um3AQBFN = 1;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    while (1) {
                        if (!('\0' != GEV8UdNeWR[Um3AQBFN]))
                            break;
                        else if ((GEV8UdNeWR[Um3AQBFN] == '_') || ((GEV8UdNeWR[Um3AQBFN] >= 'a') && (GEV8UdNeWR[Um3AQBFN] <= 'z')) || ((GEV8UdNeWR[Um3AQBFN] >= 'A') && (GEV8UdNeWR[Um3AQBFN] <= 'Z')) || ((GEV8UdNeWR[Um3AQBFN] >= '0') && (GEV8UdNeWR[Um3AQBFN] <= '9')))
                            gFYo49Tg = 1;
                        else {
                            gFYo49Tg = 0;
                            break;
                        }
                        Um3AQBFN++;
                    };
                }
                cout << gFYo49Tg << endl;
            }
            else
                cout << '0' << endl;
            Pn1TEcXiFOx++;
        };
    }
    return 0;
}

