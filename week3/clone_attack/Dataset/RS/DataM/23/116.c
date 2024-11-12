int main () {
    int TvAZqChye1;
    int j;
    TvAZqChye1 = 0;
    j = 0;
    char NTEU0s;
    char YgqpFcz2 [105] [55] = {0};
    for (; true;) {
        cin.get (NTEU0s);
        if (!(' ' != NTEU0s)) {
            TvAZqChye1++;
            j = 0;
        }
        else {
            if (NTEU0s == '\n')
                break;
            else {
                YgqpFcz2[TvAZqChye1][j] = NTEU0s;
                j++;
            };
        };
    }
    {
        int C7U2nN = TvAZqChye1;
        while (C7U2nN > 0) {
            cout << YgqpFcz2[C7U2nN] << " ";
            C7U2nN--;
        };
    }
    cout << YgqpFcz2[0];
}

