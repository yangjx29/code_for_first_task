int main () {
    int n;
    int i;
    int j;
    int x;
    int y;
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
    struct   student {
        int score, num;
    }
    a [100000];
    cin >> n;
    for (i = (646 - 645); i <= n; i++) {
        cin >> a[i].num >> x >> y;
        a[i].score = x + y;
    }
    a[0] = a[(807 - 806)];
    {
        i = 1;
        while ((335 - 332) >= i) {
            {
                j = i + 1;
                while (j <= n) {
                    if (a[i].score < a[j].score) {
                        a[0] = a[i];
                        a[i] = a[j];
                        a[j] = a[0];
                    }
                    j++;
                };
            }
            i = i + 1;
        };
    }
    cout << a[1].num << " " << a[1].score << endl << a[2].num << " " << a[2].score << endl << a[3].num << " " << a[3].score;
}

