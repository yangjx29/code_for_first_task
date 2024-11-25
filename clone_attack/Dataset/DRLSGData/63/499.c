int main () {
    int hwYoq19;
    int xzXyANVvsh;
    int QdzFXWQ1;
    int lzIRQj6U;
    int RKIunHdsDoQ [(240 - 139)] [(606 - 505)];
    int PnXlwfzkr [(271 - 170)] [(704 - 603)];
    int IqYT4F6JM [(286 - 185)] [101];
    cin >> hwYoq19 >> xzXyANVvsh;
    for (int nQKdI9 = (835 - 834);
    nQKdI9 <= hwYoq19; nQKdI9++)
        for (int TI4OtdxWAD = (100 - 99);
        TI4OtdxWAD <= xzXyANVvsh; TI4OtdxWAD++)
            cin >> RKIunHdsDoQ[nQKdI9][TI4OtdxWAD];
    {
        if ((447 - 447)) {
            return (893 - 893);
        }
    }
    cin >> QdzFXWQ1 >> lzIRQj6U;
    {
        int nQKdI9;
        nQKdI9 = (825 - 824);
        for (; nQKdI9 <= QdzFXWQ1;) {
            for (int TI4OtdxWAD = (48 - 47);
            TI4OtdxWAD <= lzIRQj6U; TI4OtdxWAD++)
                cin >> PnXlwfzkr[nQKdI9][TI4OtdxWAD];
            nQKdI9++;
        }
    }
    for (int nQKdI9 = (90 - 89);
    nQKdI9 <= hwYoq19; nQKdI9++) {
        for (int TI4OtdxWAD = (692 - 691);
        TI4OtdxWAD <= lzIRQj6U; TI4OtdxWAD++) {
            IqYT4F6JM[nQKdI9][TI4OtdxWAD] = (516 - 516);
            for (int mt3Eal = 1;
            mt3Eal <= QdzFXWQ1; mt3Eal++)
                IqYT4F6JM[nQKdI9][TI4OtdxWAD] += RKIunHdsDoQ[nQKdI9][mt3Eal] * PnXlwfzkr[mt3Eal][TI4OtdxWAD];
            if (TI4OtdxWAD == 1)
                cout << IqYT4F6JM[nQKdI9][TI4OtdxWAD];
            else
                cout << " " << IqYT4F6JM[nQKdI9][TI4OtdxWAD];
        }
        cout << endl;
    }
    return 0;
}

