int main () {
    int k;
    int j;
    int MW4Le9gcZCn;
    int n;
    int m;
    int a [(100302 - 302)];
    k = 0;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    cin >> n;
    for (MW4Le9gcZCn = 0; n > MW4Le9gcZCn; MW4Le9gcZCn++)
        cin >> a[MW4Le9gcZCn];
    cin >> m;
    for (j = 0; n > j; j++)
        if (a[j] != m) {
            a[k] = a[j];
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            k++;
        }
    cout << a[0];
    for (j = 1; j < k; j++)
        cout << " " << a[j];
    return 0;
}

