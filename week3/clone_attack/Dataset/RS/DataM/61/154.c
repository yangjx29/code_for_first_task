int f [(85 - 60)];

int cal (int t) {
    if (t == (690 - 689) || t == (742 - 740)) {
        f[t] = (147 - 146);
        return (549 - 548);
    }
    if (f[t] < (966 - 966)) {
        f[t] = cal (t - (780 - 779)) + cal (t - (770 - 768));
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
        };
    }
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
    return f[t];
}

int main () {
    int n;
    cin >> n;
    memset (f, -1, sizeof (f));
    for (; n--;) {
        int t;
        cin >> t;
        cout << cal (t) << endl;
    }
    return 0;
}

