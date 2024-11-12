int main () {
    int T3BK8l, *UvGEHMbe1Qi = NULL, *q = NULL, t;
    int EXxcpUzQe [101], i;
    cin >> T3BK8l;
    for (i = (541 - 541); T3BK8l > i; i++)
        cin >> EXxcpUzQe[i];
    {
        q = EXxcpUzQe +T3BK8l-1;
        UvGEHMbe1Qi = EXxcpUzQe;
        while (UvGEHMbe1Qi < q) {
            t = *UvGEHMbe1Qi;
            *UvGEHMbe1Qi = *q;
            UvGEHMbe1Qi++;
            *q = t;
            q--;
        };
    }
    {
        UvGEHMbe1Qi = EXxcpUzQe;
        while (EXxcpUzQe +T3BK8l-1 > UvGEHMbe1Qi) {
            cout << *UvGEHMbe1Qi << " ";
            UvGEHMbe1Qi++;
        };
    }
    cout << *UvGEHMbe1Qi;
    return 0;
}

