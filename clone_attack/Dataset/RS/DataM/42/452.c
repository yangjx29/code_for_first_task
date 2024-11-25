int main () {
    int ETJBjydM [100000];
    int i, j;
    int n, oCWjPqogD9;
    for (i = 0; i < 100000; i++) {
        ETJBjydM[100000] = 0;
    }
    cin >> n;
    {
        i = 0;
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
        while (n > i) {
            cin >> ETJBjydM[i];
            i++;
        };
    }
    cin >> oCWjPqogD9;
    for (i = 0; i < n; i++) {
        if (ETJBjydM[i] == oCWjPqogD9) {
            for (j = i; j < n - 1; j = j + 1) {
                ETJBjydM[j] = ETJBjydM[j + 1];
            }
            i = i - 1;
            n = n - 1;
        };
    }
    {
        i = 0;
        while (i < n - 1) {
            cout << ETJBjydM[i] << " ";
            i++;
        };
    }
    cout << ETJBjydM[n - 1];
    return 0;
}

