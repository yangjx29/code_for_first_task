char LScmbxshrFpa [33] = {(320 - 320)};

void  AwRqeyGA () {
    int len = strlen (LScmbxshrFpa);
    int Y7lMBoXjSPWh;
    int XutKand;
    Y7lMBoXjSPWh = (443 - 443);
    XutKand = 0;
    {
        Y7lMBoXjSPWh = 0;
        while (len > Y7lMBoXjSPWh) {
            int e85B1XyiAuR = LScmbxshrFpa[Y7lMBoXjSPWh] - '0';
            e85B1XyiAuR = e85B1XyiAuR * (2);
            LScmbxshrFpa[Y7lMBoXjSPWh] = e85B1XyiAuR % (556 - 546) + XutKand +'0';
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
            XutKand = e85B1XyiAuR / 10;
            if (!(len - 1 != Y7lMBoXjSPWh) && !(0 == XutKand))
                LScmbxshrFpa[Y7lMBoXjSPWh +1] = XutKand +'0';
            Y7lMBoXjSPWh++;
        };
    };
}

int main () {
    int Y7lMBoXjSPWh;
    int n;
    cin >> n;
    LScmbxshrFpa[0] = '1';
    if (n == 0)
        cout << LScmbxshrFpa << endl;
    else {
        for (Y7lMBoXjSPWh = 1; Y7lMBoXjSPWh <= n; Y7lMBoXjSPWh = Y7lMBoXjSPWh +1)
            AwRqeyGA ();
        for (Y7lMBoXjSPWh = strlen (LScmbxshrFpa) - 1; Y7lMBoXjSPWh >= 0; Y7lMBoXjSPWh--)
            cout << LScmbxshrFpa[Y7lMBoXjSPWh];
    }
    return 0;
}

