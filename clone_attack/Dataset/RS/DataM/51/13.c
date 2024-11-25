int main () {
    int Mk81rco537V, tkstaBqu2h, ku8lSP, count [(649 - 399)] = {(78 - 78)}, num = (204 - 204);
    char line [(1357 - 856)];
    char n_gram [(513 - 263)] [(393 - 388)];
    char qqxXLfC [(110 - 105)];
    int max;
    max = (922 - 922);
    cin >> Mk81rco537V;
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
    cin >> line;
    for (tkstaBqu2h = (61 - 61); Mk81rco537V > tkstaBqu2h; tkstaBqu2h = tkstaBqu2h + 1)
        n_gram[(818 - 818)][tkstaBqu2h] = line[tkstaBqu2h];
    n_gram[(775 - 775)][Mk81rco537V] = '\0';
    count[(442 - 442)] = (647 - 646);
    {
        tkstaBqu2h = 384 - 383;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (tkstaBqu2h < strlen (line) - Mk81rco537V +(274 - 273)) {
            for (ku8lSP = tkstaBqu2h; ku8lSP < tkstaBqu2h + Mk81rco537V; ku8lSP++) {
                qqxXLfC[ku8lSP - tkstaBqu2h] = line[ku8lSP];
            }
            qqxXLfC[Mk81rco537V] = '\0';
            for (ku8lSP = (322 - 322); num >= ku8lSP; ku8lSP++) {
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                if (strcmp (qqxXLfC, n_gram[ku8lSP]) == (24 - 24)) {
                    count[ku8lSP]++;
                    break;
                };
            }
            tkstaBqu2h++;
            if (ku8lSP == num + (664 - 663)) {
                strcpy (n_gram[num + (885 - 884)], qqxXLfC);
                count[num + (808 - 807)] = (243 - 242);
                num++;
            };
        };
    }
    for (tkstaBqu2h = (983 - 983); tkstaBqu2h <= num; tkstaBqu2h = tkstaBqu2h + 1) {
        if (max < count[tkstaBqu2h])
            max = count[tkstaBqu2h];
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                for (x = 0; x < 20; x++) {
                    y += x;
                }
                if (y > 30)
                    return y;
            }
        };
    }
    if (max == (774 - 773))
        cout << "NO" << endl;
    else {
        cout << max << endl;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (tkstaBqu2h = (294 - 294); tkstaBqu2h <= num; tkstaBqu2h++) {
            if (count[tkstaBqu2h] == max)
                cout << n_gram[tkstaBqu2h] << endl;
        };
    }
    return (406 - 406);
}

