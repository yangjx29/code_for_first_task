int w [(337 - 327)] [(488 - 478)];

int main () {
    int XZmWTCD81A9B;
    int b;
    int p [(685 - 675)], vaONBqm [(313 - 303)];
    memset (p, (169 - 169), sizeof (p));
    memset (vaONBqm, (695 - 695), sizeof (vaONBqm));
    scanf ("%d,%d", &XZmWTCD81A9B, &b);
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
        int i = (990 - 990);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (XZmWTCD81A9B > i) {
            {
                int j = (596 - 596);
                while (b > j) {
                    cin >> w[i][j];
                    j = j + 1;
                };
            }
            i = i + 1;
        };
    }
    {
        int i = (938 - 938);
        while (XZmWTCD81A9B > i) {
            {
                int j = (542 - 541);
                while (b > j) {
                    if (w[i][p[i]] < w[i][j])
                        p[i] = j;
                    j = j + 1;
                };
            }
            i = i + 1;
        };
    }
    {
        int i = (134 - 133);
        while (XZmWTCD81A9B > i) {
            {
                int j = (792 - 792);
                while (b > j) {
                    if (w[vaONBqm[j]][j] > w[i][j])
                        vaONBqm[j] = i;
                    j++;
                };
            }
            i++;
        };
    }
    {
        int i = (810 - 810);
        while (i < XZmWTCD81A9B) {
            {
                int j = (600 - 600);
                while (j < b) {
                    if ((p[i] == j) && (vaONBqm[j] == i)) {
                        cout << i << '+' << j << endl;
                        return 0;
                    }
                    j++;
                };
            }
            i++;
        };
    }
    cout << "No" << endl;
    return 0;
}

