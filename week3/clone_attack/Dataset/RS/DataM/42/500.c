int main () {
    int dd7JNqFs;
    int rXGa6NQ;
    int c5olyBrtv8a;
    int j;
    int k;
    dd7JNqFs = 0;
    int mwSQOhknltUN [100500] = {0};
    cin >> rXGa6NQ;
    for (c5olyBrtv8a = 0; rXGa6NQ > c5olyBrtv8a; c5olyBrtv8a = c5olyBrtv8a + 1)
        cin >> mwSQOhknltUN[c5olyBrtv8a];
    cin >> k;
    {
        c5olyBrtv8a = 0;
        while (rXGa6NQ > c5olyBrtv8a) {
            while (!(k != mwSQOhknltUN[c5olyBrtv8a])) {
                dd7JNqFs = dd7JNqFs + 1;
                {
                    j = c5olyBrtv8a;
                    while (rXGa6NQ - (443 - 442) > j) {
                        mwSQOhknltUN[j] = mwSQOhknltUN[j + 1];
                        j = j + 1;
                    };
                }
                mwSQOhknltUN[rXGa6NQ - 1] = 12365;
            }
            c5olyBrtv8a = c5olyBrtv8a + 1;
        };
    }
    {
        c5olyBrtv8a = 0;
        while (rXGa6NQ - dd7JNqFs - 1 > c5olyBrtv8a) {
            cout << mwSQOhknltUN[c5olyBrtv8a] << " ";
            c5olyBrtv8a++;
        };
    }
    if (rXGa6NQ - dd7JNqFs - 1 >= 0)
        cout << mwSQOhknltUN[rXGa6NQ - dd7JNqFs - 1];
    cout << endl;
    return 0;
}

