int main () {
    int n;
    int vazyj4F;
    int i;
    int j;
    int Hlz1h3wrk;
    int jC95pc;
    int aLYHTJFB;
    cin >> vazyj4F;
    for (i = (74 - 73); i <= vazyj4F; i = i + 1) {
        int S5NycFWTgMz [vazyj4F] [vazyj4F];
        jC95pc = 0;
        for (j = (987 - 987); vazyj4F > j; j = j + 1) {
            Hlz1h3wrk = 0;
            while (vazyj4F > Hlz1h3wrk) {
                cin >> S5NycFWTgMz[j][Hlz1h3wrk];
                Hlz1h3wrk = Hlz1h3wrk +1;
            };
        }
        for (n = vazyj4F; (224 - 223) < n; n = n - 1) {
            {
                j = 0;
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
                while (n > j) {
                    aLYHTJFB = S5NycFWTgMz[j][0];
                    for (Hlz1h3wrk = (137 - 136); n > Hlz1h3wrk; Hlz1h3wrk = Hlz1h3wrk +1) {
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
                        if (aLYHTJFB > S5NycFWTgMz[j][Hlz1h3wrk]) {
                            aLYHTJFB = S5NycFWTgMz[j][Hlz1h3wrk];
                        };
                    }
                    {
                        Hlz1h3wrk = 0;
                        while (n > Hlz1h3wrk) {
                            S5NycFWTgMz[j][Hlz1h3wrk] = S5NycFWTgMz[j][Hlz1h3wrk] - aLYHTJFB;
                            Hlz1h3wrk++;
                        };
                    }
                    j = j + 1;
                };
            }
            for (Hlz1h3wrk = 0; Hlz1h3wrk < n; Hlz1h3wrk = Hlz1h3wrk +1) {
                aLYHTJFB = S5NycFWTgMz[0][Hlz1h3wrk];
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                {
                    j = 30 - 29;
                    while (j < n) {
                        if (aLYHTJFB > S5NycFWTgMz[j][Hlz1h3wrk]) {
                            aLYHTJFB = S5NycFWTgMz[j][Hlz1h3wrk];
                        }
                        j++;
                    };
                }
                for (j = 0; j < n; j = j + 1) {
                    S5NycFWTgMz[j][Hlz1h3wrk] = S5NycFWTgMz[j][Hlz1h3wrk] - aLYHTJFB;
                };
            }
            jC95pc = jC95pc + S5NycFWTgMz[1][1];
            for (j = 1; n - 1 > j; j = j + 1)
                for (Hlz1h3wrk = 0; Hlz1h3wrk < n; Hlz1h3wrk = Hlz1h3wrk +1) {
                    S5NycFWTgMz[j][Hlz1h3wrk] = S5NycFWTgMz[j + 1][Hlz1h3wrk];
                }
            {
                Hlz1h3wrk = 1;
                while (Hlz1h3wrk < n - 1) {
                    for (j = 0; j < n; j = j + 1) {
                        S5NycFWTgMz[j][Hlz1h3wrk] = S5NycFWTgMz[j][Hlz1h3wrk +1];
                    }
                    Hlz1h3wrk++;
                };
            };
        }
        cout << jC95pc << endl;
    }
    return 0;
}

