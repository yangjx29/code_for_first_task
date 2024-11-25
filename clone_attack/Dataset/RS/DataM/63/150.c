int main () {
    int Nq8ZjS [(562 - 461)] [(753 - 652)] = {(28 - 28)};
    int b [(338 - 237)] [(1052 - 951)] = {(515 - 515)};
    int AasrOL0pTUK [(957 - 856)] [101] = {(399 - 399)};
    int x1 = (389 - 389);
    int x2 = (685 - 685);
    int nZJ8So29emO = (907 - 907);
    int W0qj1EDMLNn = (230 - 230);
    int OQlak8ERAy = (665 - 665);
    int IhxZriX = (155 - 155);
    int m51ryf;
    m51ryf = 0;
    int ebirm3v;
    ebirm3v = 0;
    cin >> x1;
    cin >> nZJ8So29emO;
    {
        OQlak8ERAy = 887 - 886;
        while (OQlak8ERAy <= x1) {
            {
                m51ryf = 842 - 841;
                while (m51ryf <= nZJ8So29emO) {
                    cin >> Nq8ZjS[OQlak8ERAy][m51ryf];
                    m51ryf = m51ryf + 1;
                };
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
            OQlak8ERAy = OQlak8ERAy +1;
        };
    }
    cin >> x2;
    cin >> W0qj1EDMLNn;
    {
        OQlak8ERAy = 340 - 339;
        while (OQlak8ERAy <= x2) {
            {
                m51ryf = 744 - 743;
                while (W0qj1EDMLNn >= m51ryf) {
                    cin >> b[OQlak8ERAy][m51ryf];
                    m51ryf = m51ryf + 1;
                };
            }
            OQlak8ERAy = OQlak8ERAy +1;
        };
    }
    {
        OQlak8ERAy = 755 - 754;
        while (OQlak8ERAy <= x1) {
            {
                ebirm3v = 1;
                while (ebirm3v <= W0qj1EDMLNn) {
                    {
                        IhxZriX = 0;
                        while (IhxZriX <= nZJ8So29emO) {
                            AasrOL0pTUK[OQlak8ERAy][ebirm3v] = AasrOL0pTUK[OQlak8ERAy][ebirm3v] + Nq8ZjS[OQlak8ERAy][IhxZriX] * b[IhxZriX][ebirm3v];
                            IhxZriX = IhxZriX +1;
                        };
                    }
                    ebirm3v = ebirm3v + 1;
                };
            }
            OQlak8ERAy++;
        };
    }
    {
        OQlak8ERAy = 1;
        while (OQlak8ERAy <= x1) {
            {
                ebirm3v = 1;
                while (ebirm3v <= W0qj1EDMLNn) {
                    if (ebirm3v != W0qj1EDMLNn)
                        cout << AasrOL0pTUK[OQlak8ERAy][ebirm3v] << " ";
                    else
                        cout << AasrOL0pTUK[OQlak8ERAy][ebirm3v] << endl;
                    ebirm3v = ebirm3v + 1;
                };
            }
            OQlak8ERAy++;
        };
    }
    return 0;
}

