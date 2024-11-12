void  b65B8WfF (int *a, int *yo5jE3) {
    int *ch;
    ch = a;
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
    a = yo5jE3;
    yo5jE3 = ch;
}

int main () {
    int n, line [150];
    int *p_1 = line;
    cin >> n;
    {
        int i = 0;
        while (n > i) {
            cin >> line[i];
            i = i + 1;
        };
    }
    {
        int i = 0;
        while (((int) n / 2) - 1 >= i) {
            b65B8WfF (*(p_1 + i), *(p_1 + n - i - 1));
            i = i + 1;
        };
    }
    cout << *(p_1);
    {
        int wPTdlUWMg0 = 1;
        while (wPTdlUWMg0 < n) {
            cout << ' ' << *(p_1 + wPTdlUWMg0);
            wPTdlUWMg0 = wPTdlUWMg0 + 1;
        };
    }
    return 0;
}

