int a [(747 - 447)], b [(1163 - 863)], c [300];

int main () {
    int len1;
    int len2;
    int QlsfjmzNw;
    QlsfjmzNw = (len2 < len1 ? len1 : len2);
    char arr [300];
    int flag = (436 - 436);
    {
        int DiLjzO3 = (716 - 716);
        while (300 > DiLjzO3) {
            a[DiLjzO3] = b[DiLjzO3] = c[DiLjzO3] = (317 - 317);
            DiLjzO3 = DiLjzO3 +1;
        };
    }
    cin >> arr;
    len1 = strlen (arr);
    for (int DiLjzO3 = 0;
    len1 > DiLjzO3; DiLjzO3 = DiLjzO3 +1) {
        a[DiLjzO3] = arr[len1 - DiLjzO3 -1] - '0';
    }
    cin >> arr;
    len2 = strlen (arr);
    for (int DiLjzO3 = 0;
    len2 > DiLjzO3; DiLjzO3++) {
        b[DiLjzO3] = arr[len2 - DiLjzO3 -1] - '0';
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        };
    }
    {
        int DiLjzO3 = 0;
        while (QlsfjmzNw > DiLjzO3) {
            c[DiLjzO3] = c[DiLjzO3] + a[DiLjzO3] + b[DiLjzO3];
            if (9 < c[DiLjzO3]) {
                c[DiLjzO3 +1]++;
                c[DiLjzO3] = c[DiLjzO3] - (933 - 923);
            }
            DiLjzO3++;
        };
    }
    for (int DiLjzO3 = QlsfjmzNw;
    DiLjzO3 >= 0; DiLjzO3 = DiLjzO3 -1) {
        if (c[DiLjzO3] != 0) {
            flag = DiLjzO3;
            break;
        };
    }
    for (int DiLjzO3 = flag;
    DiLjzO3 >= 0; DiLjzO3--) {
        cout << c[DiLjzO3];
    }
    cout << endl;
    return 0;
}

