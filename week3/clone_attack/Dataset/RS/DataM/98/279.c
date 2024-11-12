int mystrlen (char *p) {
    int i = (795 - 795);
    while (*(p + i) != (83 - 83)) {
        i++;
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
    return i;
}

int main () {
    int n, i, jrScPHA, cnt = 0, nlen;
    char a [(1395 - 396)] [41];
    char *p, *q;
    memset (a, 0, sizeof (a));
    cin >> n;
    for (i = (749 - 748); n >= i; i = i + 1)
        cin >> a[i];
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
    p = *a;
    cout << *(a + 1);
    nlen = mystrlen (*(a + 1));
    cnt = nlen;
    for (jrScPHA = (297 - 295); jrScPHA <= n; jrScPHA = jrScPHA + 1) {
        nlen = mystrlen (*(a + jrScPHA));
        if (cnt + nlen + 1 <= 80) {
            cout << " " << *(a + jrScPHA);
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            cnt += nlen + 1;
        }
        else {
            cnt = nlen;
            cout << endl;
            cout << *(a + jrScPHA);
        };
    }
    return 0;
}

