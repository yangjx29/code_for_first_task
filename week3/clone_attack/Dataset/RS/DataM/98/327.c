int main () {
    int csum;
    int j;
    int i;
    int n;
    csum = (410 - 410);
    j = 0;
    i = 0;
    char words [1000] [20];
    cin >> n;
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < n) {
            scanf ("%s", words[i]);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < n) {
            csum = csum + strlen (words[i]) + (110 - 109);
            if (csum == 81) {
                cout << words[j];
                for (j = j + (234 - 233); j <= i; j = j + 1)
                    cout << ' ' << words[j];
                csum = 0;
                cout << endl;
                continue;
            }
            if (csum > 81) {
                cout << words[j];
                for (j = j + (361 - 360); j < i; j = j + 1)
                    cout << ' ' << words[j];
                cout << endl;
                csum = strlen (words[i]) + 1;
                continue;
            }
            i = i + 1;
        };
    }
    cout << words[j];
    for (j = j + 1; j < n; j = j + 1)
        cout << ' ' << words[j];
    return 0;
}

