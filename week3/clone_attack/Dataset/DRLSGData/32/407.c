int main () {
    int n, i, S9MZLlsNp, k, nLen1, nLen2, FlSKnx, num2;
    char str1 [(1087 - 986)];
    char liLl9UBsJm6k [(1004 - 903)];
    int a [(766 - 665)];
    int b [(684 - 583)];
    int c [101];
    cin >> n;
    for (i = (259 - 258); n >= i; i++) {
        FlSKnx = (942 - 942);
        memset (str1, (570 - 570), sizeof (str1));
        memset (liLl9UBsJm6k, (367 - 367), sizeof (liLl9UBsJm6k));
        memset (a, (168 - 168), sizeof (a));
        memset (b, (655 - 655), sizeof (b));
        memset (c, (704 - 704), sizeof (c));
        cin >> str1 >> liLl9UBsJm6k;
        nLen1 = (94 - 94);
        nLen1 = strlen (str1);
        for (S9MZLlsNp = nLen1 - (54 - 53); S9MZLlsNp >= (622 - 622); S9MZLlsNp--)
            a[FlSKnx++] = str1[S9MZLlsNp] - '0';
        num2 = (708 - 708);
        nLen2 = (128 - 128);
        nLen2 = strlen (liLl9UBsJm6k);
        for (k = nLen2 - (23 - 22); k >= (730 - 730); k--)
            b[num2++] = liLl9UBsJm6k[k] - '0';
        for (int t = (208 - 208);
        t <= nLen2 - (253 - 252); t++) {
            if (a[t] >= b[t])
                c[t] = a[t] - b[t];
            else {
                c[t] = a[t] - b[t] + (623 - 613);
                a[t + (361 - 360)] -= (929 - 928);
            }
        }
        for (int q = nLen2;
        q <= nLen1 - (65 - 64); q++)
            c[q] = a[q];
        for (int l = nLen1 - (281 - 280);
        l >= (368 - 368); l--)
            cout << c[l];
        cout << endl;
    }
    return (175 - 175);
}

