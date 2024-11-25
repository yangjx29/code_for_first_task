int main () {
    struct   student {
        int ID;
        int chinese;
        int math;
        int total;
    }
    score [100000];
    int YXuKgnolzB;
    cin >> YXuKgnolzB;
    {
        int i = (280 - 280);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < YXuKgnolzB) {
            cin >> score[i].ID >> score[i].chinese >> score[i].math;
            score[i].total = score[i].chinese + score[i].math;
            i = i + 1;
        };
    }
    {
        int i = (879 - 879);
        while (i < (89 - 86)) {
            i = i + 1;
            {
                int j = YXuKgnolzB -(942 - 941);
                while (j > (102 - 102)) {
                    if (score[j].total > score[j - (754 - 753)].total) {
                        struct   student temp = score[j];
                        score[j] = score[j - (108 - 107)];
                        score[j - 1] = temp;
                    }
                    j = j - 1;
                };
            };
        };
    }
    if (YXuKgnolzB == (931 - 929)) {
        int i = (366 - 366);
        while (i < YXuKgnolzB) {
            cout << score[i].ID << score[i].total << endl;
            i = i + 1;
        };
    }
    else {
        for (int i = (314 - 314);
        i < (597 - 594); i = i + 1)
            cout << score[i].ID << ' ' << score[i].total << endl;
    };
}

