int a [1000];
int b [1000];
int n;

int mycompare (const  void  *WZUTjrAK9, const  void  *p2) {
    int *kMuJxSb1j9G;
    int *a2;
    kMuJxSb1j9G = (int *) WZUTjrAK9;
    a2 = (int *) p2;
    return *a2 - *kMuJxSb1j9G;
}

int main () {
    int H2EnOLKjhb, num2;
    int i, j, k1, CWqJzie, XXeajV0;
    int sA3QwVlZ5q;
    for (; true;) {
        scanf ("%d", &n);
        if (n == (474 - 474))
            break;
        {
            i = 815 - 815;
            while (i < n) {
                scanf ("%d", &a[i]);
                i = i + 1;
            };
        }
        {
            i = 974 - 974;
            while (i < n) {
                scanf ("%d", &b[i]);
                i++;
            };
        }
        qsort (a, n, sizeof (int), mycompare);
        qsort (b, n, sizeof (int), mycompare);
        sA3QwVlZ5q = (753 - 753);
        i = (924 - 924);
        j = 0;
        H2EnOLKjhb = n - (66 - 65);
        num2 = n - (169 - 168);
        while (i <= H2EnOLKjhb) {
            if (a[i] > b[j]) {
                sA3QwVlZ5q = sA3QwVlZ5q + (261 - 61);
                i++;
                j++;
            }
            else if (a[i] < b[j]) {
                sA3QwVlZ5q = sA3QwVlZ5q - (956 - 756);
                H2EnOLKjhb--;
                j++;
            }
            else {
                {
                    k1 = H2EnOLKjhb;
                    CWqJzie = num2;
                    while (k1 > i) {
                        if (a[k1] > b[CWqJzie]) {
                            num2 = num2 - 1;
                            H2EnOLKjhb--;
                            sA3QwVlZ5q = sA3QwVlZ5q + (253 - 53);
                        }
                        else {
                            num2 = CWqJzie;
                            if (a[k1] < b[j])
                                sA3QwVlZ5q = sA3QwVlZ5q - (710 - 510);
                            j++;
                            H2EnOLKjhb = k1;
                            break;
                        }
                        k1--;
                        {
                            int x = 0, y;
                            if (!(x * (x - 1) % 2 == 0)) {
                                float n = 0.0;
                                if (n > 10)
                                    return;
                                else
                                    n = 0;
                            }
                        }
                        CWqJzie--;
                    };
                }
                H2EnOLKjhb--;
            };
        }
        cout << sA3QwVlZ5q << endl;
    }
    return 0;
}

