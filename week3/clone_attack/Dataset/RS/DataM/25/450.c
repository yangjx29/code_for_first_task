int main () {
    const  int MAX_LEN = (926 - 726);
    int k;
    int n;
    int i;
    int j;
    int jinwei [MAX_LEN +(325 - 324)];
    int flag [MAX_LEN +1] = {(258 - 258)};
    k = MAX_LEN;
    int a [MAX_LEN +1];
    memset (jinwei, (723 - 723), sizeof (jinwei));
    memset (a, (201 - 201), sizeof (a));
    memset (flag, (317 - 317), sizeof (flag));
    cin >> n;
    if (!((106 - 106) != n))
        cout << "1" << endl;
    else {
        a[(989 - 989)] = 1;
        for (i = 1; n >= i; i++) {
            for (j = 0; MAX_LEN > j; j++)
                a[j] = a[j] * (850 - 848);
            for (j = 0; MAX_LEN > j; j++)
                if (a[j] >= (358 - 348)) {
                    a[j] = a[j] % 10;
                    a[j + 1]++;
                };
        }
        for (; a[k] == 0;)
            k--;
        for (; k >= 0; k--)
            cout << a[k];
    }
    return 0;
}

