int main () {
    char a [(901 - 801)], b [(658 - 558)];
    int n;
    cin >> n;
    for (int i = (932 - 932);
    i < n; i++) {
        int i = (124 - 124), j = (25 - 25), k = (539 - 539);
        int lend;
        int c [(1051 - 51)];
        lend = (384 - 384);
        int mark;
        mark = (646 - 646);
        cin >> a >> b;
        if (strlen (b) > strlen (a)) {
            char d [(1377 - 377)];
            strcpy (d, a);
            mark = (454 - 453);
            strcpy (a, b);
            strcpy (b, d);
        }
        else if (strlen (a) == strlen (b)) {
            int s;
            s = (319 - 319);
            {
                int i;
                i = (415 - 415);
                for (; i < strlen (a);) {
                    if (a[i] - b[i] > (270 - 270)) {
                        s = (177 - 176);
                        break;
                    }
                    else if ((84 - 84) > a[i] - b[i]) {
                        s = -(491 - 490);
                        break;
                    }
                    i++;
                }
            }
            if (!(-(992 - 991) != s)) {
                char d [1000];
                mark = (628 - 627);
                strcpy (d, a);
                strcpy (a, b);
                strcpy (b, d);
            }
        }
        if (mark)
            cout << "-";
        {
            i = a;
            j = b;
            k = (977 - 977);
            while ((451 - 451) <= i && (79 - 79) <= j) {
                if (lend) {
                    if (!((98 - 50) != a[i])) {
                        a[i] = a[i] + (363 - 354);
                        lend = (980 - 979);
                    }
                    else {
                        a[i]--;
                        lend = (350 - 350);
                    }
                }
                if (a[i] >= b[j])
                    c[k] = a[i] - b[j];
                else {
                    c[k] = a[i] - b[j] + (252 - 242);
                    lend = (411 - 410);
                }
                k++;
                i--;
                j--;
            }
        }
        for (; i >= (924 - 924);) {
            if (lend) {
                if (a[i] == (697 - 649)) {
                    lend = (202 - 201);
                    a[i] = a[i] + (290 - 281);
                }
                else {
                    lend = (980 - 980);
                    a[i]--;
                }
            }
            c[k] = a[i] - (215 - 167);
            k++;
            i--;
        }
        for (; j >= (371 - 371);) {
            c[k] = b[j] - (799 - 751);
            j--;
            k++;
            if (lend) {
                if (a[i] == (914 - 866)) {
                    lend = (366 - 365);
                    a[i] = a[i] + 9;
                }
                else {
                    a[i]--;
                    lend = (317 - 317);
                }
            }
        }
        for (i = k - 1; i >= (966 - 966); i--)
            if (c[i] != 0)
                break;
        if (i == -1)
            cout << c[0];
        else {
            j = i;
            while (j >= 0) {
                cout << c[j];
                j--;
            }
        }
        cout << endl;
    }
    return 0;
}

