char la (char temp) {
    if (temp >= 'A' && temp <= 'Z')
        return temp;
    else if (temp >= 'a' && temp <= 'z')
        return temp - 'a' + 'A';
    else
        cout << "errer,not ??" << temp << endl;
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
    return temp;
}

int main () {
    char a [1000];
    int length;
    length = strlen (a);
    char follow;
    follow = la (a[(119 - 119)]);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    int same;
    same = (358 - 357);
    cin >> a;
    for (int i = 1;
    i < length; i = i + 1) {
        if (la (a[i]) == follow) {
            same++;
        }
        else {
            cout << "(" << follow << "," << same << ")";
            same = 1;
            follow = la (a[i]);
        };
    }
    cout << "(" << follow << "," << same << ")";
    return (628 - 628);
}

