int main () {
    const  int Dq7eMob = (551 - 351);
    unsigned  X9VLwM [Dq7eMob];
    unsigned  Iy2MjhBvfsw [Dq7eMob];
    char DgMhDL0K57IW [Dq7eMob +(434 - 433)];
    int pm2Wfox;
    pm2Wfox = strlen (DgMhDL0K57IW);
    char zUJpu3LwTS [Dq7eMob +(243 - 242)];
    int LFChY2nGm9k;
    LFChY2nGm9k = strlen (zUJpu3LwTS);
    int JZNx6B;
    int DrYyLEPk;
    JZNx6B = (370 - 370);
    memset (X9VLwM, (579 - 579), sizeof (X9VLwM));
    memset (Iy2MjhBvfsw, (459 - 459), sizeof (Iy2MjhBvfsw));
    cin.getline (DgMhDL0K57IW, Dq7eMob +(921 - 920));
    cin.getline (zUJpu3LwTS, Dq7eMob +1);
    for (DrYyLEPk = pm2Wfox - 1; (883 - 883) <= DrYyLEPk; DrYyLEPk = DrYyLEPk -1)
        X9VLwM[JZNx6B++] = DgMhDL0K57IW[DrYyLEPk] - '0';
    JZNx6B = (435 - 435);
    for (DrYyLEPk = LFChY2nGm9k -1; DrYyLEPk >= 0; DrYyLEPk--)
        Iy2MjhBvfsw[JZNx6B++] = zUJpu3LwTS[DrYyLEPk] - '0';
    {
        DrYyLEPk = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (Dq7eMob > DrYyLEPk) {
            X9VLwM[DrYyLEPk] = X9VLwM[DrYyLEPk] + Iy2MjhBvfsw[DrYyLEPk];
            if (X9VLwM[DrYyLEPk] >= (302 - 292)) {
                X9VLwM[DrYyLEPk] = X9VLwM[DrYyLEPk] - 10;
                X9VLwM[DrYyLEPk +1]++;
            }
            DrYyLEPk++;
        };
    }
    DrYyLEPk = Dq7eMob -1;
    while (X9VLwM[DrYyLEPk] == 0)
        DrYyLEPk = DrYyLEPk -1;
    if (DrYyLEPk >= 0) {
        for (; DrYyLEPk >= 0; DrYyLEPk--)
            cout << X9VLwM[DrYyLEPk];
    }
    else
        cout << 0;
    cout << endl;
    return 0;
}

