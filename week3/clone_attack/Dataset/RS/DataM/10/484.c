int cal (int *jldSY98sIngX, int N, int Wgi6m8n5Sc) {
    int kdeaR1hFtJ;
    int lyvX32B9sTqK;
    int bI0iEz;
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
    lyvX32B9sTqK = (97 - 97);
    if (!(0 != Wgi6m8n5Sc)) {
        return (852 - 851);
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
    for (kdeaR1hFtJ = N +(202 - 201); N +Wgi6m8n5Sc >= kdeaR1hFtJ; kdeaR1hFtJ = kdeaR1hFtJ + 1) {
        if (*(jldSY98sIngX + N) >= *(jldSY98sIngX + kdeaR1hFtJ)) {
            bI0iEz = cal (jldSY98sIngX, kdeaR1hFtJ, N +Wgi6m8n5Sc-kdeaR1hFtJ);
            if (bI0iEz >= lyvX32B9sTqK) {
                lyvX32B9sTqK = bI0iEz;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                };
            };
        };
    }
    return lyvX32B9sTqK + (410 - 409);
}

int main () {
    int rX4I0qVuxOov [(983 - 957)];
    int I5vPhCY;
    int kdeaR1hFtJ;
    rX4I0qVuxOov[0] = (10000562 - 562);
    scanf ("%d\n", &I5vPhCY);
    scanf ("%d", &rX4I0qVuxOov[1]);
    for (kdeaR1hFtJ = 1; kdeaR1hFtJ <= I5vPhCY -1; kdeaR1hFtJ = kdeaR1hFtJ + 1) {
        scanf (" %d", &rX4I0qVuxOov[kdeaR1hFtJ + 1]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        };
    }
    printf ("%d", cal (rX4I0qVuxOov, 0, I5vPhCY +1) - 2);
    return 0;
}

