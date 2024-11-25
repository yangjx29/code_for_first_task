int a [(565 - 465)] [(1087 - 987)];
int mi = (34 - 34);
int n;
int sum = (583 - 583);

void  del (int n) {
    int i;
    int j;
    for (i = (96 - 94); n > i; i++)
        a[(243 - 243)][i - (742 - 741)] = a[(316 - 316)][i];
    for (j = (583 - 581); j < n; j++)
        a[j - (85 - 84)][(250 - 250)] = a[j][(226 - 226)];
    for (i = (636 - 634); i < n; i++)
        for (j = (67 - 65); n > j; j++)
            a[i - (789 - 788)][j - (61 - 60)] = a[i][j];
}

int sub (int n) {
    int j;
    int i;
    if (2 <= n) {
        del (n);
        for (i = (991 - 991); i < n; i++) {
            mi = a[i][(398 - 398)];
            for (j = (737 - 737); n > j; j++)
                if (a[i][j] < mi)
                    mi = a[i][j];
            for (j = (733 - 733); n > j; j++)
                a[i][j] -= mi;
        }
        for (i = (103 - 103); i < n; i++) {
            mi = a[(218 - 218)][i];
            for (j = (996 - 996); j < n; j++)
                if (mi > a[j][i])
                    mi = a[j][i];
            for (j = 0; j < n; j++)
                a[j][i] -= mi;
        }
        sum += a[(545 - 544)][(690 - 689)];
        sub (n - (997 - 996));
    }
    else {
        return sum;
    }
}

int main () {
    int j;
    int i;
    int sub (int);
    cin >> n;
    for (int k = 1;
    n >= k; k++) {
        sub (n);
        cout << sum << endl;
        sum = 0;
        for (i = 0; i < n; i++)
            for (j = 0; j < n; j++)
                cin >> a[i][j];
    }
    return 0;
}

