inline char L5mK0PRMiFph (char cBFH2g) {
    if (97 <= cBFH2g)
        return cBFH2g - 32;
    else
        return cBFH2g;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
}

int main () {
    int CDnaZHdk36mQ;
    int VimD6L;
    int kZ6HBfc2C;
    int t6iyad9MlKj;
    char FlLaZPgY [1200];
    char sQ3wNnU;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    cin >> FlLaZPgY;
    CDnaZHdk36mQ = strlen (FlLaZPgY);
    sQ3wNnU = L5mK0PRMiFph (FlLaZPgY[0]);
    t6iyad9MlKj = 1;
    {
        VimD6L = 1;
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
        while (CDnaZHdk36mQ > VimD6L) {
            if (L5mK0PRMiFph (FlLaZPgY[VimD6L]) == sQ3wNnU) {
                t6iyad9MlKj++;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                };
            }
            else {
                cout << "(" << sQ3wNnU << "," << t6iyad9MlKj << ")";
                t6iyad9MlKj = 1;
                sQ3wNnU = L5mK0PRMiFph (FlLaZPgY[VimD6L]);
            }
            VimD6L++;
        };
    }
    cout << "(" << sQ3wNnU << "," << t6iyad9MlKj << ")";
    return 0;
}

