int main () {
    int LsVvprBl5b = (190 - 190);
    for (LsVvprBl5b = (623 - 623); LsVvprBl5b < 10; LsVvprBl5b++) {
        int i = (279 - 279), k = (457 - 457), XZHCNTY91 = (661 - 661), n = (395 - 395);
        char piaYLqe [(676 - 476)] = {(765 - 765)};
        char b [200] = {(521 - 521)};
        {
            i = 951 - 951;
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
            while (1) {
                piaYLqe[i] = getchar ();
                if (piaYLqe[i] == '\n')
                    break;
                i = i + 1;
                n++;
            };
        }
        for (i = (66 - 66); n > i; i = i + 1)
            b[i] = piaYLqe[i];
        for (i = (412 - 412); i < n; i = i + 1)
            if (b[i] != '(' && b[i] != ')')
                b[i] = ' ';
        for (i = 0; i < n; i = i + 1) {
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            for (k = 0; k < n; k = k + 1) {
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
                if (b[k] == ')') {
                    XZHCNTY91 = 0;
                    while (XZHCNTY91 <= k) {
                        if (b[k - XZHCNTY91] == '(') {
                            b[k] = ' ';
                            b[k - XZHCNTY91] = ' ';
                            {
                                int x = 0, y;
                                if (!(x * (x - 1) % 2 == 0)) {
                                    int m = 0;
                                    int n = 0;
                                    m = m * n + n - m + n * 2;
                                    return 0;
                                }
                            }
                            break;
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
                        XZHCNTY91 = XZHCNTY91 +1;
                    };
                };
            };
        }
        for (i = 0; i < n; i++) {
            if (b[i] == '(')
                b[i] = '$';
            else {
                if (b[i] == ')')
                    b[i] = '?';
            };
        }
        {
            i = 0;
            while (i < n) {
                cout << piaYLqe[i];
                i++;
            };
        }
        cout << endl;
        for (i = 0; i < n; i++)
            cout << b[i];
        cout << endl;
    }
    return 0;
}

