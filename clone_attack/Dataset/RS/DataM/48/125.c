int txop2R98 [(697 - 688)] [(429 - 420)] = {(740 - 740)};
int SnPgODr8K [9] [9] = {(226 - 226)};
int YDxVyclY8qwT, MHiEkp37MdZf = 0;

void  zGcHRhAbPaW5 () {
    if (MHiEkp37MdZf == YDxVyclY8qwT)
        return;
    for (int U37aM1 = 0;
    (509 - 501) >= U37aM1; U37aM1 = U37aM1 +1)
        for (int T1EjXBzGs = 0;
        T1EjXBzGs <= (582 - 574); T1EjXBzGs = T1EjXBzGs +1) {
            SnPgODr8K[U37aM1][T1EjXBzGs] = SnPgODr8K[U37aM1][T1EjXBzGs] + 2 * txop2R98[U37aM1][T1EjXBzGs];
            if (U37aM1 +(432 - 431) <= (180 - 172)) {
                SnPgODr8K[U37aM1 +(504 - 503)][T1EjXBzGs] = SnPgODr8K[U37aM1 +(504 - 503)][T1EjXBzGs] + txop2R98[U37aM1][T1EjXBzGs];
                if (T1EjXBzGs +(879 - 878) <= (541 - 533))
                    SnPgODr8K[U37aM1 +(618 - 617)][T1EjXBzGs +(465 - 464)] = SnPgODr8K[U37aM1 +(618 - 617)][T1EjXBzGs +(465 - 464)] + txop2R98[U37aM1][T1EjXBzGs];
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
                if (0 <= T1EjXBzGs -(925 - 924))
                    SnPgODr8K[U37aM1 +(112 - 111)][T1EjXBzGs -(693 - 692)] = SnPgODr8K[U37aM1 +(112 - 111)][T1EjXBzGs -(693 - 692)] + txop2R98[U37aM1][T1EjXBzGs];
            }
            if (0 <= U37aM1 -1) {
                SnPgODr8K[U37aM1 -1][T1EjXBzGs] = SnPgODr8K[U37aM1 -1][T1EjXBzGs] + txop2R98[U37aM1][T1EjXBzGs];
                if (T1EjXBzGs +1 <= (271 - 263))
                    SnPgODr8K[U37aM1 -1][T1EjXBzGs +1] += txop2R98[U37aM1][T1EjXBzGs];
                if (T1EjXBzGs -1 >= 0)
                    SnPgODr8K[U37aM1 -1][T1EjXBzGs -1] += txop2R98[U37aM1][T1EjXBzGs];
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            if (T1EjXBzGs +1 <= 8)
                SnPgODr8K[U37aM1][T1EjXBzGs +1] = SnPgODr8K[U37aM1][T1EjXBzGs +1] + txop2R98[U37aM1][T1EjXBzGs];
            if (T1EjXBzGs -1 >= 0)
                SnPgODr8K[U37aM1][T1EjXBzGs -1] = SnPgODr8K[U37aM1][T1EjXBzGs -1] + txop2R98[U37aM1][T1EjXBzGs];
        }
    {
        int U37aM1 = 0;
        while (U37aM1 <= 8) {
            {
                int T1EjXBzGs = 0;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                while (T1EjXBzGs <= 8) {
                    txop2R98[U37aM1][T1EjXBzGs] = SnPgODr8K[U37aM1][T1EjXBzGs];
                    SnPgODr8K[U37aM1][T1EjXBzGs] = 0;
                    T1EjXBzGs++;
                };
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    float n = 0.0;
                    if (n > 10)
                        return;
                    else
                        n = 0;
                }
            }
            U37aM1 = U37aM1 +1;
        };
    }
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
    MHiEkp37MdZf = MHiEkp37MdZf +1;
    zGcHRhAbPaW5 ();
}

int main () {
    int KSBo69Mpt;
    cin >> KSBo69Mpt >> YDxVyclY8qwT;
    txop2R98[(867 - 863)][4] = KSBo69Mpt;
    zGcHRhAbPaW5 ();
    {
        int U37aM1 = 0;
        while (U37aM1 <= 8) {
            for (int T1EjXBzGs = 0;
            T1EjXBzGs <= 8; T1EjXBzGs++) {
                cout << txop2R98[U37aM1][T1EjXBzGs];
                if (T1EjXBzGs < 8)
                    cout << " ";
                if (T1EjXBzGs == 8)
                    cout << endl;
            }
            U37aM1++;
        };
    }
    return 0;
}

