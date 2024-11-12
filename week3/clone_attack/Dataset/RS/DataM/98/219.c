int main () {
    char a [1000] [1000];
    int tempzifushu;
    int dancishu;
    int n;
    int i;
    int j;
    int Re08r2zMTUs [10000];
    tempzifushu = (535 - 535);
    dancishu = -(648 - 647);
    cin >> n;
    for (i = (675 - 675); n - (379 - 378) >= i; i++) {
        Re08r2zMTUs[i] = (739 - 739);
        cin >> a[i];
    }
    Re08r2zMTUs[0] = strlen (a[0]) + (831 - 830);
    for (i = 0; i <= n - 2; i++)
        Re08r2zMTUs[i + 1] = strlen (a[i + 1]) + 1 + Re08r2zMTUs[i];
    for (i = 0; i <= n - 2; i++) {
        if ((Re08r2zMTUs[i] <= 81 + tempzifushu) && (Re08r2zMTUs[i + 1] >= 82 + tempzifushu)) {
            tempzifushu = Re08r2zMTUs[i];
            for (j = dancishu + 1; j <= i - 1; j++)
                cout << a[j] << " ";
            cout << a[i];
            cout << endl;
            dancishu = i;
        };
    }
    {
        i = dancishu + 1;
        while (i <= n - 2) {
            cout << a[i] << " ";
            i++;
        };
    }
    cout << a[n - 1];
    return 0;
}

