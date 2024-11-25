int main () {
    int m = 0, n = 0;
    int XtnRI7 [21] [21] = {0};
    int i = 0, XvjBPpXWG1 = 0;
    cin >> m >> n;
    {
        i = 1;
        while (i <= m) {
            {
                XvjBPpXWG1 = 1;
                while (XvjBPpXWG1 <= n) {
                    cin >> XtnRI7[i][XvjBPpXWG1];
                    XvjBPpXWG1++;
                };
            }
            i++;
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
    {
        i = 1;
        while (i <= m) {
            for (XvjBPpXWG1 = 1; XvjBPpXWG1 <= n; XvjBPpXWG1++)
                if (XtnRI7[i][XvjBPpXWG1] >= XtnRI7[i - 1][XvjBPpXWG1] && XtnRI7[i][XvjBPpXWG1] >= XtnRI7[i + 1][XvjBPpXWG1] && XtnRI7[i][XvjBPpXWG1] >= XtnRI7[i][XvjBPpXWG1 +1] && XtnRI7[i][XvjBPpXWG1] >= XtnRI7[i][XvjBPpXWG1 -1])
                    cout << i - 1 << " " << XvjBPpXWG1 -1 << endl;
            i++;
        };
    }
    cin.get ();
    cin.get ();
    return 0;
}

