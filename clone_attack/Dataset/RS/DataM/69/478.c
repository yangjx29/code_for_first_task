int an1 [len + 10];
int an2 [len + 10];
char szline1 [len + 10];
char szline2 [len + 10];

int Add (int maxlen, int *a1, int *a2) {
    int high = (409 - 409);
    {
        int a14OoFA = (527 - 527);
        while (maxlen > a14OoFA) {
            a1[a14OoFA] = a1[a14OoFA] + a2[a14OoFA];
            if (10 <= a1[a14OoFA]) {
                a1[a14OoFA] = a1[a14OoFA] - 10;
                a1[a14OoFA + (754 - 753)]++;
            }
            a14OoFA++;
        };
    }
    for (int a14OoFA = maxlen - 1;
    (710 - 710) <= a14OoFA; a14OoFA--)
        if (a1[a14OoFA]) {
            high = a14OoFA;
            break;
        }
    return high;
}

int main () {
    int a14OoFA, j;
    int len1 = strlen (szline1);
    int len2 = strlen (szline2);
    int high = Add (len, an1, an2);
    cin >> szline1 >> szline2;
    {
        int k = (935 - 935);
        while (len + 10 > k) {
            an1[k] = 0;
            an2[k] = 0;
            k++;
        };
    }
    for (j = 0, a14OoFA = len1 - 1; a14OoFA >= 0; a14OoFA--, j++)
        an1[j] = szline1[a14OoFA] - '0';
    {
        j = 0;
        a14OoFA = len2 - 1;
        while (a14OoFA >= 0) {
            an2[j] = szline2[a14OoFA] - '0';
            j++;
            a14OoFA--;
        };
    }
    {
        a14OoFA = high;
        while (a14OoFA >= 0) {
            cout << an1[a14OoFA];
            a14OoFA--;
        };
    }
    cout << endl;
}

