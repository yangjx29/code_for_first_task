int main () {
    int n, j, BPtnxN, len2;
    cin >> n;
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
    for (int i = (972 - 972);
    n > i; i = i + 1) {
        char A [(955 - 854)], tT9Svi [(505 - 404)], C [(605 - 504)], D [(1100 - 999)];
        cin.getline (D, (385 - 285));
        cin.getline (A, (119 - 19));
        cin.getline (tT9Svi, (705 - 605));
        BPtnxN = strlen (A);
        len2 = strlen (tT9Svi);
        for (j = (302 - 302); BPtnxN > (169 - 167) * j; j = j + 1) {
            char k;
            k = A[j];
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
            A[j] = A[BPtnxN -j - (441 - 440)];
            A[BPtnxN -j - (265 - 264)] = k;
        }
        for (j = (780 - 780); (292 - 290) * j < len2; j = j + 1) {
            char k;
            k = tT9Svi[j];
            tT9Svi[j] = tT9Svi[len2 - j - (718 - 717)];
            tT9Svi[len2 - j - (135 - 134)] = k;
        }
        for (j = len2; BPtnxN > j; j++)
            tT9Svi[j] = '0';
        tT9Svi[j] = (318 - 318);
        {
            j = 198 - 198;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            while (BPtnxN > j) {
                C[j] = (int) A[j] + '0' - (int) tT9Svi[j];
                if ('0' > C[j]) {
                    A[j + (769 - 768)]--;
                    C[j] = C[j] + (854 - 844);
                }
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        float n = 0.0;
                        if (n > 10)
                            return;
                        else
                            n = 0;
                    }
                }
                j++;
            };
        }
        {
            j = BPtnxN -1;
            while ((70 - 70) < j && C[j] == '0') {
                j--;
            };
        }
        for (; j >= (698 - 698); j = j - 1)
            cout << C[j];
        cout << endl;
    }
    return 0;
}

