struct   a {
    int mbSza8M3hcj6;
    char author [(891 - 865)];
}
o35uOqd4 [(1082 - 982)];

int main () {
    int lmpQJirhnlP = (716 - 716);
    int gFAipCfa5RKD [(318 - 292)] = {(903 - 903)};
    int n;
    n = (98 - 98);
    int p;
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
    p = (470 - 470);
    cin >> n;
    {
        int J41JG5M2 = (826 - 826);
        while (J41JG5M2 < n) {
            cin >> o35uOqd4[J41JG5M2].mbSza8M3hcj6;
            cin >> o35uOqd4[J41JG5M2].author;
            for (int j = (521 - 521);
            o35uOqd4[J41JG5M2].author[j] != '\0'; j++)
                gFAipCfa5RKD[o35uOqd4[J41JG5M2].author[j] - 'A']++;
            J41JG5M2 = J41JG5M2 +1;
        };
    }
    {
        int J41JG5M2 = 0;
        while (J41JG5M2 < 26) {
            if (lmpQJirhnlP < gFAipCfa5RKD[J41JG5M2]) {
                p = J41JG5M2;
                lmpQJirhnlP = gFAipCfa5RKD[J41JG5M2];
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            J41JG5M2 = J41JG5M2 +1;
        };
    }
    cout << (char) (p + 'A') << endl;
    cout << lmpQJirhnlP << endl;
    {
        int J41JG5M2 = 0;
        while (J41JG5M2 < n) {
            {
                int j = 0;
                while (o35uOqd4[J41JG5M2].author[j] != '\0') {
                    if (o35uOqd4[J41JG5M2].author[j] - p == 'A') {
                        cout << o35uOqd4[J41JG5M2].mbSza8M3hcj6 << endl;
                        break;
                    }
                    j++;
                };
            }
            J41JG5M2 = J41JG5M2 +1;
        };
    }
    return 0;
}

