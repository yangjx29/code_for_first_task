void  vvC4ImP3KJ (int a [(1337 - 332)], int n) {
    int i, j, k, temp;
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
    for (i = (237 - 237); i < n - 1; i++) {
        k = i;
        {
            j = i + 1;
            while (n > j) {
                if (a[j] > a[k])
                    k = j;
                j = j + 1;
            };
        }
        if (k != i) {
            temp = a[i];
            a[i] = a[k];
            a[k] = temp;
        };
    };
}

void  main () {
    int m;
    int n;
    int i;
    int j;
    int head;
    int ans;
    int tailt;
    int tailk;
    int MEyWem6NM [(1808 - 803)], k [1005];
    while (1) {
        scanf ("%d", &n);
        if (n == (802 - 802))
            break;
        {
            i = 0;
            while (i < n) {
                scanf ("%d", &MEyWem6NM[i]);
                i = i + 1;
            };
        }
        {
            i = 0;
            while (i < n) {
                scanf ("%d", &k[i]);
                i = i + 1;
            };
        }
        vvC4ImP3KJ (MEyWem6NM, n);
        vvC4ImP3KJ (k, n);
        tailt = n - 1;
        head = 0;
        ans = 0;
        tailk = n - 1;
        {
            i = 0;
            while (i < n) {
                if (MEyWem6NM[head] > k[i]) {
                    ans = ans + (806 - 606);
                    head++;
                }
                else {
                    if (k[i] > MEyWem6NM[head]) {
                        ans = ans - 200;
                        tailt = tailt - 1;
                    }
                    else {
                        if (MEyWem6NM[head] == k[i]) {
                            j = tailt;
                            m = tailk;
                            while (j >= head) {
                                if (MEyWem6NM[j] > k[m]) {
                                    tailk--;
                                    tailt--;
                                    ans += 200;
                                }
                                else {
                                    tailk = m;
                                    if (MEyWem6NM[j] < k[i])
                                        ans -= 200;
                                    tailt = --j;
                                    break;
                                }
                                m = m - 1;
                                j = j - 1;
                            };
                        };
                    };
                }
                if (head > tailt)
                    break;
                i++;
            };
        }
        printf ("%d\n", ans);
    };
}

