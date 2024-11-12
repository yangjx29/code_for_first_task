int main () {
    int k, vU7sQvDZ9KL, n;
    int *p = NULL;
    int a [(668 - 568)] [(815 - 715)];
    cin >> k;
    {
        int i = (278 - 277);
        while (i <= k) {
            int sum = (852 - 852);
            i++;
            cin >> vU7sQvDZ9KL >> n;
            {
                int j = (933 - 933);
                while (vU7sQvDZ9KL - (450 - 449) >= j) {
                    {
                        int t = (963 - 963);
                        while (t <= n - (624 - 623)) {
                            cin >> a[j][t];
                            t++;
                        };
                    }
                    j = j + 1;
                };
            }
            p = &a[(388 - 388)][(35 - 35)];
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
            for (p = &a[(677 - 677)][(251 - 251)]; p <= &a[0][n - (778 - 777)]; p++) {
                sum = sum + *p;
            }
            for (p = &a[(217 - 216)][0]; p <= &a[vU7sQvDZ9KL - 2][0]; p = p + 100) {
                sum = sum + *p + *(p + n - 1);
            }
            for (p = &a[vU7sQvDZ9KL - 1][0]; p <= &a[vU7sQvDZ9KL - 1][n - 1]; p++) {
                sum = sum + *p;
            }
            cout << sum << endl;
        };
    }
    return 0;
}

