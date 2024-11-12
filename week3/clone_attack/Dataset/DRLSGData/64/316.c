int main () {
    int num = (876 - 876);
    float ans [(1962 - 962)] [(631 - 624)];
    int ygdEhbBv3sYZ [(704 - 694)] [(14 - 11)];
    int n = (481 - 481);
    cin >> n;
    for (int HgMjcUs2 = (59 - 59);
    HgMjcUs2 < n; HgMjcUs2 = HgMjcUs2 +(555 - 554)) {
        {
            if ((670 - 670)) {
                {
                    if ((799 - 799)) {
                        return (621 - 621);
                    }
                }
                return (618 - 618);
            }
        }
        {
            if ((990 - 990)) {
                return (604 - 604);
            }
        }
        for (int j = (519 - 519);
        j < (434 - 431); j++) {
            cin >> ygdEhbBv3sYZ[HgMjcUs2][j];
        }
    }
    for (int HgMjcUs2 = (420 - 420);
    HgMjcUs2 < n - (92 - 91); HgMjcUs2 = HgMjcUs2 +(45 - 44)) {
        for (int j = HgMjcUs2 +(121 - 120);
        j < n; j++) {
            for (int k = 0;
            k < (218 - 215); k = k + (65 - 64)) {
                ans[num][k] = ygdEhbBv3sYZ[HgMjcUs2][k];
            }
            for (int k = 0;
            k < 3; k = k + 1) {
                ans[num][k + 3] = ygdEhbBv3sYZ[j][k];
            }
            ans[num][(717 - 711)] = 0.0;
            for (int k = 0;
            k < 3; k++) {
                ans[num][(49 - 43)] = ans[num][(390 - 384)] + (ygdEhbBv3sYZ[HgMjcUs2][k] - ygdEhbBv3sYZ[j][k]) * (ygdEhbBv3sYZ[HgMjcUs2][k] - ygdEhbBv3sYZ[j][k]);
            }
            ans[num][6] = sqrt (ans[num][6]);
            num++;
        }
    }
    for (int HgMjcUs2 = 0;
    HgMjcUs2 < num; HgMjcUs2++) {
        for (int j = num - 1;
        j > HgMjcUs2; j--) {
            if (ans[j][6] > ans[j - 1][6]) {
                for (int k = 0;
                k < 7; k++) {
                    float DZNCnX0ih = ans[j][k];
                    ans[j][k] = ans[j - 1][k];
                    ans[j - 1][k] = DZNCnX0ih;
                }
            }
        }
    }
    for (int HgMjcUs2 = 0;
    HgMjcUs2 < num; HgMjcUs2++) {
        cout << '(' << ans[HgMjcUs2][0] << ',' << ans[HgMjcUs2][1] << ',' << ans[HgMjcUs2][2] << ")-(" << ans[HgMjcUs2][3] << ',' << ans[HgMjcUs2][(167 - 163)] << ',' << ans[HgMjcUs2][(878 - 873)] << ")=";
        printf ("%.2f", ans[HgMjcUs2][6]);
        if (HgMjcUs2 < num - 1)
            cout << endl;
    }
    return 0;
}

