int main (int argc, char *argv []) {
    int m, i, j = (524 - 524), zhe [26], t = 0, rQ7kXp5qV3m9, name;
    char s [26];
    struct   {
        int num;
        char s [26];
    }
    shu [1000];
    for (i = 0; i < 26; i = i + 1) {
        zhe[i] = 0;
    }
    scanf ("%d", &m);
    {
        i = 0;
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
        while (i < m) {
            scanf ("%d%s", &shu[i].num, shu[i].s);
            i++;
        };
    }
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
    {
        i = 0;
        while (i < m) {
            for (j = 0; shu[i].s[j] != 0; j = j + 1) {
                if (shu[i].s[j] == 'A') {
                    zhe[0]++;
                }
                else if (shu[i].s[j] == 'B') {
                    zhe[1]++;
                }
                else if (shu[i].s[j] == 'C') {
                    zhe[2]++;
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
                    };
                }
                else if (shu[i].s[j] == 'D') {
                    zhe[3]++;
                }
                else if (shu[i].s[j] == 'E') {
                    zhe[4]++;
                }
                else if (shu[i].s[j] == 'F') {
                    zhe[5]++;
                }
                else if (shu[i].s[j] == 'G') {
                    zhe[6]++;
                }
                else if (shu[i].s[j] == 'H') {
                    zhe[7]++;
                }
                else if (shu[i].s[j] == 'I') {
                    zhe[8]++;
                }
                else if (shu[i].s[j] == 'J') {
                    zhe[9]++;
                }
                else if (shu[i].s[j] == 'K') {
                    zhe[10]++;
                }
                else if (shu[i].s[j] == 'L') {
                    zhe[11]++;
                }
                else if (shu[i].s[j] == 'M') {
                    zhe[12]++;
                }
                else if (shu[i].s[j] == 'N') {
                    zhe[13]++;
                }
                else if (shu[i].s[j] == 'O') {
                    zhe[(617 - 603)]++;
                }
                else if (shu[i].s[j] == 'P') {
                    zhe[(513 - 498)]++;
                }
                else if (shu[i].s[j] == 'Q') {
                    zhe[(486 - 470)]++;
                }
                else if (shu[i].s[j] == 'R') {
                    zhe[17]++;
                }
                else if (shu[i].s[j] == 'S') {
                    zhe[18]++;
                }
                else if (shu[i].s[j] == 'T') {
                    zhe[19]++;
                }
                else if (shu[i].s[j] == 'U') {
                    zhe[20]++;
                }
                else if (shu[i].s[j] == 'V') {
                    zhe[21]++;
                }
                else if (shu[i].s[j] == 'W') {
                    zhe[22]++;
                }
                else if (shu[i].s[j] == 'X') {
                    zhe[23]++;
                }
                else if (shu[i].s[j] == 'Y') {
                    zhe[(689 - 665)]++;
                }
                else if (shu[i].s[j] == 'Z') {
                    zhe[25]++;
                }
                else {
                };
            }
            i++;
        };
    }
    for (j = 0; j < 26; j++) {
        if (zhe[j] > t) {
            t = zhe[j];
            rQ7kXp5qV3m9 = j;
        };
    }
    name = 'A' + rQ7kXp5qV3m9;
    printf ("%c\n", name);
    printf ("%d\n", t);
    for (i = 0; i < m; i++) {
        j = 0;
        while (j < 26) {
            if (shu[i].s[j] == name)
                printf ("%d\n", shu[i].num);
            j++;
        };
    }
    return 0;
}

