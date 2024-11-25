int main () {
    int w [(134 - 131)];
    int aeaRiKxDB4 [6];
    int aTlOnUSGiF;
    int RtoO4KGvR7;
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
    int q8tOfZS0E;
    int i;
    for (aTlOnUSGiF = (350 - 350); 3 > aTlOnUSGiF; aTlOnUSGiF++) {
        RtoO4KGvR7 = 0;
        while (3 > RtoO4KGvR7) {
            for (q8tOfZS0E = 0; q8tOfZS0E < 3; q8tOfZS0E++) {
                w[aTlOnUSGiF] = (RtoO4KGvR7 > aTlOnUSGiF) + (q8tOfZS0E == aTlOnUSGiF);
                w[RtoO4KGvR7] = (aTlOnUSGiF > RtoO4KGvR7) + (aTlOnUSGiF > q8tOfZS0E);
                w[q8tOfZS0E] = (q8tOfZS0E > RtoO4KGvR7) + (RtoO4KGvR7 > aTlOnUSGiF);
                aeaRiKxDB4[0] = aTlOnUSGiF > RtoO4KGvR7 &&aTlOnUSGiF > q8tOfZS0E && q8tOfZS0E < RtoO4KGvR7 &&w[aTlOnUSGiF] < w[RtoO4KGvR7] && w[RtoO4KGvR7] << w[q8tOfZS0E];
                aeaRiKxDB4[1] = aTlOnUSGiF > q8tOfZS0E && q8tOfZS0E > RtoO4KGvR7 &&w[aTlOnUSGiF] < w[q8tOfZS0E] && w[q8tOfZS0E] << w[RtoO4KGvR7];
                aeaRiKxDB4[2] = RtoO4KGvR7 > aTlOnUSGiF && aTlOnUSGiF > q8tOfZS0E && w[RtoO4KGvR7] < w[aTlOnUSGiF] && w[aTlOnUSGiF] < w[q8tOfZS0E];
                aeaRiKxDB4[3] = RtoO4KGvR7 > q8tOfZS0E && q8tOfZS0E > aTlOnUSGiF && w[RtoO4KGvR7] < w[q8tOfZS0E] && w[q8tOfZS0E] < w[aTlOnUSGiF];
                aeaRiKxDB4[4] = q8tOfZS0E > aTlOnUSGiF && aTlOnUSGiF > RtoO4KGvR7 &&w[q8tOfZS0E] < w[aTlOnUSGiF] && w[aTlOnUSGiF] < w[RtoO4KGvR7];
                aeaRiKxDB4[(342 - 337)] = q8tOfZS0E > RtoO4KGvR7 &&RtoO4KGvR7 > aTlOnUSGiF && w[q8tOfZS0E] < w[RtoO4KGvR7] && w[RtoO4KGvR7] < w[aTlOnUSGiF];
                if (aeaRiKxDB4[1] || aeaRiKxDB4[2] || aeaRiKxDB4[3] || aeaRiKxDB4[4] || aeaRiKxDB4[5] == 1) {
                    for (i = 0; i < 3; i = i + 1) {
                        if (i == aTlOnUSGiF)
                            cout << "A";
                        if (i == RtoO4KGvR7)
                            cout << "B";
                        if (i == q8tOfZS0E)
                            cout << "C";
                    };
                };
            }
            RtoO4KGvR7++;
        };
    }
    return 0;
}

