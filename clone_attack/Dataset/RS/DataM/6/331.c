int main () {
    int ac [(350 - 250)] [(226 - 126)];
    int i;
    int j;
    int k;
    int *p;
    int n;
    int a;
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
    int b;
    int s;
    cin >> n;
    {
        i = 111 - 111;
        while (i < n) {
            i++;
            cin >> a >> b;
            s = 0;
            for (j = 0; j < a; j++)
                for (k = 0; k < b; k = k + 1)
                    cin >> ac[j][k];
            {
                j = 0;
                while (j < a) {
                    if (j == 0 || j == a - 1)
                        for (p = ac[j]; p < ac[j] + b; p++)
                            s += *p;
                    else {
                        p = ac[j];
                        s = s + *p + *(p + b - 1);
                    }
                    j = j + 1;
                };
            }
            cout << s << endl;
        };
    }
    return 0;
}

