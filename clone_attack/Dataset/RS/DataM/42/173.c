int main () {
    int a [100000];
    int q3lmhdz1;
    int Ln8zapiH;
    int r9RJkZpj30;
    int pcNqjTJL3;
    int n;
    int p;
    q3lmhdz1 = 0;
    cin >> n;
    {
        Ln8zapiH = 0;
        while (Ln8zapiH < n) {
            cin >> a[Ln8zapiH];
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            Ln8zapiH = Ln8zapiH +1;
        };
    }
    cin >> pcNqjTJL3;
    {
        r9RJkZpj30 = 0;
        while (r9RJkZpj30 < n) {
            if (a[r9RJkZpj30] != pcNqjTJL3) {
                a[q3lmhdz1] = a[r9RJkZpj30];
                q3lmhdz1 = q3lmhdz1 + 1;
            }
            r9RJkZpj30++;
        };
    }
    cout << a[0];
    {
        p = 1;
        while (p < q3lmhdz1) {
            cout << " " << a[p];
            p++;
        };
    }
    return 0;
}

