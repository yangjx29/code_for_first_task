int mycompare (const  void  *, const  void  *);

int main () {
    int a [1008];
    int n, k;
    int i, j;
    int tag;
    tag = 0;
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
    cin >> n >> k;
    {
        i = 0;
        while (i < n) {
            cin >> a[i];
            i = i + 1;
        };
    }
    qsort (a, n, 4, mycompare);
    {
        i = 0;
        while (n / 2 > i) {
            int count = n - (708 - 707);
            while (count > i) {
                if (!(k != a[i] + a[count])) {
                    tag = 1;
                    break;
                }
                else {
                    if (k > a[i] + a[count])
                        break;
                    else
                        count--;
                };
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            if (tag == 1)
                break;
            i++;
        };
    }
    if (tag == 1)
        cout << "yes" << endl;
    else
        cout << "no" << endl;
}

int mycompare (const  void  *elem1, const  void  *elem2) {
    return *(int*) elem1 - *(int*) elem2;
}

