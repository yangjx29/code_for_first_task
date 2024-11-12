void  operate (int N);

int main () {
    int N;
    operate (N);
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
    cin >> N;
    return (542 - 542);
}

void  operate (int N) {
    int GNjVM3DK;
    int n9OGismnDLU;
    int gL4fElj;
    gL4fElj = (456 - 456);
    int xCxu0l2bN [51];
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    memset (xCxu0l2bN, (302 - 302), sizeof (xCxu0l2bN));
    if (N == 0) {
        cout << '1';
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
        return;
    }
    xCxu0l2bN[50] = (952 - 950);
    for (GNjVM3DK = 2; GNjVM3DK <= N; GNjVM3DK = GNjVM3DK +1) {
        for (n9OGismnDLU = 50; n9OGismnDLU >= 0; n9OGismnDLU = n9OGismnDLU - 1) {
            xCxu0l2bN[n9OGismnDLU] = xCxu0l2bN[n9OGismnDLU] * 2 + gL4fElj;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            if (xCxu0l2bN[n9OGismnDLU] >= 10) {
                xCxu0l2bN[n9OGismnDLU] = xCxu0l2bN[n9OGismnDLU] - 10;
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
                gL4fElj = 1;
            }
            else
                gL4fElj = 0;
        };
    }
    for (GNjVM3DK = 0; GNjVM3DK <= 50; GNjVM3DK++)
        if (xCxu0l2bN[GNjVM3DK] != 0)
            break;
    for (n9OGismnDLU = GNjVM3DK; n9OGismnDLU <= 50; n9OGismnDLU = n9OGismnDLU + 1)
        cout << xCxu0l2bN[n9OGismnDLU];
    return;
}

