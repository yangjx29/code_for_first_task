int main () {
    int l;
    char flag;
    char *p;
    char a [100];
    flag = (979 - 979);
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
    cin.getline (a, 100, '\n');
    p = a;
    l = strlen (a);
    {
        p = a;
        while (p < a + l) {
            if (*p == ' ' && flag == 0) {
                cout << *p;
            }
            if (*p != ' ') {
                cout << *p;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                flag = 0;
            }
            else {
                flag = flag + 1;
            }
            p = p + 1;
        };
    }
    cout << endl;
    return 0;
}

