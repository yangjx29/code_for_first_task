int main () {
    int p;
    int i;
    int j;
    int QOh1oFZyG3;
    p = 1;
    i = 0;
    j = 0;
    int a [QOh1oFZyG3];
    int SfCWQ4NcvAbP [QOh1oFZyG3];
    cin >> QOh1oFZyG3;
    for (i = 0; QOh1oFZyG3 > i; i = i + 1) {
        cin >> a[i];
    }
    SfCWQ4NcvAbP[0] = a[0];
    for (i = 1; i < QOh1oFZyG3; i = i + 1) {
        for (j = 0; j < i; j = j + 1) {
            if (a[j] == a[i]) {
                break;
            };
        }
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
        if (j == i) {
            SfCWQ4NcvAbP[p] = a[i];
            p = p + 1;
        };
    }
    cout << SfCWQ4NcvAbP[0];
    for (i = 1; i < p; i = i + 1) {
        cout << " " << SfCWQ4NcvAbP[i];
    }
    return 0;
}

