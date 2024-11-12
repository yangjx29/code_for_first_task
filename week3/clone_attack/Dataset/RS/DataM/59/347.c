char mqHQwdDzC1e [110] [110];
int GlxqYpKQ9t;
int ijQFweGCKVDm [] = {-(608 - 607), (670 - 669), (40 - 40), 0}, vqQsbMvdVUNl [] = {0, 0, (870 - 869), -(880 - 879)};

int main () {
    int vrYp5ugbVHM;
    int KZXGaMEHFo;
    vrYp5ugbVHM = 0;
    int cyVvw1, U9uqRdm6pcA, zzMv6xr;
    cin >> GlxqYpKQ9t;
    {
        cyVvw1 = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (110 > cyVvw1) {
            for (U9uqRdm6pcA = 0; 110 > U9uqRdm6pcA; U9uqRdm6pcA++)
                mqHQwdDzC1e[cyVvw1][U9uqRdm6pcA] = '#';
            cyVvw1++;
        };
    }
    {
        cyVvw1 = 1;
        while (GlxqYpKQ9t >= cyVvw1) {
            {
                U9uqRdm6pcA = 1;
                while (GlxqYpKQ9t >= U9uqRdm6pcA) {
                    cin >> mqHQwdDzC1e[cyVvw1][U9uqRdm6pcA];
                    U9uqRdm6pcA = U9uqRdm6pcA +1;
                };
            }
            cyVvw1++;
        };
    }
    cin >> KZXGaMEHFo;
    KZXGaMEHFo = KZXGaMEHFo -1;
    while (KZXGaMEHFo) {
        char b8WDBizJfU [110] [110];
        memcpy (b8WDBizJfU, mqHQwdDzC1e, sizeof (mqHQwdDzC1e));
        for (cyVvw1 = 1; cyVvw1 <= GlxqYpKQ9t; cyVvw1 = cyVvw1 + 1)
            for (U9uqRdm6pcA = 1; U9uqRdm6pcA <= GlxqYpKQ9t; U9uqRdm6pcA++)
                if (mqHQwdDzC1e[cyVvw1][U9uqRdm6pcA] == '@')
                    for (zzMv6xr = 0; zzMv6xr < 4; zzMv6xr++)
                        if (mqHQwdDzC1e[cyVvw1 + ijQFweGCKVDm[zzMv6xr]][U9uqRdm6pcA +vqQsbMvdVUNl[zzMv6xr]] == '.')
                            b8WDBizJfU[cyVvw1 + ijQFweGCKVDm[zzMv6xr]][U9uqRdm6pcA +vqQsbMvdVUNl[zzMv6xr]] = '@';
        memcpy (mqHQwdDzC1e, b8WDBizJfU, sizeof (mqHQwdDzC1e));
        KZXGaMEHFo--;
    }
    for (cyVvw1 = 1; cyVvw1 <= GlxqYpKQ9t; cyVvw1++) {
        U9uqRdm6pcA = 1;
        while (U9uqRdm6pcA <= GlxqYpKQ9t) {
            if (mqHQwdDzC1e[cyVvw1][U9uqRdm6pcA] == '@')
                vrYp5ugbVHM = vrYp5ugbVHM + 1;
            U9uqRdm6pcA++;
        };
    }
    cout << vrYp5ugbVHM << endl;
}

