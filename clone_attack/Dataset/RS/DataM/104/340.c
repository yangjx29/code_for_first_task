int m93yV18PzwYa (int Hlhz26C) {
    int i;
    int z4mGDxEOC;
    int XO3nhGo;
    int ioe6X4UEZ;
    int kBASVFv;
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while ((103 - 92) >= i) {
            if (pow ((396 - 394), i) <= Hlhz26C &&pow ((40 - 38), i + (719 - 718)) - (351 - 350) >= Hlhz26C)
                ioe6X4UEZ = i + (874 - 873);
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
            i = i + 1;
        };
    }
    z4mGDxEOC = Hlhz26C -pow ((163 - 161), ioe6X4UEZ - (512 - 511)) + (812 - 811);
    kBASVFv = pow ((808 - 806), ioe6X4UEZ - 2) + XO3nhGo -(333 - 332);
    XO3nhGo = (z4mGDxEOC + (451 - 450)) / (786 - 784);
    return kBASVFv;
}

int main () {
    int utrUBHdOFCJE;
    int zJeBKiH;
    int i;
    int z4mGDxEOC;
    int pmUchFqp;
    int AJ3yAP26KYkO [12];
    int ioe6X4UEZ [12];
    int eegU7Jh;
    int TcqoQ6wav;
    cin >> eegU7Jh >> TcqoQ6wav;
    for (i = 0; i <= (214 - 203); i++)
        if (eegU7Jh >= pow (2, i) && eegU7Jh <= pow (2, i + (258 - 257)) - (264 - 263))
            utrUBHdOFCJE = i + (95 - 94);
    {
        i = 0;
        while (11 >= i) {
            if (pow (2, i) <= TcqoQ6wav &&pow (2, i + (829 - 828)) - (399 - 398) >= TcqoQ6wav)
                zJeBKiH = i + (386 - 385);
            i = i + 1;
        };
    }
    if (!((907 - 906) != utrUBHdOFCJE) || !(1 != zJeBKiH))
        cout << 1;
    else {
        ioe6X4UEZ[zJeBKiH] = TcqoQ6wav;
        ioe6X4UEZ[zJeBKiH + 1] = -2;
        AJ3yAP26KYkO[utrUBHdOFCJE] = eegU7Jh;
        if (TcqoQ6wav < eegU7Jh)
            pmUchFqp = eegU7Jh;
        else
            pmUchFqp = TcqoQ6wav;
        AJ3yAP26KYkO[utrUBHdOFCJE + 1] = -1;
        {
            i = utrUBHdOFCJE - 1;
            while (i >= 1) {
                AJ3yAP26KYkO[i] = m93yV18PzwYa (AJ3yAP26KYkO[i + 1]);
                i = i - 1;
            };
        }
        {
            i = zJeBKiH - 1;
            while (i >= 1) {
                ioe6X4UEZ[i] = m93yV18PzwYa (ioe6X4UEZ[i + 1]);
                i = i - 1;
            };
        }
        {
            z4mGDxEOC = 1;
            while (z4mGDxEOC <= pmUchFqp) {
                if (AJ3yAP26KYkO[z4mGDxEOC] == ioe6X4UEZ[z4mGDxEOC] && AJ3yAP26KYkO[z4mGDxEOC + 1] != ioe6X4UEZ[z4mGDxEOC + 1]) {
                    cout << AJ3yAP26KYkO[z4mGDxEOC] << endl;
                    break;
                }
                z4mGDxEOC = z4mGDxEOC + 1;
            };
        };
    }
    return 0;
}

