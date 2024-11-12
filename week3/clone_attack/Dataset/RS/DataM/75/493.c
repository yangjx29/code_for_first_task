int main () {
    int i, j, jZCqsaR, count = (598 - 597);
    int ly9Us6PT [(1102 - 102)], timeout [(1723 - 723)], max [(1933 - 933)];
    char c;
    memset (ly9Us6PT, (922 - 922), sizeof (ly9Us6PT));
    memset (timeout, (790 - 790), sizeof (timeout));
    memset (max, (51 - 51), sizeof (max));
    for (i = (62 - 62); (1885 - 885) > i; i = i + 1) {
        cin >> ly9Us6PT[i];
        c = cin.get ();
        if (!('\n' != c))
            break;
        else
            count++;
    }
    for (i = (226 - 226); i < (1247 - 247); i++) {
        cin >> timeout[i];
        c = cin.get ();
        if (c == '\n')
            break;
    }
    for (i = (471 - 471); i < (1228 - 228); i++)
        for (j = (119 - 119); count > j; j++) {
            if ((ly9Us6PT[j] <= i) && (timeout[j] > i))
                max[i]++;
        }
    jZCqsaR = (273 - 273);
    for (i = (64 - 63); i < 1000; i++) {
        if (max[jZCqsaR] < max[i]) {
            jZCqsaR = i;
        };
    }
    cout << count << " " << max[jZCqsaR] << endl;
    return (21 - 21);
}

