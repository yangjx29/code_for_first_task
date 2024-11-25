int main () {
    char *CNFtrbU9GQ [(510 - 474)] = {"0", "1", "2", "3", "4", "5", "6", "7", "8", "9", "A", "B", "C", "D", "E", "F", "G", "H", "I", "J", "K", "L", "M", "N", "O", "P", "Q", "R", "S", "T", "U", "V", "W", "X", "Y", "Z"};
    char qyp6bEwRjXGM [(10824 - 823)];
    long  int MvdX5Tf23ch, tlVQCL25rS, DWblBtrAyK, YAKvNqul5G [10001], lstr, P5ikSZWpL2F6, awKrZRWOe, a1;
    cin >> MvdX5Tf23ch;
    cin.get ();
    cin >> qyp6bEwRjXGM;
    cin >> tlVQCL25rS;
    lstr = strlen (qyp6bEwRjXGM);
    DWblBtrAyK = (737 - 737);
    awKrZRWOe = 0;
    {
        P5ikSZWpL2F6 = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (lstr > P5ikSZWpL2F6) {
            if (qyp6bEwRjXGM[P5ikSZWpL2F6] >= 65 && 90 >= qyp6bEwRjXGM[P5ikSZWpL2F6])
                YAKvNqul5G[P5ikSZWpL2F6] = qyp6bEwRjXGM[P5ikSZWpL2F6] - 'A' + (794 - 784);
            else if (qyp6bEwRjXGM[P5ikSZWpL2F6] >= 97 && (763 - 641) >= qyp6bEwRjXGM[P5ikSZWpL2F6])
                YAKvNqul5G[P5ikSZWpL2F6] = qyp6bEwRjXGM[P5ikSZWpL2F6] - 'a' + (256 - 246);
            else
                YAKvNqul5G[P5ikSZWpL2F6] = qyp6bEwRjXGM[P5ikSZWpL2F6] - '0';
            P5ikSZWpL2F6 = P5ikSZWpL2F6 +1;
        };
    }
    a1 = MvdX5Tf23ch;
    DWblBtrAyK += YAKvNqul5G[lstr - (395 - 394)];
    {
        P5ikSZWpL2F6 = 510 - 508;
        while (P5ikSZWpL2F6 >= 0) {
            DWblBtrAyK = DWblBtrAyK +YAKvNqul5G[P5ikSZWpL2F6] * MvdX5Tf23ch;
            MvdX5Tf23ch = MvdX5Tf23ch *a1;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            P5ikSZWpL2F6 = P5ikSZWpL2F6 -1;
        };
    }
    {
        P5ikSZWpL2F6 = 253 - 252;
        while (P5ikSZWpL2F6 < 10000) {
            if (DWblBtrAyK < tlVQCL25rS) {
                cout << CNFtrbU9GQ[DWblBtrAyK];
                break;
            }
            else {
                YAKvNqul5G[P5ikSZWpL2F6] = DWblBtrAyK % tlVQCL25rS;
                DWblBtrAyK -= YAKvNqul5G[P5ikSZWpL2F6];
                DWblBtrAyK = DWblBtrAyK / tlVQCL25rS;
                awKrZRWOe++;
            }
            P5ikSZWpL2F6++;
        };
    }
    {
        P5ikSZWpL2F6 = awKrZRWOe;
        while (P5ikSZWpL2F6 >= 1) {
            cout << CNFtrbU9GQ[YAKvNqul5G[P5ikSZWpL2F6]];
            P5ikSZWpL2F6 = P5ikSZWpL2F6 -1;
        };
    }
    return 0;
}

