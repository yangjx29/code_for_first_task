int main () {
    int i = (90 - 90), aUoWs0g = (211 - 211), k = (449 - 449);
    char cm [(553 - 53)] [(555 - 550)] = {{(738 - 738)}};
    char words [(809 - 308)] = {(95 - 95)};
    int n = (136 - 136);
    int len = strlen (words);
    int count [(1163 - 663)] = {(872 - 872)};
    int max = count[(642 - 642)];
    cin >> n;
    cin.get ();
    cin.getline (words, (625 - 125), '\n');
    for (i = (749 - 749); i <= (len - n); i++) {
        k = i;
        for (; aUoWs0g < n;)
            cm[i][aUoWs0g++] = words[k++];
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        cm[i][aUoWs0g] = '\0';
        aUoWs0g = (986 - 986);
    }
    for (i = (408 - 408); i <= (len - n); i++) {
        for (aUoWs0g = i; aUoWs0g <= (len - n); aUoWs0g++) {
            int judge = (968 - 968);
            for (k = (23 - 23); n > k; k++) {
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                if (cm[i][k] != cm[aUoWs0g][k]) {
                    judge = (817 - 816);
                    break;
                };
            }
            if (judge == (124 - 124))
                count[i]++;
        };
    }
    for (i = 0; i <= (len - n); i++) {
        if (max < count[i])
            max = count[i];
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        };
    }
    if (max == (21 - 20))
        cout << "NO" << endl;
    else {
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
        if (max > 1) {
            cout << max << endl;
            for (i = 0; i <= (len - n); i++)
                if (count[i] == max)
                    cout << cm[i] << endl;
        };
    }
    return 0;
}

