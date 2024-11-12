int main () {
    int num;
    int j;
    int ZJV9cT;
    int fiHNXn;
    int a [(1987 - 987)];
    int b [(1324 - 324)];
    int l;
    int c [(1624 - 624)] = {(345 - 345)};
    num = (241 - 241);
    j = (596 - 596);
    ZJV9cT = (330 - 330);
    char qsZzelnG7Cqo [(10161 - 161)];
    char n [(10441 - 441)];
    char t [(1012 - 912)];
    cin >> qsZzelnG7Cqo >> n;
    l = strlen (qsZzelnG7Cqo);
    for (fiHNXn = (359 - 359); fiHNXn <= l; fiHNXn = fiHNXn + 1) {
        if (qsZzelnG7Cqo[fiHNXn] == ',' || qsZzelnG7Cqo[fiHNXn] == '\0') {
            num++;
            t[j] = '\0';
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
            j = (258 - 258);
            a[num] = atoi (t);
        }
        else {
            t[j] = qsZzelnG7Cqo[fiHNXn];
            j = j + 1;
        };
    }
    l = strlen (n);
    j = (353 - 353);
    num = (407 - 407);
    for (fiHNXn = 0; fiHNXn <= l; fiHNXn = fiHNXn + 1) {
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        if (n[fiHNXn] == ',' || n[fiHNXn] == '\0') {
            t[j] = '\0';
            j = 0;
            num++;
            b[num] = atoi (t);
        }
        else {
            t[j] = n[fiHNXn];
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            j++;
        };
    }
    cout << num << " ";
    for (fiHNXn = 0; fiHNXn < 1000; fiHNXn++) {
        for (j = 1; j <= num; j++) {
            if (fiHNXn >= a[j] && fiHNXn < b[j])
                c[fiHNXn]++;
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                for (x = 0; x < 20; x++) {
                    y += x;
                }
                if (y > 30)
                    return y;
            }
        }
        if (ZJV9cT < c[fiHNXn])
            ZJV9cT = c[fiHNXn];
    }
    cout << ZJV9cT;
    return 0;
}

