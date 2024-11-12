int main () {
    char ljGDnOs8ly [100];
    for (; cin >> ljGDnOs8ly;) {
        int KMRN8d;
        KMRN8d = strlen (ljGDnOs8ly);
        cout << ljGDnOs8ly << endl;
        {
            int EsVf2Jlzbr = (633 - 633);
            while (KMRN8d > EsVf2Jlzbr) {
                if (!(')' != ljGDnOs8ly[EsVf2Jlzbr])) {
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    for (int B8URNdyX4Z7 = EsVf2Jlzbr -1;
                    B8URNdyX4Z7 >= 0; B8URNdyX4Z7--)
                        if (!('(' != ljGDnOs8ly[B8URNdyX4Z7])) {
                            ljGDnOs8ly[EsVf2Jlzbr] = ljGDnOs8ly[B8URNdyX4Z7] = ' ';
                            break;
                        };
                }
                if (!('(' == ljGDnOs8ly[EsVf2Jlzbr]) && ljGDnOs8ly[EsVf2Jlzbr] != ')')
                    ljGDnOs8ly[EsVf2Jlzbr] = ' ';
                EsVf2Jlzbr = EsVf2Jlzbr +1;
            };
        }
        for (int EsVf2Jlzbr = 0;
        EsVf2Jlzbr < KMRN8d; EsVf2Jlzbr++) {
            if (ljGDnOs8ly[EsVf2Jlzbr] == '(')
                cout << '$';
            else if (ljGDnOs8ly[EsVf2Jlzbr] == ')')
                cout << '?';
            else
                cout << ' ';
        }
        cout << endl;
    }
    return 0;
}

