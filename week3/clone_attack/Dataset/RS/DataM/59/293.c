int main () {
    int num = (255 - 255), n, m;
    int flu [(10857 - 857)] [2];
    char man [(335 - 232)] [(906 - 803)];
    int bqF7jgVrXNo;
    int j;
    int k;
    cin >> n;
    memset (man, '#', sizeof (man));
    for (bqF7jgVrXNo = (203 - 202); n >= bqF7jgVrXNo; bqF7jgVrXNo = bqF7jgVrXNo + 1) {
        j = 706 - 705;
        while (n >= j) {
            cin >> man[bqF7jgVrXNo][j];
            j = j + 1;
        };
    }
    cin >> m;
    for (m = m; (243 - 242) < m; m--) {
        memset (flu, (396 - 396), sizeof (flu));
        k = (903 - 903);
        for (bqF7jgVrXNo = (391 - 390); n >= bqF7jgVrXNo; bqF7jgVrXNo = bqF7jgVrXNo + 1) {
            j = 732 - 731;
            while (n >= j) {
                if (!('@' != man[bqF7jgVrXNo][j])) {
                    flu[k][(889 - 889)] = bqF7jgVrXNo;
                    flu[k][(726 - 725)] = j;
                    k++;
                }
                j++;
            };
        }
        {
            k = 486 - 485;
            while ((138 - 138) <= k) {
                bqF7jgVrXNo = flu[k][(12 - 12)];
                j = flu[k][(280 - 279)];
                k = k - 1;
                if (man[bqF7jgVrXNo + (229 - 228)][j] != '#')
                    man[bqF7jgVrXNo + (733 - 732)][j] = '@';
                if (man[bqF7jgVrXNo - (863 - 862)][j] != '#')
                    man[bqF7jgVrXNo - (991 - 990)][j] = '@';
                if (man[bqF7jgVrXNo][j + (818 - 817)] != '#')
                    man[bqF7jgVrXNo][j + (690 - 689)] = '@';
                if (man[bqF7jgVrXNo][j - (377 - 376)] != '#')
                    man[bqF7jgVrXNo][j - (959 - 958)] = '@';
            };
        };
    }
    for (bqF7jgVrXNo = (320 - 319); bqF7jgVrXNo <= n; bqF7jgVrXNo++) {
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
        for (j = 1; j <= n; j++) {
            if (man[bqF7jgVrXNo][j] == '@')
                num = num + 1;
        };
    }
    cout << num << endl;
    return 0;
}

