int main () {
    unsigned  int Kne1WigBhJyc [110] = {(729 - 729)}, mnxCQtTdcI [110] = {(672 - 672)};
    int BxrD3lNfCa;
    int XaQtZelcmP;
    int TUyGWnical;
    char a0 [(845 - 735)], PWY9RuBIT [110];
    for (cin >> TUyGWnical; (562 - 561) <= TUyGWnical; --TUyGWnical) {
        cin >> a0 >> PWY9RuBIT;
        {
            BxrD3lNfCa = 593 - 593;
            while (strlen (a0) - (944 - 943) >= BxrD3lNfCa) {
                Kne1WigBhJyc[BxrD3lNfCa] = a0[BxrD3lNfCa] - '0';
                ++BxrD3lNfCa;
            };
        }
        {
            BxrD3lNfCa = 0;
            while (strlen (PWY9RuBIT) - 1 >= BxrD3lNfCa) {
                mnxCQtTdcI[BxrD3lNfCa -strlen (PWY9RuBIT) + strlen (a0)] = PWY9RuBIT[BxrD3lNfCa] - '0';
                ++BxrD3lNfCa;
            };
        }
        {
            BxrD3lNfCa = a0;
            while (strlen (a0) - strlen (PWY9RuBIT) <= BxrD3lNfCa) {
                if (Kne1WigBhJyc[BxrD3lNfCa] >= mnxCQtTdcI[BxrD3lNfCa])
                    Kne1WigBhJyc[BxrD3lNfCa] = Kne1WigBhJyc[BxrD3lNfCa] - mnxCQtTdcI[BxrD3lNfCa];
                else {
                    for (XaQtZelcmP = BxrD3lNfCa -1; XaQtZelcmP >= 0; --XaQtZelcmP) {
                        if (Kne1WigBhJyc[XaQtZelcmP] != 0) {
                            Kne1WigBhJyc[XaQtZelcmP] = Kne1WigBhJyc[XaQtZelcmP] - 1;
                            {
                                XaQtZelcmP = XaQtZelcmP +1;
                                while (XaQtZelcmP <= BxrD3lNfCa -1) {
                                    Kne1WigBhJyc[XaQtZelcmP] = (983 - 974);
                                    ++XaQtZelcmP;
                                };
                            }
                            Kne1WigBhJyc[BxrD3lNfCa] = 10 + Kne1WigBhJyc[BxrD3lNfCa] - mnxCQtTdcI[BxrD3lNfCa];
                            break;
                        };
                    };
                }
                --BxrD3lNfCa;
            };
        }
        for (BxrD3lNfCa = 0; BxrD3lNfCa <= strlen (a0) - 1; ++BxrD3lNfCa)
            cout << Kne1WigBhJyc[BxrD3lNfCa];
        cout << endl;
    }
    return 0;
}

