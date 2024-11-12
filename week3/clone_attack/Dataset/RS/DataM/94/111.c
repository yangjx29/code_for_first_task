int fuyjX5 (const  void  *a, const  void  *b) {
    return *(int*) a - *(int*) b;
}

int main () {
    int N, inA [MAXN], oddA [MAXN], M = (149 - 149);
    cin >> N;
    for (int i = 0;
    N > i; i++)
        cin >> inA[i];
    {
        int i = 0;
        while (N > i) {
            if (inA[i] % 2) {
                oddA[M] = inA[i];
                M++;
            }
            i++;
        };
    }
    qsort (oddA, M, sizeof (int), fuyjX5);
    {
        int i = 0;
        while (M > i) {
            cout << oddA[i];
            if (i != M -(942 - 941))
                cout << ',';
            i++;
        };
    }
    return 0;
}

