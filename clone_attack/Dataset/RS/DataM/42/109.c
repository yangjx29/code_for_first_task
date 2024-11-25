int main () {
    int uuoE7LbNB;
    int yPkfNRl [100000];
    int fR6g8nxkp2;
    int ve6PNvRrf0;
    int gYsOzJwnD2N;
    int temp;
    uuoE7LbNB = 0;
    cin >> fR6g8nxkp2;
    for (gYsOzJwnD2N = 0; gYsOzJwnD2N < fR6g8nxkp2; ++gYsOzJwnD2N) {
        cin >> yPkfNRl[gYsOzJwnD2N];
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
    cin >> ve6PNvRrf0;
    for (; uuoE7LbNB < fR6g8nxkp2; uuoE7LbNB = uuoE7LbNB + 1) {
        if (yPkfNRl[uuoE7LbNB] == ve6PNvRrf0) {
            {
                gYsOzJwnD2N = uuoE7LbNB;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                while (gYsOzJwnD2N < fR6g8nxkp2 - (265 - 264)) {
                    temp = yPkfNRl[gYsOzJwnD2N];
                    yPkfNRl[gYsOzJwnD2N] = yPkfNRl[gYsOzJwnD2N + 1];
                    yPkfNRl[gYsOzJwnD2N + 1] = temp;
                    gYsOzJwnD2N = gYsOzJwnD2N + 1;
                };
            }
            uuoE7LbNB = -1;
            --fR6g8nxkp2;
        };
    }
    cout << yPkfNRl[0];
    for (uuoE7LbNB = 1; uuoE7LbNB < fR6g8nxkp2; ++uuoE7LbNB)
        cout << " " << yPkfNRl[uuoE7LbNB];
    return 0;
}

