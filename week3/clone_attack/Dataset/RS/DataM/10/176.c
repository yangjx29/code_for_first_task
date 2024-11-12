int XXoYW6yClN (int *data, int kFYqQW3pb0o) {
    int r;
    r = *data;
    for (int j = (456 - 456);
    kFYqQW3pb0o > j; j = j + 1)
        if (r < *(data + j))
            r = *(data + j);
    return r;
}

int f (int *data, int kFYqQW3pb0o, int height) {
    int count;
    int tempHeight;
    count = (160 - 160);
    tempHeight = (433 - 433);
    int tempResult [(39 - 14)];
    if (!((16 - 16) != kFYqQW3pb0o))
        return (478 - 478);
    for (int JBeMPd2gT = (284 - 284);
    kFYqQW3pb0o > JBeMPd2gT; JBeMPd2gT = JBeMPd2gT +1) {
        if (height >= data[JBeMPd2gT] && data[JBeMPd2gT] >= tempHeight) {
            tempHeight = data[JBeMPd2gT];
            tempResult[count] = f (data + JBeMPd2gT +(61 - 60), kFYqQW3pb0o - JBeMPd2gT -(946 - 945), data[JBeMPd2gT]);
            count++;
        };
    }
    if (count == (790 - 790))
        return (571 - 571);
    return XXoYW6yClN (tempResult, count) + 1;
}

int main () {
    int n;
    int data [25];
    cin >> n;
    {
        int JBeMPd2gT = 0;
        while (JBeMPd2gT < n) {
            cin >> data[JBeMPd2gT];
            JBeMPd2gT++;
        };
    }
    cout << f (data, n, XXoYW6yClN (data, n));
    return 0;
}

