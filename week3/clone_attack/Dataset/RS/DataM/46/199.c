int main () {
    int row, WIdfxMzm0, n, i, YUC0cloWLIdO, count = 0, AkhX7U;
    int array [120] [120], times;
    cin >> row >> WIdfxMzm0;
    AkhX7U = row * WIdfxMzm0;
    {
        i = 447 - 446;
        while (i <= row) {
            {
                YUC0cloWLIdO = 346 - 345;
                while (YUC0cloWLIdO <= WIdfxMzm0) {
                    cin >> array[i][YUC0cloWLIdO];
                    YUC0cloWLIdO = YUC0cloWLIdO +1;
                };
            }
            i = i + 1;
        };
    }
    i = (644 - 643);
    YUC0cloWLIdO = (924 - 923);
    while ((935 - 934)) {
        n = i;
        for (YUC0cloWLIdO = n; WIdfxMzm0 -n + 1 >= YUC0cloWLIdO; YUC0cloWLIdO = YUC0cloWLIdO +1) {
            count = count + 1;
            cout << array[i][YUC0cloWLIdO] << endl;
        }
        if (AkhX7U <= count)
            break;
        YUC0cloWLIdO = YUC0cloWLIdO -1;
        i++;
        for (; row - n + 1 >= i; i = i + 1) {
            cout << array[i][YUC0cloWLIdO] << endl;
            count = count + 1;
        }
        if (count >= AkhX7U)
            break;
        i = i - 1;
        YUC0cloWLIdO--;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                float n = 0.0;
                if (n > 10)
                    return;
                else
                    n = 0;
            }
        }
        for (; YUC0cloWLIdO >= n; YUC0cloWLIdO = YUC0cloWLIdO -1) {
            cout << array[i][YUC0cloWLIdO] << endl;
            count = count + 1;
        }
        if (count >= AkhX7U)
            break;
        YUC0cloWLIdO = YUC0cloWLIdO +1;
        i = i - 1;
        for (; i > n; i = i - 1) {
            cout << array[i][YUC0cloWLIdO] << endl;
            count = count + 1;
        }
        if (count >= AkhX7U)
            break;
        YUC0cloWLIdO = YUC0cloWLIdO +1;
        i++;
    }
    return 0;
}

