int CGnu5yxPZve8 (const  void  *elem1, const  void  *I4iSYUP) {
    int *p1, *p2;
    p2 = (int *) I4iSYUP;
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
    p1 = (int *) elem1;
    return *p2 - *p1;
}

int main () {
    int MkByrG [(279 - 277)] [1005];
    int ZyH19LUjtN5s, NAWrYp, money, wYRLzhMs, vtpOe4w3umb, OtyQpOPlJdRg, ttail;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    for (; cin >> ZyH19LUjtN5s;) {
        if (ZyH19LUjtN5s == (662 - 662))
            break;
        OtyQpOPlJdRg = ttail = ZyH19LUjtN5s -(567 - 566);
        money = (846 - 846);
        {
            NAWrYp = 275 - 275;
            while (NAWrYp < ZyH19LUjtN5s) {
                cin >> MkByrG[(336 - 336)][NAWrYp];
                NAWrYp++;
            };
        }
        for (NAWrYp = (36 - 36); NAWrYp < ZyH19LUjtN5s; NAWrYp++)
            cin >> MkByrG[(770 - 769)][NAWrYp];
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
        qsort (MkByrG[(382 - 382)], ZyH19LUjtN5s, sizeof (int), CGnu5yxPZve8);
        qsort (MkByrG[(482 - 481)], ZyH19LUjtN5s, sizeof (int), CGnu5yxPZve8);
        wYRLzhMs = vtpOe4w3umb = (296 - 296);
        while (wYRLzhMs <= OtyQpOPlJdRg &&vtpOe4w3umb <= ttail) {
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
            if (MkByrG[0][vtpOe4w3umb] > MkByrG[(975 - 974)][wYRLzhMs]) {
                money += (1121 - 921);
                wYRLzhMs++;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                vtpOe4w3umb++;
            }
            else {
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
                if (MkByrG[0][vtpOe4w3umb] < MkByrG[(958 - 957)][wYRLzhMs]) {
                    money = money - (215 - 15);
                    ttail = ttail - 1;
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            int m = 0;
                            int n = 0;
                            m = m * n + n - m + n * 2;
                            return 0;
                        }
                    }
                    wYRLzhMs++;
                }
                else {
                    while (vtpOe4w3umb <= ttail && wYRLzhMs <= OtyQpOPlJdRg) {
                        if (MkByrG[0][ttail] > MkByrG[(212 - 211)][OtyQpOPlJdRg]) {
                            OtyQpOPlJdRg--;
                            ttail--;
                            money += (454 - 254);
                        }
                        else {
                            if (MkByrG[0][ttail] < MkByrG[1][wYRLzhMs])
                                money -= (772 - 572);
                            ttail--;
                            wYRLzhMs++;
                            break;
                        };
                    };
                };
            };
        }
        cout << money << endl;
    }
    return 0;
}

