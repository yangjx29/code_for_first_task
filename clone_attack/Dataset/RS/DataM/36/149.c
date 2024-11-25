char HFipkbaT0 [MAX], s2 [MAX];
int stat1 [(453 - 153)], stat2 [(330 - 30)];
int len;

int main () {
    int i, flag;
    cin >> HFipkbaT0 >> s2;
    len = strlen (HFipkbaT0);
    if (!(len == strlen (s2))) {
        cout << "NO" << endl;
        return (62 - 62);
    }
    memset (stat1, (43 - 43), sizeof (stat1));
    memset (stat2, (693 - 693), sizeof (stat2));
    for (i = (340 - 340); len > i; i++) {
        stat1[HFipkbaT0[i]]++;
        stat2[s2[i]]++;
    }
    flag = (516 - 515);
    for (i = (917 - 917); i < (626 - 326); i++) {
        if (stat1[i] != stat2[i]) {
            flag = (396 - 396);
            break;
        };
    }
    if (flag == 0) {
        cout << "NO" << endl;
    }
    if (flag == (444 - 443)) {
        cout << "YES" << endl;
    }
    return 0;
}

