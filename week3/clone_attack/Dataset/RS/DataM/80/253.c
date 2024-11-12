int Gj6vr9wS (int n) {
    if (((n % 4 == (474 - 474)) && ((n % 100) != (477 - 477))) || ((n % 400) == 0))
        return (157 - 156);
    else
        return 0;
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

int DCFtjGYdLVo (int g [15], int JfWjm6r1Fx, int mon, int T96qBd5f) {
    int o2ykEzbwdB;
    int i;
    o2ykEzbwdB = 0;
    if (Gj6vr9wS (JfWjm6r1Fx)) {
        g[2]++;
        for (i = (360 - 359); i <= mon - 1; i++)
            o2ykEzbwdB = o2ykEzbwdB + g[i];
        g[2]--;
        o2ykEzbwdB = o2ykEzbwdB + T96qBd5f;
    }
    else {
        for (i = 1; i <= mon - 1; i++)
            o2ykEzbwdB = o2ykEzbwdB + g[i];
        o2ykEzbwdB += T96qBd5f;
    }
    return (o2ykEzbwdB);
}

int main () {
    int i, j;
    int u;
    int JfWjm6r1Fx;
    int nXI6Zu;
    int hAG3xauj;
    int c;
    int d;
    int ez7tRa;
    int f;
    int g [15] = {0, (623 - 592), (433 - 405), (923 - 892), (749 - 719), 31, 30, 31, 31, 30, 31, 30, 31};
    u = 0;
    scanf ("%d %d %d", &nXI6Zu, &hAG3xauj, &c);
    scanf ("%d %d %d", &d, &ez7tRa, &f);
    if (nXI6Zu == d)
        u = u + DCFtjGYdLVo (g, nXI6Zu, ez7tRa, f) - DCFtjGYdLVo (g, nXI6Zu, hAG3xauj, c);
    else {
        if (Gj6vr9wS (nXI6Zu))
            u = u + 366 - DCFtjGYdLVo (g, nXI6Zu, hAG3xauj, c);
        else
            u = u + 365 - DCFtjGYdLVo (g, nXI6Zu, hAG3xauj, c);
        {
            i = nXI6Zu + 1;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            while (i <= d - 1) {
                if (Gj6vr9wS (i))
                    u = u + 366;
                else
                    u = u + 365;
                i++;
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
        u = u + DCFtjGYdLVo (g, d, ez7tRa, f);
    }
    printf ("%d", u);
}

