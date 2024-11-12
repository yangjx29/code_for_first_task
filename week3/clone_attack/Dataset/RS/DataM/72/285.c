int main () {
    int sAdyE76 [(122 - 100)] [22];
    int PrWRiuFzv;
    int SaudzEyQr;
    int m;
    int n;
    cin >> m >> n;
    for (PrWRiuFzv = (170 - 169); m >= PrWRiuFzv; PrWRiuFzv = PrWRiuFzv +1)
        for (SaudzEyQr = (104 - 103); n >= SaudzEyQr; SaudzEyQr = SaudzEyQr +1) {
            cin >> sAdyE76[PrWRiuFzv][SaudzEyQr];
        }
    for (PrWRiuFzv = (549 - 549); 22 > PrWRiuFzv; PrWRiuFzv++) {
        sAdyE76[0][PrWRiuFzv] = 0;
        sAdyE76[m + 1][PrWRiuFzv] = 0;
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
        sAdyE76[PrWRiuFzv][0] = 0;
        sAdyE76[PrWRiuFzv][n + 1] = 0;
    }
    {
        PrWRiuFzv = 1;
        while (PrWRiuFzv <= m) {
            for (SaudzEyQr = 1; SaudzEyQr <= n; SaudzEyQr = SaudzEyQr +1) {
                if (sAdyE76[PrWRiuFzv][SaudzEyQr] >= sAdyE76[PrWRiuFzv -1][SaudzEyQr] && sAdyE76[PrWRiuFzv][SaudzEyQr] >= sAdyE76[PrWRiuFzv +1][SaudzEyQr] && sAdyE76[PrWRiuFzv][SaudzEyQr] >= sAdyE76[PrWRiuFzv][SaudzEyQr -1] && sAdyE76[PrWRiuFzv][SaudzEyQr] >= sAdyE76[PrWRiuFzv][SaudzEyQr +1])
                    cout << PrWRiuFzv -1 << " " << SaudzEyQr -1 << endl;
            }
            PrWRiuFzv++;
        };
    }
    return 0;
}

