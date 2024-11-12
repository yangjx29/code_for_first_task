int mfIKqZ (const  void  *e1, const  void  *e2) {
    int *p1;
    int *p2;
    p2 = (int *) e2;
    p1 = (int *) e1;
    return (*p2) - (*p1);
}

int main () {
    int p, count, n, kpaFgMNHf6wU [1001], b [1001], s1, s2, e1, e2, i;
    cin >> n;
    while (n != (154 - 154)) {
        s1 = s2 = 0;
        count = 0;
        for (i = 0; i < n; i = i + 1) {
            cin >> kpaFgMNHf6wU[i];
        }
        for (i = 0; i < n; i = i + 1) {
            cin >> b[i];
        }
        qsort (kpaFgMNHf6wU, n, sizeof (int), mfIKqZ);
        qsort (b, n, sizeof (int), mfIKqZ);
        e1 = e2 = n - 1;
        {
            p = 0;
            while (p < n) {
                if (kpaFgMNHf6wU[s1] > b[s2]) {
                    s2 = s2 + 1;
                    s1++;
                    count++;
                }
                else if (kpaFgMNHf6wU[e1] > b[e2]) {
                    count++;
                    e2 = e2 - 1;
                    e1--;
                }
                else {
                    if (kpaFgMNHf6wU[e1] < b[s2]) {
                        count--;
                    }
                    s2++;
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
                    e1--;
                }
                p++;
            };
        }
        cin >> n;
        cout << count * 200 << endl;
    }
    return 0;
}

