int main () {
    int x96gDescv3;
    char FWJwfKbFaICX [300];
    cin >> x96gDescv3;
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
    while (x96gDescv3--) {
        int len;
        len = strlen (FWJwfKbFaICX);
        cin >> FWJwfKbFaICX;
        {
            int i = 0;
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
            while (len > i) {
                if (!('A' != FWJwfKbFaICX[i]))
                    FWJwfKbFaICX[i] = 'T';
                else if (FWJwfKbFaICX[i] == 'T')
                    FWJwfKbFaICX[i] = 'A';
                else if (FWJwfKbFaICX[i] == 'C')
                    FWJwfKbFaICX[i] = 'G';
                else if (FWJwfKbFaICX[i] == 'G')
                    FWJwfKbFaICX[i] = 'C';
                cout << FWJwfKbFaICX[i];
                i++;
            };
        }
        cout << endl;
    }
    return 0;
}

