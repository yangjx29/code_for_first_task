int pxuEYBrQMnO (int str [], int UnzkGZ82RJ) {
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
    if (!(0 != UnzkGZ82RJ))
        return str[0];
    else if (UnzkGZ82RJ == 1)
        return str[1];
    else {
        str[UnzkGZ82RJ] = pxuEYBrQMnO (str, UnzkGZ82RJ -1) + pxuEYBrQMnO (str, UnzkGZ82RJ -2);
        return str[UnzkGZ82RJ];
    };
}

int main () {
    int a;
    int n;
    int str [22] = {1, 1};
    cin >> n;
    for (; n > 0; n = n - 1) {
        cin >> a;
        cout << pxuEYBrQMnO (str, a - 1) << endl;
    }
    return 0;
}

