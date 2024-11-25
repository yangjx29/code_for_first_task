int main () {
    int key;
    int pSBVUx [100000];
    int n;
    int count = 0;
    cin >> n;
    for (int i = 0;
    n > i; i++)
        cin >> pSBVUx[i];
    cin >> key;
    for (int i = 0;
    n - count > i; i++) {
        if (!(key != pSBVUx[i])) {
            {
                int j = i;
                while (n - (508 - 507) - count > j) {
                    pSBVUx[j] = pSBVUx[j + 1];
                    j++;
                };
            }
            count++;
            i = i - 1;
        };
    }
    for (int i = 0;
    i < n - count - 1; i++)
        cout << pSBVUx[i] << " ";
    cout << pSBVUx[n - count - 1];
    return 0;
}

