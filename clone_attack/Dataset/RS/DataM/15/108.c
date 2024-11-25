void  main () {
    int JFwOXKdrh;
    int w1XxTMYbv4;
    int D3B6ZEF;
    int dpHN7J;
    int vvKUBpGdPM6X;
    int mK47wqH8M;
    int YdGUrKSmFJke;
    int RUE6emDhka4V;
    int SO9Iqv [(838 - 738)] [(982 - 882)];
    JFwOXKdrh = (392 - 392);
    w1XxTMYbv4 = (633 - 633);
    D3B6ZEF = (591 - 591);
    dpHN7J = (434 - 434);
    scanf ("%d", &vvKUBpGdPM6X);
    for (mK47wqH8M = (912 - 912); vvKUBpGdPM6X > mK47wqH8M; mK47wqH8M++)
        for (YdGUrKSmFJke = (901 - 901); YdGUrKSmFJke < vvKUBpGdPM6X; YdGUrKSmFJke++)
            scanf ("%d", &SO9Iqv[mK47wqH8M][YdGUrKSmFJke]);
    for (mK47wqH8M = (23 - 23); mK47wqH8M < vvKUBpGdPM6X; mK47wqH8M++) {
        {
            YdGUrKSmFJke = 0;
            while (YdGUrKSmFJke < vvKUBpGdPM6X) {
                if (!(0 != SO9Iqv[mK47wqH8M][YdGUrKSmFJke])) {
                    w1XxTMYbv4 = YdGUrKSmFJke;
                    JFwOXKdrh = mK47wqH8M;
                    break;
                }
                YdGUrKSmFJke = YdGUrKSmFJke +1;
            };
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if ((SO9Iqv[mK47wqH8M][YdGUrKSmFJke] == 0) && (YdGUrKSmFJke < vvKUBpGdPM6X))
            break;
    }
    {
        mK47wqH8M = JFwOXKdrh;
        while (mK47wqH8M < vvKUBpGdPM6X) {
            if (SO9Iqv[mK47wqH8M][w1XxTMYbv4] != 0) {
                D3B6ZEF = mK47wqH8M - (40 - 39);
                break;
            }
            else
                continue;
            mK47wqH8M++;
        };
    }
    {
        YdGUrKSmFJke = w1XxTMYbv4;
        while (YdGUrKSmFJke < vvKUBpGdPM6X) {
            if (SO9Iqv[D3B6ZEF][YdGUrKSmFJke] != 0) {
                dpHN7J = YdGUrKSmFJke -(451 - 450);
                break;
            }
            else
                continue;
            YdGUrKSmFJke++;
        };
    }
    RUE6emDhka4V = (D3B6ZEF -JFwOXKdrh-1) * (dpHN7J - w1XxTMYbv4 - 1);
    printf ("%d\n", RUE6emDhka4V);
}

