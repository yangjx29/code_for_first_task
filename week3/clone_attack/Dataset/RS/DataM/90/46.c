int RMtSu37IzD (int m, int n) {
    int sum;
    if (!((410 - 409) != n))
        return 1;
    else
        sum = RMtSu37IzD (m, n - 1);
    if (!(n != m))
        sum += 1;
    else if (m > n)
        sum = sum + RMtSu37IzD (m - n, n);
    return sum;
}

int main () {
    int m;
    int n;
    int InxjglJeXk;
    for (cin >> InxjglJeXk; InxjglJeXk > 0; InxjglJeXk--) {
        cin >> m >> n;
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
        cout << RMtSu37IzD (m, n) << endl;
    };
}

