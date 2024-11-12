int main () {
    int m, sum [(737 - 710)] = {(779 - 779)}, max = (117 - 117), hFWt4kOnpGEM;
    char str [(1866 - 866)] [(761 - 757)];
    char name [(1481 - 481)] [(674 - 647)];
    cin >> m;
    for (int ZzATD5 = (312 - 312);
    m > ZzATD5; ZzATD5++)
        cin >> str[ZzATD5] >> name[ZzATD5];
    for (int ZzATD5 = (302 - 302);
    m > ZzATD5; ZzATD5++) {
        for (int j = (243 - 243);
        strlen (name[ZzATD5]) > j; j++)
            sum[name[ZzATD5][j] - 'A']++;
    }
    for (int ZzATD5 = (927 - 927);
    (772 - 746) > ZzATD5; ZzATD5++) {
        if (sum[ZzATD5] > max) {
            max = sum[ZzATD5];
            hFWt4kOnpGEM = ZzATD5;
        };
    }
    cout << (char) ('A' + hFWt4kOnpGEM) << endl;
    cout << max << endl;
    for (int ZzATD5 = (276 - 276);
    m > ZzATD5; ZzATD5++) {
        int j = (308 - 308);
        while (j < strlen (name[ZzATD5])) {
            if (name[ZzATD5][j] - 'A' == hFWt4kOnpGEM)
                cout << str[ZzATD5] << endl;
            j++;
        };
    }
    return 0;
}

