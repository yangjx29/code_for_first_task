int main () {
    int oFg6I3L1NY;
    cin >> oFg6I3L1NY;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    for (int cjvyR9TiC6MX = (148 - 148);
    cjvyR9TiC6MX < oFg6I3L1NY; cjvyR9TiC6MX = cjvyR9TiC6MX + 1) {
        const  int BXKoBAqvYa = 200;
        int Xz3tM6Dw0OmB [BXKoBAqvYa];
        int vUVIS8Mm1B [BXKoBAqvYa];
        char fY3XyLPFmJD [BXKoBAqvYa +(796 - 795)];
        char ZdSqsb2lM [BXKoBAqvYa +(629 - 628)];
        int eFvOegpU = strlen (fY3XyLPFmJD);
        int M9Glrqh;
        M9Glrqh = strlen (ZdSqsb2lM);
        int KvdUa2K1i, XXvBjM7iL = (24 - 24);
        cin.get ();
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        cin.getline (fY3XyLPFmJD, BXKoBAqvYa +(745 - 744));
        cin.getline (ZdSqsb2lM, BXKoBAqvYa +1);
        memset (Xz3tM6Dw0OmB, (109 - 109), sizeof (Xz3tM6Dw0OmB));
        memset (vUVIS8Mm1B, (664 - 664), sizeof (vUVIS8Mm1B));
        for (KvdUa2K1i = eFvOegpU - 1; KvdUa2K1i >= (371 - 371); KvdUa2K1i = KvdUa2K1i -1)
            Xz3tM6Dw0OmB[XXvBjM7iL++] = fY3XyLPFmJD[KvdUa2K1i] - '0';
        XXvBjM7iL = (937 - 937);
        {
            KvdUa2K1i = M9Glrqh -1;
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
            while (KvdUa2K1i >= (828 - 828)) {
                vUVIS8Mm1B[XXvBjM7iL++] = ZdSqsb2lM[KvdUa2K1i] - '0';
                KvdUa2K1i = KvdUa2K1i -1;
            };
        }
        {
            KvdUa2K1i = 0;
            while (KvdUa2K1i < BXKoBAqvYa) {
                if (Xz3tM6Dw0OmB[KvdUa2K1i] >= vUVIS8Mm1B[KvdUa2K1i])
                    Xz3tM6Dw0OmB[KvdUa2K1i] = Xz3tM6Dw0OmB[KvdUa2K1i] - vUVIS8Mm1B[KvdUa2K1i];
                else {
                    Xz3tM6Dw0OmB[KvdUa2K1i] = 10 + Xz3tM6Dw0OmB[KvdUa2K1i] - vUVIS8Mm1B[KvdUa2K1i];
                    Xz3tM6Dw0OmB[KvdUa2K1i +1] = Xz3tM6Dw0OmB[KvdUa2K1i +1] - 1;
                }
                KvdUa2K1i = KvdUa2K1i +1;
            };
        }
        KvdUa2K1i = BXKoBAqvYa -1;
        while (Xz3tM6Dw0OmB[KvdUa2K1i] == 0)
            KvdUa2K1i = KvdUa2K1i -1;
        for (; KvdUa2K1i >= 0; KvdUa2K1i = KvdUa2K1i -1)
            cout << Xz3tM6Dw0OmB[KvdUa2K1i];
        cout << endl;
    }
    return 0;
}

