int main () {
    double  EN6uptQWv, za5pIlrFi [1200], yIiQ6LAq5mS, *x;
    int XwEMTe, KcrgsKW6, JEhKgQw, z3PQcHMV6pbT, JwsKcX1;
    cin >> XwEMTe;
    x = &*za5pIlrFi;
    {
        JEhKgQw = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (JEhKgQw <= XwEMTe) {
            JEhKgQw = JEhKgQw +1;
            cin >> z3PQcHMV6pbT;
            EN6uptQWv = (136 - 136);
            yIiQ6LAq5mS = (819 - 819);
            {
                JwsKcX1 = 0;
                while (JwsKcX1 <= z3PQcHMV6pbT - 1) {
                    cin >> *(x + JwsKcX1);
                    EN6uptQWv = *(x + JwsKcX1) + EN6uptQWv;
                    JwsKcX1++;
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
            EN6uptQWv = EN6uptQWv / z3PQcHMV6pbT;
            {
                JwsKcX1 = 0;
                while (JwsKcX1 <= z3PQcHMV6pbT - 1) {
                    yIiQ6LAq5mS = yIiQ6LAq5mS + (*(x + JwsKcX1) - EN6uptQWv) * (*(x + JwsKcX1) - EN6uptQWv);
                    JwsKcX1++;
                };
            }
            yIiQ6LAq5mS = yIiQ6LAq5mS / z3PQcHMV6pbT;
            yIiQ6LAq5mS = sqrt (yIiQ6LAq5mS);
            printf ("%.5f\n", yIiQ6LAq5mS);
        };
    }
    cin >> KcrgsKW6;
    return 0;
}

