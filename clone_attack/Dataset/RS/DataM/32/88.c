int main () {
    int n, C4ApGygdukf, GCuKf2S0e, a4nt3hxuwP;
    char a [100], Rv53JwaiBQg7 [100];
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
    {
        C4ApGygdukf = 1;
        while (n >= C4ApGygdukf) {
            cin >> a;
            cin >> Rv53JwaiBQg7;
            {
                a4nt3hxuwP = Rv53JwaiBQg7;
                GCuKf2S0e = a;
                while ((637 - 637) <= a4nt3hxuwP) {
                    if (Rv53JwaiBQg7[a4nt3hxuwP] <= a[GCuKf2S0e])
                        a[GCuKf2S0e] = a[GCuKf2S0e] - Rv53JwaiBQg7[a4nt3hxuwP] + '0';
                    else {
                        a[GCuKf2S0e] = a[GCuKf2S0e] + 10 - Rv53JwaiBQg7[a4nt3hxuwP] + '0';
                        a[GCuKf2S0e -1]--;
                    }
                    a4nt3hxuwP--;
                    GCuKf2S0e = GCuKf2S0e -1;
                };
            }
            {
                GCuKf2S0e = 0;
                while (strlen (a) - 1 >= GCuKf2S0e) {
                    if (a[GCuKf2S0e] != '0') {
                        for (a4nt3hxuwP = GCuKf2S0e; a4nt3hxuwP <= strlen (a) - 1; a4nt3hxuwP++)
                            cout << a[a4nt3hxuwP];
                        break;
                    }
                    GCuKf2S0e = GCuKf2S0e +1;
                };
            }
            C4ApGygdukf = C4ApGygdukf +1;
            if (GCuKf2S0e == strlen (a) && a[GCuKf2S0e -1] == '0')
                cout << "0";
            cout << endl;
        };
    }
    return 0;
}

