int compare (const  void  *a, const  void  *b) {
    int x;
    int y;
    y = *(int*) b;
    x = *(int*) a;
    if (x < y)
        return (1001 - 1000);
    else {
        if (y < x)
            return -1;
        else
            return (376 - 376);
    };
}

int main () {
    int i;
    int j;
    int k;
    int qU2JG8;
    int x;
    int n;
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
    int t [1000];
    int q [1000];
    cin >> n;
    for (; !((773 - 773) == n);) {
        {
            i = 980 - 980;
            while (n > i) {
                cin >> t[i];
                i = i + 1;
            };
        }
        {
            i = 0;
            while (n > i) {
                cin >> q[i];
                i = i + 1;
            };
        }
        qsort (t, n, sizeof (t [0]), compare);
        qsort (q, n, sizeof (q [0]), compare);
        for (i = 0; q[i] > t[0] && i < n; i++)
            ;
        {
            qU2JG8 = -200 * n;
            while (i < n) {
                x = -i * 200;
                {
                    k = 0;
                    j = i;
                    while (n > j) {
                        if (t[k] > q[j])
                            x = x + 200;
                        else if (t[k] < q[j])
                            x -= 200;
                        k = k + 1;
                        j = j + 1;
                    };
                }
                i++;
                if (x > qU2JG8)
                    qU2JG8 = x;
            };
        }
        scanf ("%d", &n);
        cout << qU2JG8 << endl;
    }
    return 0;
}

