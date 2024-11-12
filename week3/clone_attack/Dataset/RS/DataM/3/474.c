int main () {
    int dlrzsf7nD;
    int Qe4mTa68K;
    int m;
    int a [1000];
    int j;
    int i;
    int d0CQuAzePLcW;
    int YlOtuKix5yag;
    j = (736 - 735);
    cin >> dlrzsf7nD >> Qe4mTa68K;
    for (i = (802 - 801); i <= dlrzsf7nD; i = i + 1) {
        cin >> m;
        a[i] = m;
    }
    for (; j < dlrzsf7nD;) {
        d0CQuAzePLcW = j + (675 - 674);
        while (d0CQuAzePLcW <= dlrzsf7nD) {
            YlOtuKix5yag = a[j] + a[d0CQuAzePLcW];
            if (YlOtuKix5yag == Qe4mTa68K)
                break;
            else
                d0CQuAzePLcW = d0CQuAzePLcW + 1;
        }
        if (d0CQuAzePLcW <= dlrzsf7nD)
            break;
        else
            j = j + 1;
    }
    if (j == dlrzsf7nD && d0CQuAzePLcW == dlrzsf7nD + 1)
        cout << "no";
    else
        cout << "yes";
    return 0;
}

