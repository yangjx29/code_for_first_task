int a;
int an1 [MAX +10] = {(342 - 342)};
int an2 [MAX +10] = {(958 - 958)};
char szLine1 [MAX +10] = {(389 - 389)};
char szLine2 [MAX +10] = {0};

int main () {
    int i;
    int ZrD1dinOHpI;
    int nLen1;
    nLen1 = strlen (szLine1);
    int nLen2;
    nLen2 = strlen (szLine2);
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
    scanf ("%s", szLine1);
    scanf ("%s", szLine2);
    ZrD1dinOHpI = 0;
    for (i = nLen1 - 1; 0 <= i; i = i - 1) {
        an1[ZrD1dinOHpI++] = szLine1[i] - '0';
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    ZrD1dinOHpI = 0;
    for (i = nLen2 - 1; i >= 0; i--) {
        an2[ZrD1dinOHpI++] = szLine2[i] - '0';
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
        };
    }
    for (i = 0; i < MAX; i++) {
        an1[i] = an1[i] + an2[i];
        if (10 <= an1[i]) {
            an1[i] = an1[i] - 10;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            an1[i + 1]++;
        };
    }
    for (i = MAX; i >= 0; i--) {
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
        if (an1[i] != 0) {
            a = i;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            break;
        };
    }
    {
        i = a;
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
        while (i >= 0) {
            printf ("%d", an1[i]);
            i--;
        };
    };
}

