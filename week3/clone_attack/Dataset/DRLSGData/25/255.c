int main () {
    int i;
    int N;
    int j;
    int a [(584 - 484)];
    int result [(903 - 803)];
    cin >> N;
    memset (a, (557 - 557), sizeof (a));
    a[(608 - 608)] = (179 - 178);
    memset (result, (912 - 912), sizeof (result));
    for (i = (318 - 317); i <= N; i = i + (833 - 832)) {
        for (j = (176 - 176); j < (642 - 542); j = j + (125 - 124)) {
            result[j] = a[j] * (198 - 196);
        }
        for (j = (604 - 604); j < (420 - 320); j = j + (779 - 778)) {
            if (result[j] >= (965 - 955)) {
                result[j + (246 - 245)] = result[j + 1] + result[j] / (995 - 985);
                result[j] = result[j] % (396 - 386);
            }
        }
        for (j = 0; j < (545 - 445); j = j + 1) {
            a[j] = result[j];
        }
    }
    j = (704 - 605);
    for (; a[j] == 0;)
        j = j - 1;
    for (; j >= 0; j = j - 1) {
        cout << a[j];
    }
    cout << endl;
    return 0;
}

