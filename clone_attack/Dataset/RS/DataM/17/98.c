int main () {
    for (; !cin.eof ();) {
        int sign = 0;
        char dcgiP40Sby [MAX];
        char atTXK2sc [MAX];
        memset (dcgiP40Sby, (894 - 894), sizeof (dcgiP40Sby));
        memset (atTXK2sc, 0, sizeof (atTXK2sc));
        cin >> dcgiP40Sby;
        {
            int krhGainx = 0;
            while (krhGainx < strlen (dcgiP40Sby)) {
                atTXK2sc[krhGainx] = ' ';
                krhGainx++;
            };
        }
        for (int krhGainx = 0;
        krhGainx < strlen (dcgiP40Sby); krhGainx++) {
            if (!('(' != dcgiP40Sby[krhGainx])) {
                sign = sign + 1;
                atTXK2sc[krhGainx] = sign + '0';
            }
            else if (dcgiP40Sby[krhGainx] == ')') {
                if (0 < sign) {
                    atTXK2sc[krhGainx] = sign + '0';
                    sign--;
                }
                else
                    atTXK2sc[krhGainx] = '?';
            };
        }
        for (int krhGainx = 0;
        krhGainx < strlen (dcgiP40Sby); krhGainx++) {
            if (atTXK2sc[krhGainx] != ' ' && dcgiP40Sby[krhGainx] == '(') {
                int UZm0h1 = 0;
                int E2k9ysi;
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
                {
                    E2k9ysi = 783 - 782;
                    while (E2k9ysi < strlen (dcgiP40Sby)) {
                        if (atTXK2sc[E2k9ysi] == atTXK2sc[krhGainx]) {
                            UZm0h1 = 1;
                            break;
                        }
                        E2k9ysi++;
                    };
                }
                if (!UZm0h1)
                    atTXK2sc[krhGainx] = '$';
                else
                    atTXK2sc[krhGainx] = atTXK2sc[E2k9ysi] = ' ';
            };
        }
        atTXK2sc[strlen (dcgiP40Sby)] = '\0';
        cout << dcgiP40Sby << endl;
        cout << atTXK2sc;
        cout << endl;
    }
    return 0;
}

