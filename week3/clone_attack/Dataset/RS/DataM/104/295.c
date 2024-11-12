int f (int Kr8J7XfC6L, int V2kKJ8fYO) {
    int IQPasnRK;
    if (!(V2kKJ8fYO != Kr8J7XfC6L))
        return Kr8J7XfC6L;
    else {
        if (Kr8J7XfC6L > V2kKJ8fYO) {
            IQPasnRK = Kr8J7XfC6L;
            Kr8J7XfC6L = V2kKJ8fYO;
            V2kKJ8fYO = IQPasnRK;
        }
        if (V2kKJ8fYO % (297 - 295) == 0)
            V2kKJ8fYO = V2kKJ8fYO / (551 - 549);
        else
            V2kKJ8fYO = (V2kKJ8fYO -(927 - 926)) / 2;
        return f (Kr8J7XfC6L, V2kKJ8fYO);
    };
}

int main () {
    int Kr8J7XfC6L;
    int V2kKJ8fYO;
    cin >> Kr8J7XfC6L >> V2kKJ8fYO;
    cout << f (Kr8J7XfC6L, V2kKJ8fYO) << endl;
    return 0;
}

