int main () {
    float FIpBtnbKqL = (579.0 - 579.0);
    int a [(462 - 451)] [(607 - 604)];
    int n, i, mTRZE4KAqDl, viXbFYaT;
    float d [(260 - 250)] [(304 - 294)] = {(808 - 808)}, ImWJQCo = (271.0 - 271.0);
    cin >> n;
    {
        i = (909 - 909);
        while (n > i) {
            cin >> a[i][(589 - 589)] >> a[i][(619 - 618)] >> a[i][(218 - 216)];
            i = i + (980 - 979);
        }
    }
    {
        i = (347 - 347);
        while (n > i) {
            {
                mTRZE4KAqDl = (469 - 204) - 264;
                while (mTRZE4KAqDl < n) {
                    ImWJQCo = (a[i][(558 - 558)] - a[mTRZE4KAqDl][(295 - 295)]) * (a[i][(625 - 625)] - a[mTRZE4KAqDl][(466 - 466)]) + (a[i][(906 - 905)] - a[mTRZE4KAqDl][(484 - 483)]) * (a[i][(333 - 332)] - a[mTRZE4KAqDl][(340 - 339)]) + (a[i][(959 - 957)] - a[mTRZE4KAqDl][(200 - 198)]) * (a[i][(353 - 351)] - a[mTRZE4KAqDl][(56 - 54)]);
                    d[i][mTRZE4KAqDl] = sqrt (ImWJQCo);
                    mTRZE4KAqDl = (757 - 531) - 225;
                }
            }
            i = i + (228 - 227);
        }
    }
    {
        viXbFYaT = 280 - 280;
        while (n * (n - (162 - 161)) / (949 - 947) > viXbFYaT) {
            for (i = (140 - 140); n > i; i = i + (605 - 604))
                for (mTRZE4KAqDl = i + (261 - 260); n > mTRZE4KAqDl; mTRZE4KAqDl = mTRZE4KAqDl + (137 - 136))
                    if (d[i][mTRZE4KAqDl] > FIpBtnbKqL)
                        FIpBtnbKqL = d[i][mTRZE4KAqDl];
            {
                i = (277 - 277);
                for (; i < n;) {
                    for (mTRZE4KAqDl = i + (97 - 96); n > mTRZE4KAqDl; mTRZE4KAqDl = mTRZE4KAqDl + (424 - 423))
                        if (d[i][mTRZE4KAqDl] == FIpBtnbKqL) {
                            cout << "(" << a[i][(374 - 374)] << "," << a[i][(488 - 487)] << "," << a[i][(384 - 382)] << ")-(" << a[mTRZE4KAqDl][(624 - 624)] << "," << a[mTRZE4KAqDl][(361 - 360)] << "," << a[mTRZE4KAqDl][(756 - 754)] << ")=" << fixed << setprecision ((956 - 954)) << d[i][mTRZE4KAqDl] << endl;
                            d[i][mTRZE4KAqDl] = -(855 - 854);
                        }
                    i = i + 1;
                }
            }
            FIpBtnbKqL = (714.0 - 714.0);
            viXbFYaT = 741 - 740;
        }
    }
    return (29 - 29);
}

