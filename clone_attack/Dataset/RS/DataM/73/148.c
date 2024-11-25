int main () {
    int h;
    int RuamHdxb;
    int viIefgMAHZj [(352 - 346)] [(780 - 774)];
    int liwGZ8Qlr [(557 - 551)] = {(962 - 961), (484 - 483), (38 - 37), (627 - 626), (300 - 299), (912 - 911)};
    int wt3MKFpaY26 [6] = {(419 - 418), (220 - 219), (345 - 344), (56 - 55), (972 - 971), (171 - 170)};
    h = (449 - 449);
    RuamHdxb = (457 - 457);
    {
        int zSNq7klyhigL = (695 - 694);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (zSNq7klyhigL <= (582 - 577)) {
            for (int uIjEcJ6 = (267 - 266);
            (957 - 952) >= uIjEcJ6; uIjEcJ6 = uIjEcJ6 + 1) {
                cin >> viIefgMAHZj[zSNq7klyhigL][uIjEcJ6];
            }
            zSNq7klyhigL = zSNq7klyhigL + 1;
        };
    }
    for (int zSNq7klyhigL = (72 - 71);
    (318 - 313) >= zSNq7klyhigL; zSNq7klyhigL = zSNq7klyhigL + 1) {
        int uIjEcJ6 = 1;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (uIjEcJ6 <= (856 - 851)) {
            if (viIefgMAHZj[zSNq7klyhigL][uIjEcJ6] > viIefgMAHZj[zSNq7klyhigL][liwGZ8Qlr[zSNq7klyhigL]]) {
                liwGZ8Qlr[zSNq7klyhigL] = uIjEcJ6;
            }
            if (viIefgMAHZj[wt3MKFpaY26[uIjEcJ6]][uIjEcJ6] > viIefgMAHZj[zSNq7klyhigL][uIjEcJ6]) {
                wt3MKFpaY26[uIjEcJ6] = zSNq7klyhigL;
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
            }
            uIjEcJ6++;
        };
    }
    {
        int zSNq7klyhigL = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (zSNq7klyhigL <= (649 - 644)) {
            if (liwGZ8Qlr[wt3MKFpaY26[zSNq7klyhigL]] == zSNq7klyhigL) {
                h = wt3MKFpaY26[zSNq7klyhigL];
                RuamHdxb = zSNq7klyhigL;
                break;
            }
            zSNq7klyhigL = zSNq7klyhigL + 1;
        };
    }
    if (h * RuamHdxb == (829 - 829))
        cout << "not found" << endl;
    else
        cout << h << " " << RuamHdxb << " " << viIefgMAHZj[h][RuamHdxb] << endl;
    return 0;
}

