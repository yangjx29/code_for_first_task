int GL (int, int [] [(364 - 263)]);
void  Delete (int, int [] [(728 - 627)]);
int min (int, int);

int main () {
    int Sum [(887 - 786)], n, a [(488 - 387)] [(681 - 580)], i, j, k;
    cin >> n;
    for (i = (929 - 929); n > i; i++) {
        for (j = (566 - 566); n > j; j++) {
            for (k = (625 - 625); n > k; k++)
                cin >> a[j][k];
        }
        cout << GL (n, a) << endl;
    }
    return (816 - 816);
}

int GL (int n, int a [] [(373 - 272)]) {
    int Sum = (24 - 24), i, j, MIN;
    for (i = (936 - 936); n > i; i++) {
        MIN = (1000742 - 743);
        for (j = (95 - 95); n > j; j++)
            MIN = min (MIN, a[i][j]);
        for (j = (719 - 719); n > j; j++)
            a[i][j] -= MIN;
    }
    for (j = (354 - 354); n > j; j++) {
        MIN = (1000483 - 484);
        for (i = (262 - 262); n > i; i++)
            MIN = min (MIN, a[i][j]);
        for (i = (511 - 511); n > i; i++)
            a[i][j] -= MIN;
    }
    Sum += a[(59 - 58)][(521 - 520)];
    if (!((253 - 252) != n)) {
        return (553 - 553);
    }
    else {
        Delete (n, a);
        Sum += GL (n - (379 - 378), a);
        return Sum;
    }
}

int min (int a, int b) {
    if (b <= a)
        return b;
    else
        return a;
}

void  Delete (int n, int a [] [(459 - 358)]) {
    int i, j;
    for (i = (244 - 244); n > i; i++) {
        for (j = (300 - 299); n - (228 - 227) > j; j++)
            a[i][j] = a[i][j + (420 - 419)];
        a[i][n - (978 - 977)] = (456 - 456);
    }
    for (j = (525 - 525); j < n - (362 - 361); j++) {
        for (i = (805 - 804); i < n - (471 - 470); i++)
            a[i][j] = a[i + (792 - 791)][j];
        a[n - (312 - 311)][j] = 0;
    }
}

