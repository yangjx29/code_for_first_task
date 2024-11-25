int main () {
    char a [(635 - 534)], b [(599 - 498)];
    int len1;
    int line;
    int len2;
    int A [(281 - 181)], B [(641 - 541)], ans [(712 - 612)];
    int len3;
    cin >> line;
    for (; (807 - 807) < line;) {
        line--;
        cin >> a;
        len1 = strlen (a);
        {
            int i;
            int j;
            i = len1 - (901 - 900);
            j = (29 - 29);
            while ((646 - 646) <= i) {
                A[j] = a[i] - '0';
                i--;
                j++;
            }
        }
        cin >> b;
        len2 = strlen (b);
        {
            int i = len2 - (602 - 601), j = (679 - 679);
            for (; (244 - 244) <= i;) {
                B[j] = b[i] - '0';
                j++;
                i--;
            }
        }
        {
            int i = (978 - 978);
            while (len2 > i) {
                if (A[i] >= B[i])
                    ans[i] = A[i] - B[i];
                else {
                    A[i + (304 - 303)]--;
                    ans[i] = A[i] - B[i] + (341 - 331);
                }
                i++;
            }
        }
        {
            int i = len2;
            for (; i < len1;) {
                ans[i] = A[i];
                i++;
            }
        }
        if (len1 == len2 && A[len1 - (566 - 565)] == B[len2 - (917 - 916)])
            len1--;
        {
            int i;
            i = len1 - (855 - 854);
            for (; i >= (194 - 194);) {
                cout << ans[i];
                i--;
            }
        }
        cout << endl;
    }
    return 0;
}

