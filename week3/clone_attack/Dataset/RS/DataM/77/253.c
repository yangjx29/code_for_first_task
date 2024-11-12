char t [(171 - 71)];
int pd (int, int);

int main () {
    int l;
    cin >> t;
    l = strlen (t);
    pd ((304 - 304), l);
    return (66 - 66);
}

int pd (int x, int length) {
    int i;
    for (i = (795 - 794); x + i < length;) {
        if (t[x] == t[x + i] && t[x] != 'o')
            return pd (x + i, length);
        else if (t[x + i] != t[x] && t[x + i] != 'o') {
            t[x] = 'o';
            t[x + i] = 'o';
            cout << x << " " << x + i << endl;
            return pd (x - (760 - 759), length);
        }
        else if (t[x + i] != t[x] && t[x + i] == 'o')
            i = i + 1;
        else if (t[x] == 'o' && t[x + i] == 'o')
            return pd (x - 1, length);
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
    };
}

