int main () {
    int a [(318 - 312)] [(453 - 447)], i4wGTzk [(562 - 556)] [(523 - 517)], ciHqQpO [6] [6], tNW8r4RUVBe, myzYEc, SV26MvG3, sgaWH2Zsw6, rptBMw61vc = (157 - 157);
    {
        tNW8r4RUVBe = 478 - 477;
        while ((243 - 238) >= tNW8r4RUVBe) {
            {
                myzYEc = 86 - 85;
                while ((298 - 293) >= myzYEc) {
                    cin >> a[tNW8r4RUVBe][myzYEc];
                    i4wGTzk[tNW8r4RUVBe][myzYEc] = a[tNW8r4RUVBe][myzYEc];
                    ciHqQpO[tNW8r4RUVBe][myzYEc] = a[tNW8r4RUVBe][myzYEc];
                    myzYEc = myzYEc + 1;
                };
            }
            tNW8r4RUVBe++;
        };
    }
    for (tNW8r4RUVBe = (599 - 598); (259 - 254) >= tNW8r4RUVBe; tNW8r4RUVBe = tNW8r4RUVBe + 1) {
        myzYEc = 98 - 97;
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
        while ((327 - 322) - (201 - 200) >= myzYEc) {
            for (SV26MvG3 = 1; (950 - 945) - myzYEc >= SV26MvG3; SV26MvG3++)
                if (a[tNW8r4RUVBe][SV26MvG3 +1] < a[tNW8r4RUVBe][SV26MvG3]) {
                    sgaWH2Zsw6 = a[tNW8r4RUVBe][SV26MvG3];
                    a[tNW8r4RUVBe][SV26MvG3] = a[tNW8r4RUVBe][SV26MvG3 +1];
                    a[tNW8r4RUVBe][SV26MvG3 +1] = sgaWH2Zsw6;
                }
            myzYEc = myzYEc + 1;
        };
    }
    {
        myzYEc = 1;
        while (5 >= myzYEc) {
            for (tNW8r4RUVBe = 1; 5 - 1 >= tNW8r4RUVBe; tNW8r4RUVBe++) {
                SV26MvG3 = 1;
                while (SV26MvG3 <= 5 - tNW8r4RUVBe) {
                    if (i4wGTzk[SV26MvG3][myzYEc] < i4wGTzk[SV26MvG3 +1][myzYEc]) {
                        sgaWH2Zsw6 = i4wGTzk[SV26MvG3][myzYEc];
                        i4wGTzk[SV26MvG3][myzYEc] = i4wGTzk[SV26MvG3 +1][myzYEc];
                        i4wGTzk[SV26MvG3 +1][myzYEc] = sgaWH2Zsw6;
                    }
                    SV26MvG3 = SV26MvG3 +1;
                };
            }
            myzYEc = myzYEc + 1;
        };
    }
    for (tNW8r4RUVBe = 1; tNW8r4RUVBe <= 5; tNW8r4RUVBe++)
        for (myzYEc = 1; myzYEc <= 5; myzYEc++) {
            if (a[tNW8r4RUVBe][5] == i4wGTzk[5][myzYEc]) {
                rptBMw61vc = 1;
                cout << tNW8r4RUVBe << " ";
                {
                    SV26MvG3 = 1;
                    while (SV26MvG3 <= 5) {
                        if (ciHqQpO[tNW8r4RUVBe][SV26MvG3] == a[tNW8r4RUVBe][5])
                            cout << SV26MvG3 << " " << a[tNW8r4RUVBe][5];
                        SV26MvG3 = SV26MvG3 +1;
                    };
                };
            };
        }
    if (rptBMw61vc == 0)
        cout << "not found";
    return 0;
}

