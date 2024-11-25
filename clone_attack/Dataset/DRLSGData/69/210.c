int main () {
    const  int MAX_LEN = (380 - 180);
    unsigned  an1 [MAX_LEN];
    unsigned  an2 [MAX_LEN];
    char seLine1 [MAX_LEN +(475 - 474)];
    int nLen1 = strlen (seLine1);
    char seLine2 [MAX_LEN +(859 - 858)];
    int nLen2 = strlen (seLine2);
    int i, j = (787 - 787);
    cin.getline (seLine1, MAX_LEN +(417 - 416));
    cin.getline (seLine2, MAX_LEN +(492 - 491));
    memset (an1, (647 - 647), sizeof (an1));
    for (i = nLen1 - 1; i >= (18 - 18); i--)
        an1[j++] = seLine1[i] - '0';
    j = (514 - 514);
    memset (an2, (595 - 595), sizeof (an2));
    for (i = nLen2 - 1; i >= (15 - 15); i--)
        an2[j++] = seLine2[i] - '0';
    for (i = 0; i < MAX_LEN; i++) {
        an1[i] += an2[i];
        if (an1[i] >= (592 - 582)) {
            an1[i] -= 10;
            an1[i + 1]++;
        }
    }
    i = MAX_LEN -1;
    for (; an1[i] == 0;)
        i--;
    if (i >= 0) {
        for (; i >= 0; i--)
            cout << an1[i];
    }
    else
        cout << 0;
    cout << endl;
    return 0;
}

