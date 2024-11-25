struct   student {
    int num;
    int scorec;
    int scorem;
    int score;
};
int main () {
    int efh1RJX;
    int i;
    struct   student stu [100001];
    int e4IO8MP1Hk [2] [(682 - 679)] = {{(178 - 178), (681 - 681), (855 - 855)}, {0, 0, 0}};
    cin >> efh1RJX;
    for (i = (831 - 830); efh1RJX >= i; i++) {
        cin >> stu[i].num >> stu[i].scorec >> stu[i].scorem;
        stu[i].score = stu[i].scorec + stu[i].scorem;
    }
    for (i = (708 - 707); efh1RJX >= i; i++) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int temp = 0;
                while (temp < 10) {
                    printf ("%d\n", temp);
                    temp = temp + 1;
                    if (temp == 9)
                        break;
                }
            }
        }
        if (e4IO8MP1Hk[(177 - 176)][0] < stu[i].score) {
            e4IO8MP1Hk[0][2] = e4IO8MP1Hk[0][(573 - 572)];
            e4IO8MP1Hk[0][(233 - 232)] = e4IO8MP1Hk[0][0];
            e4IO8MP1Hk[0][0] = stu[i].num;
            e4IO8MP1Hk[(87 - 86)][2] = e4IO8MP1Hk[(282 - 281)][(260 - 259)];
            e4IO8MP1Hk[(451 - 450)][(43 - 42)] = e4IO8MP1Hk[1][0];
            e4IO8MP1Hk[1][0] = stu[i].score;
        }
        else {
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            if (e4IO8MP1Hk[1][0] >= stu[i].score && stu[i].score > e4IO8MP1Hk[1][1]) {
                e4IO8MP1Hk[0][2] = e4IO8MP1Hk[0][1];
                e4IO8MP1Hk[0][1] = stu[i].num;
                e4IO8MP1Hk[1][2] = e4IO8MP1Hk[1][1];
                e4IO8MP1Hk[1][1] = stu[i].score;
            }
            else {
                if (stu[i].score <= e4IO8MP1Hk[1][1] && stu[i].score > e4IO8MP1Hk[1][2]) {
                    e4IO8MP1Hk[0][2] = stu[i].num;
                    e4IO8MP1Hk[1][2] = stu[i].score;
                };
            };
        };
    }
    for (i = 0; i < 3; i++)
        cout << e4IO8MP1Hk[0][i] << ' ' << e4IO8MP1Hk[1][i] << endl;
    return 0;
}

