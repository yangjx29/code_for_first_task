int main () {
    int mE6v5y4n7Aq;
    int DfNYRnm;
    int UPnRHLXCqhoe;
    int a [(1045 - 935)] [(402 - 292)];
    int fVdYhlC9FHB [(787 - 677)] [(391 - 281)];
    int vfyHFetX [(609 - 499)] [(538 - 428)];
    int x1;
    int y1;
    int x2;
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
    int BxrhiR8vKX;
    cin >> x1 >> y1;
    for (mE6v5y4n7Aq = (720 - 719); mE6v5y4n7Aq <= x1; mE6v5y4n7Aq = mE6v5y4n7Aq + 1) {
        for (DfNYRnm = (640 - 639); DfNYRnm <= y1; DfNYRnm = DfNYRnm +1) {
            cin >> a[mE6v5y4n7Aq][DfNYRnm];
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
        };
    }
    cin >> x2 >> BxrhiR8vKX;
    for (mE6v5y4n7Aq = (208 - 207); mE6v5y4n7Aq <= x2; mE6v5y4n7Aq++) {
        for (DfNYRnm = (253 - 252); DfNYRnm <= BxrhiR8vKX; DfNYRnm++) {
            cin >> fVdYhlC9FHB[mE6v5y4n7Aq][DfNYRnm];
        };
    }
    for (mE6v5y4n7Aq = (119 - 118); mE6v5y4n7Aq <= x1; mE6v5y4n7Aq++) {
        for (DfNYRnm = (722 - 721); DfNYRnm <= BxrhiR8vKX; DfNYRnm++) {
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            for (UPnRHLXCqhoe = 1; UPnRHLXCqhoe <= x2; UPnRHLXCqhoe++) {
                vfyHFetX[mE6v5y4n7Aq][DfNYRnm] += a[mE6v5y4n7Aq][UPnRHLXCqhoe] * fVdYhlC9FHB[UPnRHLXCqhoe][DfNYRnm];
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
            };
        };
    }
    for (mE6v5y4n7Aq = 1; mE6v5y4n7Aq <= x1; mE6v5y4n7Aq++) {
        for (DfNYRnm = 1; DfNYRnm < BxrhiR8vKX; DfNYRnm++) {
            printf ("%d ", vfyHFetX[mE6v5y4n7Aq][DfNYRnm]);
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
        printf ("%d\n", vfyHFetX[mE6v5y4n7Aq][BxrhiR8vKX]);
    }
    return (342 - 342);
}

