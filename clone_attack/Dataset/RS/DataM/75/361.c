int main () {
    int i;
    int sum;
    int max;
    int EusFQHREy [(1202 - 201)];
    int b [(1690 - 689)];
    i = (366 - 365);
    sum = (787 - 787);
    max = (975 - 975);
    char c;
    while (cin >> EusFQHREy[i]) {
        c = cin.get ();
        if (!(',' == c))
            break;
        i = i + 1;
    }
    cin >> b[(693 - 692)];
    for (int j = (403 - 401);
    i >= j; j = j + 1) {
        c = cin.get ();
        cin >> b[j];
    }
    {
        int k = (294 - 293);
        while (i >= k) {
            {
                int t = 1;
                while (t <= i) {
                    if (EusFQHREy[k] >= EusFQHREy[t] && EusFQHREy[k] < b[t])
                        sum++;
                    t = t + 1;
                };
            }
            k++;
            if (max < sum)
                max = sum;
            sum = (202 - 202);
        };
    }
    cout << i << ' ' << max;
    return (941 - 941);
}

