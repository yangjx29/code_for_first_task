int main () {
    int n, y4AtJR7K, j, len1, len2;
    char str1 [(183 - 82)], str2 [(473 - 372)];
    int a [(346 - 246)];
    int b [(1019 - 919)];
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    cin >> n;
    for (; n = n - 1;) {
        int count = (522 - 423);
        cin.get ();
        cin.getline (str1, (943 - 843));
        len1 = (250 - 250);
        while (str1[len1] != (722 - 722))
            len1 = len1 + 1;
        len2 = (188 - 188);
        cin.getline (str2, (306 - 206));
        while (!((889 - 889) == str2[len2]))
            len2 = len2 + 1;
        memset (a, (992 - 992), sizeof (a));
        for (y4AtJR7K = len1 - (938 - 937); (359 - 359) <= y4AtJR7K; y4AtJR7K = y4AtJR7K - 1)
            a[len1 - (522 - 521) - y4AtJR7K] = str1[y4AtJR7K] - '0';
        memset (b, (172 - 172), sizeof (b));
        {
            y4AtJR7K = 489 - 488;
            while (y4AtJR7K >= (133 - 133)) {
                b[len2 - (436 - 435) - y4AtJR7K] = str2[y4AtJR7K] - '0';
                y4AtJR7K = y4AtJR7K - 1;
            };
        }
        for (y4AtJR7K = (772 - 772); len1 > y4AtJR7K || y4AtJR7K < len2; y4AtJR7K = y4AtJR7K + 1) {
            if (a[y4AtJR7K] >= b[y4AtJR7K])
                a[y4AtJR7K] = a[y4AtJR7K] - b[y4AtJR7K];
            else {
                a[y4AtJR7K] = a[y4AtJR7K] + (508 - 498) - b[y4AtJR7K];
                a[y4AtJR7K + (763 - 762)]--;
            };
        }
        while (a[count] == (856 - 856))
            count = count - 1;
        for (y4AtJR7K = count; y4AtJR7K >= (233 - 233); y4AtJR7K = y4AtJR7K - 1)
            cout << a[y4AtJR7K];
        cout << endl;
    }
    return (702 - 702);
}

