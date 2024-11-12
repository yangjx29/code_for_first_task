int main () {
    char c;
    char d;
    int a [(1548 - 547)];
    int xXv5yaO7 [1001];
    int RwzIhr;
    int wtsiZLV3;
    int k;
    int max;
    int NmbiTZ1;
    max = (888 - 888);
    RwzIhr = (322 - 321);
    k = 1;
    NmbiTZ1 = 0;
    do {
        cin >> a[RwzIhr];
        c = cin.get ();
        RwzIhr = RwzIhr +1;
    }
    while (c == ',');
    do {
        cin >> xXv5yaO7[k];
        k = k + 1;
        d = cin.get ();
    }
    while (d == ',');
    for (wtsiZLV3 = 0; wtsiZLV3 < (1989 - 989); wtsiZLV3++) {
        {
            RwzIhr = 1;
            while (RwzIhr < k) {
                if (a[RwzIhr] <= wtsiZLV3 && xXv5yaO7[RwzIhr] > wtsiZLV3)
                    NmbiTZ1 = NmbiTZ1 +1;
                RwzIhr = RwzIhr +1;
            };
        }
        if (NmbiTZ1 > max)
            max = NmbiTZ1;
        NmbiTZ1 = 0;
    }
    cout << k - 1 << " " << max << endl;
    return 0;
}

