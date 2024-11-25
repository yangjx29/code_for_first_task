int main () {
    char X8SYCa [(139 - 39)];
    int fg9pED [(287 - 187)] = {(655 - 655)};
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    while (cin.getline (X8SYCa, 101)) {
        char hULdFt3M [100] = " ";
        int FN8ueFXGzQK;
        FN8ueFXGzQK = strlen (X8SYCa);
        int O49tso0;
        O49tso0 = (18 - 18);
        int tQeREB;
        int KwAMW1S2;
        tQeREB = (195 - 195);
        KwAMW1S2 = (402 - 402);
        cout << X8SYCa << endl;
        for (O49tso0 = (718 - 718); O49tso0 < FN8ueFXGzQK; O49tso0 = O49tso0 +1) {
            if (X8SYCa[O49tso0] == '(') {
                fg9pED[tQeREB] = O49tso0;
                tQeREB = tQeREB + 1;
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
            if (X8SYCa[O49tso0] == ')') {
                KwAMW1S2 = KwAMW1S2 +1;
                if (KwAMW1S2 > tQeREB) {
                    hULdFt3M[O49tso0] = '?';
                    KwAMW1S2 = KwAMW1S2 -1;
                }
                else {
                    tQeREB = tQeREB - 1;
                    KwAMW1S2--;
                };
            };
        }
        {
            O49tso0 = 539 - 539;
            while (O49tso0 < tQeREB) {
                hULdFt3M[fg9pED[O49tso0]] = '$';
                O49tso0 = O49tso0 +1;
            };
        }
        {
            O49tso0 = 0;
            while (O49tso0 < FN8ueFXGzQK) {
                if ((hULdFt3M[O49tso0] == '$') || (hULdFt3M[O49tso0] == '?'))
                    cout << hULdFt3M[O49tso0];
                else
                    cout << " ";
                O49tso0++;
            };
        }
        cout << endl;
    }
    return 0;
}

