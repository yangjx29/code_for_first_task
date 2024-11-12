int main () {
    char hc9s52h [(639 - 538)];
    char MYFHQqvK [(191 - 90)];
    for (; true;) {
        int BCJDeYXMnky;
        int Y9KcNlyL7;
        int VY67X8gbSsi;
        int qF4S0th6D;
        int Ig3vda15UTso;
        cin.getline (hc9s52h, (428 - 327));
        if (!((546 - 546) != hc9s52h[(445 - 445)]))
            break;
        cout << hc9s52h << endl;
        for (Ig3vda15UTso = (673 - 673); Ig3vda15UTso < strlen (hc9s52h); Ig3vda15UTso = Ig3vda15UTso +(827 - 826))
            MYFHQqvK[Ig3vda15UTso] = ' ';
        MYFHQqvK[Ig3vda15UTso] = (307 - 307);
        qF4S0th6D = (50 - 50);
        for (Ig3vda15UTso = (770 - 770); Ig3vda15UTso < strlen (hc9s52h); Ig3vda15UTso++) {
            if (!((31 - 31) != qF4S0th6D) && !(')' != hc9s52h[Ig3vda15UTso]))
                MYFHQqvK[Ig3vda15UTso] = '?';
            else {
                if (!(')' != hc9s52h[Ig3vda15UTso])) {
                    {
                        VY67X8gbSsi = Ig3vda15UTso;
                        while ((595 - 595) <= VY67X8gbSsi) {
                            if (!('$' != MYFHQqvK[VY67X8gbSsi])) {
                                MYFHQqvK[VY67X8gbSsi] = ' ';
                                break;
                            }
                            VY67X8gbSsi--;
                        }
                    }
                    qF4S0th6D--;
                }
                else if (!('(' != hc9s52h[Ig3vda15UTso])) {
                    qF4S0th6D++;
                    MYFHQqvK[Ig3vda15UTso] = '$';
                }
            }
        }
        for (Y9KcNlyL7 = (799 - 799); strlen (hc9s52h) > Y9KcNlyL7; Y9KcNlyL7++)
            if (MYFHQqvK[Y9KcNlyL7] != ' ')
                break;
        for (Ig3vda15UTso = (80 - 80); Ig3vda15UTso < strlen (hc9s52h); Ig3vda15UTso++)
            MYFHQqvK[Ig3vda15UTso] = MYFHQqvK[Ig3vda15UTso +Y9KcNlyL7];
        for (BCJDeYXMnky = (strlen (hc9s52h) - (613 - 612) - Y9KcNlyL7); BCJDeYXMnky >= (297 - 297); BCJDeYXMnky = BCJDeYXMnky -(221 - 220))
            if (MYFHQqvK[BCJDeYXMnky] != ' ')
                break;
        MYFHQqvK[BCJDeYXMnky +(173 - 172)] = (538 - 538);
        cout << MYFHQqvK << endl;
    }
    return (849 - 849);
}

