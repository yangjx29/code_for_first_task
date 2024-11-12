int main () {
    char ch = ',';
    int x [(2155 - 155)], y [2000], i = (614 - 613), j, sum = 0, njLQqnPGs [2000], k = 0;
    while (!(',' != ch)) {
        sum++;
        cin >> x[i];
        i++;
        ch = cin.get ();
    }
    for (i = 1; sum - 1 >= i; i++)
        cin >> y[i] >> ch;
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
    for (i = 1; 2000 >= i; i++)
        njLQqnPGs[i] = 0;
    cin >> y[sum];
    for (i = 1; sum >= i; i++)
        for (j = x[i]; y[i] > j; j++)
            njLQqnPGs[j]++;
    for (i = 1; i <= 2000; i++) {
        for (j = 1; j <= 2000; j++) {
            if (njLQqnPGs[i] < njLQqnPGs[j])
                break;
            k++;
        }
        if (k == 2000) {
            cout << sum << " " << njLQqnPGs[i] << endl;
            return 0;
        }
        k = 0;
    };
}

