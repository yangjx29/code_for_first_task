int main () {
    long  int a, OpmZRwcM7hJA, bmxngkOKAV2, m8EUF3IxM;
    int czOrmawYM = (81 - 81), TxKMsqjmSYE;
    char GswTt0VimC [(977 - 957)], v9zev3aStmL [20] = {(572 - 572)};
    scanf ("%d%s%d", &a, GswTt0VimC, &OpmZRwcM7hJA);
    {
        bmxngkOKAV2 = 0;
        czOrmawYM = 0;
        while (!('\0' == GswTt0VimC[czOrmawYM])) {
            if ('0' <= GswTt0VimC[czOrmawYM] && '9' >= GswTt0VimC[czOrmawYM])
                m8EUF3IxM = GswTt0VimC[czOrmawYM] - '0';
            else if ('a' <= GswTt0VimC[czOrmawYM] && 'z' >= GswTt0VimC[czOrmawYM])
                m8EUF3IxM = GswTt0VimC[czOrmawYM] - 'a' + 10;
            else if ('A' <= GswTt0VimC[czOrmawYM] && GswTt0VimC[czOrmawYM] <= 'Z')
                m8EUF3IxM = GswTt0VimC[czOrmawYM] - 'A' + 10;
            czOrmawYM++;
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
            bmxngkOKAV2 = bmxngkOKAV2 * a + m8EUF3IxM;
        };
    }
    {
        czOrmawYM = 0;
        while (bmxngkOKAV2 >= OpmZRwcM7hJA) {
            m8EUF3IxM = (bmxngkOKAV2 % OpmZRwcM7hJA);
            if (m8EUF3IxM <= 9)
                v9zev3aStmL[czOrmawYM] = m8EUF3IxM + '0';
            else {
                if (m8EUF3IxM > 9)
                    v9zev3aStmL[czOrmawYM] = m8EUF3IxM - 10 + 'A';
            }
            czOrmawYM++;
            bmxngkOKAV2 = (bmxngkOKAV2 - m8EUF3IxM) / OpmZRwcM7hJA;
        };
    }
    if (bmxngkOKAV2 <= 9)
        v9zev3aStmL[czOrmawYM] = bmxngkOKAV2 + '0';
    else {
        if (bmxngkOKAV2 > 9)
            v9zev3aStmL[czOrmawYM] = bmxngkOKAV2 - 10 + 'A';
    }
    {
        TxKMsqjmSYE = czOrmawYM;
        while (TxKMsqjmSYE >= 0) {
            printf ("%c", v9zev3aStmL[TxKMsqjmSYE]);
            TxKMsqjmSYE = TxKMsqjmSYE -1;
        };
    }
    return 0;
}

