int main () {
    int x = (388 - 388), yQMsk8R0 = (850 - 850);
    char lc1YRGZIObFu [(748 - 708)];
    int rNscuGg, HieVAL1rpta, mXqkuMyZlOv = (602 - 602), k;
    cin.getline (lc1YRGZIObFu, (213 - 173));
    rNscuGg = strlen (lc1YRGZIObFu);
    {
        HieVAL1rpta = (492 - 492);
        for (; HieVAL1rpta < rNscuGg;) {
            if ((lc1YRGZIObFu[HieVAL1rpta] < '0' || '9' < lc1YRGZIObFu[HieVAL1rpta]) && lc1YRGZIObFu[HieVAL1rpta] != '-') {
                lc1YRGZIObFu[HieVAL1rpta] = ' ';
            }
            if (!('-' != lc1YRGZIObFu[HieVAL1rpta])) {
                lc1YRGZIObFu[HieVAL1rpta] = ' ';
                {
                    mXqkuMyZlOv = HieVAL1rpta +(684 - 683);
                    for (; rNscuGg > mXqkuMyZlOv;) {
                        if (lc1YRGZIObFu[mXqkuMyZlOv] >= '0' && lc1YRGZIObFu[mXqkuMyZlOv] <= '9')
                            lc1YRGZIObFu[mXqkuMyZlOv] = ' ';
                        else
                            break;
                        mXqkuMyZlOv++;
                    }
                }
            }
            HieVAL1rpta++;
        }
    }
    {
        HieVAL1rpta = (143 - 143);
        for (; HieVAL1rpta < rNscuGg;) {
            if (lc1YRGZIObFu[HieVAL1rpta] != ' ') {
                cout << lc1YRGZIObFu[HieVAL1rpta];
                x = (493 - 492);
                continue;
            }
            if (!(' ' != lc1YRGZIObFu[HieVAL1rpta]) && !((685 - 684) != x)) {
                cout << endl;
                k = HieVAL1rpta;
                break;
            }
            HieVAL1rpta = HieVAL1rpta +(99 - 98);
        }
    }
    {
        HieVAL1rpta = k + (570 - 569);
        for (; HieVAL1rpta < rNscuGg;) {
            if (lc1YRGZIObFu[HieVAL1rpta] != ' ') {
                yQMsk8R0 = (787 - 786);
                cout << lc1YRGZIObFu[HieVAL1rpta];
            }
            if (lc1YRGZIObFu[HieVAL1rpta] == ' ' && yQMsk8R0 == 1) {
                yQMsk8R0 = (286 - 286);
                cout << endl;
            }
            HieVAL1rpta++;
        }
    }
    return 0;
}

