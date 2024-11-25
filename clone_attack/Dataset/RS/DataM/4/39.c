int main () {
    int FCUn2MTqP;
    int clmqtgv7QwE8;
    int rl6wAyIN2eQE [FCUn2MTqP] [clmqtgv7QwE8];
    cin >> FCUn2MTqP >> clmqtgv7QwE8;
    {
        int ZSVJZax6 = (707 - 707);
        while (ZSVJZax6 < FCUn2MTqP) {
            {
                int j = 0;
                while (j < clmqtgv7QwE8) {
                    cin >> *(*(rl6wAyIN2eQE + ZSVJZax6) + j);
                    j = j + 1;
                };
            }
            ZSVJZax6++;
        };
    }
    {
        int ZSVJZax6 = 0;
        while (ZSVJZax6 <= FCUn2MTqP +clmqtgv7QwE8 - 2) {
            for (int j = 0;
            j <= ZSVJZax6; j++)
                if (j < FCUn2MTqP &&ZSVJZax6-j < clmqtgv7QwE8)
                    cout << *(*(rl6wAyIN2eQE + j) + ZSVJZax6 -j) << endl;
            ZSVJZax6++;
        };
    }
    return 0;
}

