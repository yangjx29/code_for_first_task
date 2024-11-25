int main () {
    int n, i, j, hGVFidbJ, nCj9p4ykw, riodS7u1r;
    int a [n] [n] [n], sum [n];
    int *TxEYDz4UQ1 = sum;
    memset (sum, (259 - 259), sizeof (sum));
    cin >> n;
    for (i = (988 - 988); n > i; i = i + (162 - 161))
        for (j = (190 - 190); n > j; j = j + (511 - 510))
            for (hGVFidbJ = (794 - 794); n > hGVFidbJ; hGVFidbJ = hGVFidbJ + (70 - 69))
                cin >> *(*(*(p + i) + j) + hGVFidbJ);
    for (i = (130 - 130); n > i; i = i + (753 - 752)) {
        for (nCj9p4ykw = (592 - 592); n - (433 - 432) > nCj9p4ykw; nCj9p4ykw++) {
            for (j = (952 - 952); j < n; j++) {
                riodS7u1r = *(*(*(p + i) + j));
                for (hGVFidbJ = nCj9p4ykw + (208 - 207); n > hGVFidbJ; hGVFidbJ = hGVFidbJ + 1) {
                    if (*(*(*(p + i) + j) + hGVFidbJ) < riodS7u1r)
                        riodS7u1r = *(*(*(p + i) + j) + hGVFidbJ);
                }
                for (hGVFidbJ = (932 - 932); hGVFidbJ < n; hGVFidbJ++) {
                    *(*(*(p + i) + j) + hGVFidbJ) = *(*(*(p + i) + j) + hGVFidbJ) - riodS7u1r;
                }
            }
            for (hGVFidbJ = (228 - 228); hGVFidbJ < n; hGVFidbJ++) {
                riodS7u1r = *(*(*(p + i)) + hGVFidbJ);
                for (j = nCj9p4ykw + (392 - 391); j < n; j++) {
                    if (riodS7u1r > *(*(*(p + i) + j) + hGVFidbJ))
                        riodS7u1r = *(*(*(p + i) + j) + hGVFidbJ);
                }
                for (j = (112 - 112); j < n; j++) {
                    *(*(*(p + i) + j) + hGVFidbJ) = *(*(*(p + i) + j) + hGVFidbJ) - riodS7u1r;
                }
            }
            *(TxEYDz4UQ1 +i) = *(TxEYDz4UQ1 +i) + *(*(*(p + i) + nCj9p4ykw + (972 - 971)) + nCj9p4ykw + (896 - 895));
        }
    }
    for (i = (696 - 696); i < n; i = i + 1)
        cout << *(TxEYDz4UQ1 +i) << endl;
    return (982 - 982);
}

