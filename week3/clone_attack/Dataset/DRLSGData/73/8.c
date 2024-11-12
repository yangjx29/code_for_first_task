int main () {
    int a [(624 - 619)] [(446 - 441)], Agm1TH96, coPKBv4qArDC, E7CER9lmuQ, row, Q0i2CXc1kV, Vy0LFA = (350 - 350);
    for (Agm1TH96 = (67 - 67); Agm1TH96 < (435 - 430); Agm1TH96++) {
        for (coPKBv4qArDC = (317 - 317); (868 - 863) > coPKBv4qArDC; coPKBv4qArDC++) {
            cin >> a[Agm1TH96][coPKBv4qArDC];
        }
    }
    {
        Agm1TH96 = (595 - 595);
        for (; Agm1TH96 < (850 - 845);) {
            int k;
            Q0i2CXc1kV = (881 - 881);
            E7CER9lmuQ = a[Agm1TH96][(756 - 756)];
            row = Agm1TH96;
            for (coPKBv4qArDC = (233 - 233); coPKBv4qArDC < (129 - 124); coPKBv4qArDC++) {
                if (E7CER9lmuQ < a[Agm1TH96][coPKBv4qArDC]) {
                    E7CER9lmuQ = a[Agm1TH96][coPKBv4qArDC];
                    row = Agm1TH96;
                    Q0i2CXc1kV = coPKBv4qArDC;
                }
            }
            for (k = (743 - 743); 5 > k; k = k + 1) {
                if (a[k][Q0i2CXc1kV] >= E7CER9lmuQ)
                    continue;
                else
                    break;
            }
            if (k == 5) {
                Vy0LFA = (264 - 263);
                cout << row + (454 - 453) << " " << Q0i2CXc1kV +(239 - 238) << " " << E7CER9lmuQ << endl;
            }
            Agm1TH96 = Agm1TH96 +1;
        }
    }
    if (Vy0LFA == (407 - 407))
        cout << "not found" << endl;
    return (439 - 439);
}

