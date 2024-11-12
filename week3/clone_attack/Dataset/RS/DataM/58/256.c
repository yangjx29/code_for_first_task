int main () {
    int Z0RUXApKsI;
    int hTEa0C [100];
    int zAbwfcVoLj7P;
    int lBO6wa8QXkc;
    int ETNvZcKIY5;
    int t;
    int En9x1XjzVPwC;
    char eGSPT8dx [81];
    {
        ETNvZcKIY5 = 115 - 114;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (ETNvZcKIY5 <= 100) {
            ETNvZcKIY5 = ETNvZcKIY5 +1;
            hTEa0C[ETNvZcKIY5 -1] = 1;
        };
    }
    scanf ("%d\n", &Z0RUXApKsI);
    for (zAbwfcVoLj7P = 1; Z0RUXApKsI >= zAbwfcVoLj7P; zAbwfcVoLj7P = zAbwfcVoLj7P + 1) {
        gets (eGSPT8dx);
        if (!('_' != eGSPT8dx[(58 - 58)]) || (eGSPT8dx[0] >= 'a' && 'z' >= eGSPT8dx[0]) || (eGSPT8dx[0] >= 'A' && 'Z' >= eGSPT8dx[0])) {
            En9x1XjzVPwC = strlen (eGSPT8dx) - 1;
            for (lBO6wa8QXkc = 1; lBO6wa8QXkc <= En9x1XjzVPwC; lBO6wa8QXkc = lBO6wa8QXkc + 1) {
                if (eGSPT8dx[lBO6wa8QXkc] == '_' || (eGSPT8dx[lBO6wa8QXkc] >= 'a' && eGSPT8dx[lBO6wa8QXkc] <= 'z') || (eGSPT8dx[lBO6wa8QXkc] >= 'A' && eGSPT8dx[lBO6wa8QXkc] <= 'Z') || (eGSPT8dx[lBO6wa8QXkc] >= '0' && eGSPT8dx[lBO6wa8QXkc] <= '9'))
                    ;
                else
                    hTEa0C[zAbwfcVoLj7P - 1] = 0;
            };
        }
        else
            hTEa0C[zAbwfcVoLj7P - 1] = 0;
    }
    {
        t = 1;
        while (t <= Z0RUXApKsI) {
            printf ("%d\n", hTEa0C[t - 1]);
            t = t + 1;
        };
    };
}

