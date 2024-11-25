int main () {
    char CxKYVdQNAF [1000];
    int OhbXm1U [27] [500] = {0,};
    int FemCkKUN8, jYZaK2ieXkV;
    int GHWp3mYi = 0, m9FNvumBOs;
    cin >> FemCkKUN8;
    {
        int dfd80MDgNOuR = 1;
        while (dfd80MDgNOuR <= FemCkKUN8) {
            dfd80MDgNOuR = dfd80MDgNOuR + 1;
            cin >> jYZaK2ieXkV;
            cin >> CxKYVdQNAF;
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
            for (int IH5afUs = 0;
            IH5afUs < strlen (CxKYVdQNAF); IH5afUs = IH5afUs +1) {
                OhbXm1U[CxKYVdQNAF[IH5afUs] - 'A' + 1][0]++;
                OhbXm1U[CxKYVdQNAF[IH5afUs] - 'A' + 1][OhbXm1U[CxKYVdQNAF[IH5afUs] - 'A' + 1][0]] = jYZaK2ieXkV;
            }
            getchar ();
        };
    }
    {
        int dfd80MDgNOuR = 1;
        while (26 >= dfd80MDgNOuR) {
            if (OhbXm1U[dfd80MDgNOuR][0] > GHWp3mYi) {
                GHWp3mYi = OhbXm1U[dfd80MDgNOuR][0];
                m9FNvumBOs = dfd80MDgNOuR;
            }
            dfd80MDgNOuR = dfd80MDgNOuR + 1;
        };
    }
    cout << (char) (m9FNvumBOs + 'A' - 1) << endl;
    cout << GHWp3mYi << endl;
    for (int dfd80MDgNOuR = 1;
    dfd80MDgNOuR <= GHWp3mYi; dfd80MDgNOuR++) {
        cout << OhbXm1U[m9FNvumBOs][dfd80MDgNOuR] << endl;
    }
    return 0;
}

