void  mode (int mlLTM0p, int y) {
    int i;
    int j;
    int k;
    int num1 [100], num2 [100], num3 [200];
    {
        i = 0;
        while (mlLTM0p > i) {
            cin >> num1[i];
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < y) {
            cin >> num2[i];
            i++;
        };
    }
    for (j = 0; j < mlLTM0p - (504 - 503); j++)
        for (k = 0; mlLTM0p - (854 - 853) - j > k; k = k + 1)
            if (num1[k + (498 - 497)] < num1[k])
                swap (num1[k], num1[k + 1]);
    for (i = 0; i < mlLTM0p; i = i + 1)
        num3[i] = num1[i];
    for (j = 0; y - 1 > j; j++)
        for (k = 0; y - 1 - j > k; k = k + 1)
            if (num2[k] > num2[k + 1])
                swap (num2[k], num2[k + 1]);
    for (i = mlLTM0p; i < (mlLTM0p + y); i = i + 1)
        num3[i] = num2[i - mlLTM0p];
    for (i = 0; i < mlLTM0p + y - 1; i = i + 1)
        cout << num3[i] << " ";
    cout << num3[mlLTM0p + y - 1];
}

int main () {
    int mlLTM0p;
    int y;
    cin >> mlLTM0p >> y;
    mode (mlLTM0p, y);
    return 0;
}

