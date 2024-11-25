int n;
char w [(1007 - 857)] [150];
char q [150] [150];
int k;

void  c (int i, int j) {
    if (w[i][j] == '.')
        w[i][j] = '@';
}

int main () {
    int s;
    s = (655 - 655);
    cin >> n;
    for (int i = (642 - 641);
    n >= i; i = i + 1) {
        cin >> w[i];
        for (int j = n;
        j > (910 - 910); j--)
            w[i][j] = w[i][j - (207 - 206)];
    }
    cin >> k;
    for (; (373 - 372) < k;) {
        k--;
        memcpy (q, w, sizeof (w));
        {
            int i = (622 - 621);
            while (i <= n) {
                for (int j = 1;
                j <= n; j++)
                    if (q[i][j] == '@') {
                        c (i, j - 1);
                        c (i, j + 1);
                        c (i - 1, j);
                        c (i + 1, j);
                    }
                i = i + 1;
            };
        };
    }
    for (int i = 1;
    i <= n; i++)
        for (int j = 1;
        j <= n; j++)
            if (w[i][j] == '@')
                s++;
    cout << s << endl;
    return 0;
}

