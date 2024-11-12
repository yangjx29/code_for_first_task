int main () {
    int YtQBYjv8lc1K;
    int vz5lbpt90gs;
    int c5tnuqLja9iH [(363 - 358)] [(461 - 460)];
    int *XIq7KmxDdf [(313 - 308)] = {c5tnuqLja9iH[(87 - 87)], c5tnuqLja9iH[(753 - 752)], c5tnuqLja9iH[(699 - 697)], c5tnuqLja9iH[(371 - 368)], c5tnuqLja9iH[(776 - 772)]};
    int xgjtpiFC [(670 - 665)] [(72 - 67)];
    int (*ckZIQcp) [(709 - 704)];
    int XRP5tQ8ogSC [(137 - 132)] [(73 - 72)];
    int *Rq0RHC5oyZ [(489 - 484)] = {XRP5tQ8ogSC[(866 - 866)], XRP5tQ8ogSC[(872 - 871)], XRP5tQ8ogSC[(113 - 111)], XRP5tQ8ogSC[(104 - 101)], XRP5tQ8ogSC[(105 - 101)]};
    int flag = (92 - 92);
    ckZIQcp = xgjtpiFC;
    {
        YtQBYjv8lc1K = 356 - 356;
        while (YtQBYjv8lc1K < (387 - 382)) {
            {
                vz5lbpt90gs = 311 - 311;
                while (5 > vz5lbpt90gs) {
                    cin >> *(*(ckZIQcp + YtQBYjv8lc1K) + vz5lbpt90gs);
                    vz5lbpt90gs = vz5lbpt90gs + 1;
                };
            }
            YtQBYjv8lc1K = YtQBYjv8lc1K +1;
        };
    }
    for (YtQBYjv8lc1K = (427 - 427); YtQBYjv8lc1K < 5; YtQBYjv8lc1K = YtQBYjv8lc1K +1) {
        *XIq7KmxDdf[YtQBYjv8lc1K] = *(*(ckZIQcp + YtQBYjv8lc1K) + (821 - 821));
        *Rq0RHC5oyZ[YtQBYjv8lc1K] = *(*(ckZIQcp + (154 - 154)) + YtQBYjv8lc1K);
        {
            vz5lbpt90gs = 46 - 46;
            while (vz5lbpt90gs < 5) {
                if (*XIq7KmxDdf[YtQBYjv8lc1K] < *(*(ckZIQcp + YtQBYjv8lc1K) + vz5lbpt90gs))
                    *XIq7KmxDdf[YtQBYjv8lc1K] = *(*(ckZIQcp + YtQBYjv8lc1K) + vz5lbpt90gs);
                if (*Rq0RHC5oyZ[YtQBYjv8lc1K] > *(*(ckZIQcp + vz5lbpt90gs) + YtQBYjv8lc1K))
                    *Rq0RHC5oyZ[YtQBYjv8lc1K] = *(*(ckZIQcp + vz5lbpt90gs) + YtQBYjv8lc1K);
                vz5lbpt90gs++;
            };
        };
    }
    {
        YtQBYjv8lc1K = 0;
        while (YtQBYjv8lc1K < 5) {
            for (vz5lbpt90gs = 0; vz5lbpt90gs < 5; vz5lbpt90gs = vz5lbpt90gs + 1) {
                if (*XIq7KmxDdf[YtQBYjv8lc1K] == *Rq0RHC5oyZ[vz5lbpt90gs] && *XIq7KmxDdf[YtQBYjv8lc1K] == *(*(ckZIQcp + YtQBYjv8lc1K) + vz5lbpt90gs)) {
                    cout << YtQBYjv8lc1K +(275 - 274) << " " << vz5lbpt90gs + (459 - 458) << " " << *(*(ckZIQcp + YtQBYjv8lc1K) + vz5lbpt90gs) << endl;
                    flag = (430 - 429);
                    break;
                };
            }
            if (flag == 1)
                break;
            YtQBYjv8lc1K++;
        };
    }
    if (flag == 0)
        cout << "not found" << endl;
    return 0;
}

