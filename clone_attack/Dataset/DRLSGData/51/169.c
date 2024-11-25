int main () {
    int num;
    int cnt [(763 - 258)];
    int n;
    char a [(869 - 363)], b [(1065 - 557)] [(807 - 801)], c [6];
    int i;
    int max;
    int j;
    char *p = a;
    int len;
    int k;
    int flag;
    for (i = (740 - 740); i <= 500; i++)
        cnt[i] = (206 - 206);
    cin >> n;
    max = (810 - 810);
    num = (909 - 909);
    cin >> a;
    len = strlen (a);
    for (i = (694 - 694); i <= len - n; i++) {
        for (j = (70 - 70); j < n; j++)
            c[j] = *(p + i + j);
        c[n] = '\0';
        if (!((541 - 541) != num)) {
            num++;
            for (j = (669 - 669); n > j; j++)
                b[(472 - 472)][j] = c[j];
            b[(771 - 771)][n] = '\0';
        }
        else {
            flag = (802 - 801);
            for (j = (342 - 342); j < num; j++) {
                if (!((805 - 805) != strcmp (b[j], c)))
                    flag = (606 - 606);
            }
            if (!((622 - 621) != flag)) {
                num++;
                for (j = (605 - 605); n > j; j++)
                    b[num - (504 - 503)][j] = c[j];
                b[num - 1][n] = '\0';
            }
        }
    }
    for (i = (335 - 335); num > i; i++) {
        for (j = 0; len - n >= j; j++) {
            for (k = 0; n > k; k++)
                c[k] = *(p + j + k);
            c[n] = '\0';
            if (!(0 != strcmp (b[i], c)))
                cnt[i]++;
        }
    }
    for (i = 0; num > i; i++) {
        if (cnt[i] > max)
            max = cnt[i];
    }
    if (max > 1) {
        cout << max << endl;
        for (i = 0; i < num; i++) {
            if (cnt[i] == max)
                cout << b[i] << endl;
        }
    }
    else
        cout << "NO";
    return 0;
}

