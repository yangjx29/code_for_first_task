int main () {
    float Fzb6ZwP4 = 0, average, a, rbPwJZRB;
    int num [300], n, i, j, i3eCN7S, temp;
    cin >> n;
    {
        i = 0;
        while (i < n) {
            cin >> num[i];
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < n) {
            i3eCN7S = i;
            {
                j = i + 1;
                while (j < n) {
                    if (num[i3eCN7S] > num[j])
                        i3eCN7S = j;
                    j = j + 1;
                };
            }
            temp = num[i];
            num[i] = num[i3eCN7S];
            i = i + 1;
            num[i3eCN7S] = temp;
        };
    }
    {
        i = 0;
        while (i < n) {
            Fzb6ZwP4 = Fzb6ZwP4 +num[i];
            i++;
        };
    }
    average = Fzb6ZwP4 / n;
    a = average - num[0];
    rbPwJZRB = num[n - 1] - average;
    if (a > rbPwJZRB)
        cout << num[0] << endl;
    else {
        if (a == rbPwJZRB)
            cout << num[0] << "," << num[n - 1] << endl;
        else
            cout << num[n - 1] << endl;
    }
    return 0;
}

