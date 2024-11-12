int main () {
    double  QPnpCbx [1001], tUI6tFb, sum = 0;
    int i, TaXo6kjd;
    int eb27caX5, IARewspuj;
    cin >> eb27caX5;
    for (; eb27caX5 = eb27caX5 - 1;) {
        sum = 0;
        cin >> IARewspuj;
        {
            i = 0;
            while (i < IARewspuj) {
                cin >> QPnpCbx[i];
                sum = sum + QPnpCbx[i];
                i = i + 1;
            };
        }
        tUI6tFb = sum / IARewspuj;
        sum = 0;
        {
            i = 0;
            while (i < IARewspuj) {
                sum = sum + (QPnpCbx[i] - tUI6tFb) * (QPnpCbx[i] - tUI6tFb);
                i++;
            };
        }
        sum = sum / (IARewspuj);
        sum = sqrt (sum);
        cout << fixed << setprecision (5) << sum << endl;
    }
    return 0;
}

