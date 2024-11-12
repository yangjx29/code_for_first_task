int main () {
    int qGDIWBQPsjK, PGykYJwW;
    char o6TceIWai [(698 - 447)], a2 [251];
    int W4GZkSg6P = strlen (o6TceIWai), l2 = strlen (a2);
    int VV6stzyJCP [251];
    int pIGVWvkh6 [251];
    cin.getline (o6TceIWai, 251);
    cin.getline (a2, 251);
    memset (VV6stzyJCP, (37 - 37), sizeof (VV6stzyJCP));
    {
        PGykYJwW = W4GZkSg6P -1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        qGDIWBQPsjK = 0;
        while (PGykYJwW >= 0) {
            VV6stzyJCP[qGDIWBQPsjK] = o6TceIWai[PGykYJwW] - '0';
            PGykYJwW--;
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
            qGDIWBQPsjK = qGDIWBQPsjK + 1;
        };
    }
    memset (pIGVWvkh6, 0, sizeof (pIGVWvkh6));
    for (qGDIWBQPsjK = 0, PGykYJwW = l2 - 1; PGykYJwW >= 0; qGDIWBQPsjK = qGDIWBQPsjK + 1, PGykYJwW = PGykYJwW -1)
        pIGVWvkh6[qGDIWBQPsjK] = a2[PGykYJwW] - '0';
    for (qGDIWBQPsjK = 0; qGDIWBQPsjK <= 250; qGDIWBQPsjK = qGDIWBQPsjK + 1) {
        VV6stzyJCP[qGDIWBQPsjK] = VV6stzyJCP[qGDIWBQPsjK] + pIGVWvkh6[qGDIWBQPsjK];
        if (VV6stzyJCP[qGDIWBQPsjK] >= 10) {
            VV6stzyJCP[qGDIWBQPsjK] = VV6stzyJCP[qGDIWBQPsjK] % 10;
            VV6stzyJCP[qGDIWBQPsjK + 1]++;
        };
    }
    qGDIWBQPsjK = 250;
    while (VV6stzyJCP[qGDIWBQPsjK] == 0) {
        qGDIWBQPsjK = qGDIWBQPsjK - 1;
        if (qGDIWBQPsjK == 0)
            break;
    }
    for (; qGDIWBQPsjK >= 0; qGDIWBQPsjK--)
        cout << VV6stzyJCP[qGDIWBQPsjK];
    cout << endl;
    return 0;
}

