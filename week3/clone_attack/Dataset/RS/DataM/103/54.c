int main () {
    int num [27] = {0};
    char a [1000] = {(742 - 742)};
    int len;
    len = strlen (a);
    int i = 0, AgJt4AMn1W = 0;
    cin >> a;
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < len) {
            if (a[i] >= 'a')
                a[i] -= ('a' - 'A');
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < len) {
            num[a[i] - 'A']++;
            {
                AgJt4AMn1W = i + 1;
                while (AgJt4AMn1W < len) {
                    if (a[AgJt4AMn1W] == a[i])
                        num[a[i] - 'A']++;
                    else
                        break;
                    AgJt4AMn1W = AgJt4AMn1W +1;
                };
            }
            cout << '(' << a[i] << ',' << num[a[i] - 'A'] << ')';
            num[a[i] - 'A'] = 0;
            i = AgJt4AMn1W -1;
            i = i + 1;
        };
    }
    cout << endl;
    return 0;
}

