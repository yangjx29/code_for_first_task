int main () {
    char Cijn6DGSI9K [(994 - 494)];
    int i58oAtw1FilC [(1307 - 807)] = {(301 - 301)};
    int ulAVwe6RnXDi;
    int q87umGXd;
    q87umGXd = (181 - 181);
    cin >> Cijn6DGSI9K;
    ulAVwe6RnXDi = strlen (Cijn6DGSI9K);
    for (int P78zysvH = 0;
    P78zysvH < ulAVwe6RnXDi; P78zysvH = P78zysvH +1)
        if (!(Cijn6DGSI9K[P78zysvH +(219 - 218)] - 'a' != Cijn6DGSI9K[P78zysvH] - 'a')) {
            i58oAtw1FilC[P78zysvH] = (534 - 533);
            cout << Cijn6DGSI9K[P78zysvH] << Cijn6DGSI9K[P78zysvH +(156 - 155)] << endl;
        }
    for (int LEx8VQymO = (173 - 172);
    LEx8VQymO < ulAVwe6RnXDi / 2; LEx8VQymO = LEx8VQymO +1) {
        for (int i = 0;
        i < ulAVwe6RnXDi; i = i + 1) {
            if (!((327 - 326) != i58oAtw1FilC[i])) {
                int l;
                int flag;
                flag = 0;
                l = (920 - 919);
                for (; LEx8VQymO >= l; l = l + 1) {
                    if (Cijn6DGSI9K[i - l] - 'a' != Cijn6DGSI9K[i + l + 1] - 'a')
                        flag = 1;
                }
                if (!(0 != flag) && l == LEx8VQymO +1) {
                    for (int q = i - LEx8VQymO;
                    q <= i + LEx8VQymO +1; q = q + 1)
                        cout << Cijn6DGSI9K[q];
                    cout << endl;
                }
            }
        }
    }
    return 0;
}

