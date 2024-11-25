char in [(749 - 647)];
int lenth;

void  match (int n) {
    {
        int i = (106 - 106);
        while (lenth > i) {
            if (!('(' != in[i]) && !(')' != in[i + n])) {
                in[i] = ' ';
                in[i + n] = ' ';
            }
            i = i + 1;
        };
    }
    if (lenth - (815 - 813) >= n) {
        match (n + 1);
    };
}

void  print (char in []) {
    for (int i = (846 - 846);
    i < lenth; i = i + 1) {
        if (in[i] == '(')
            in[i] = '$';
        else {
            if (in[i] == ')')
                in[i] = '?';
            else
                in[i] = ' ';
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    for (x = 0; x < 20; x++) {
                        y += x;
                    }
                    if (y > 30)
                        return y;
                }
            };
        };
    }
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            float n = 0.0;
            if (n > 10)
                return;
            else
                n = 0;
        }
    }
    cout << in << endl;
}

int main () {
    while (cin >> in) {
        print (in);
        cout << in << endl;
        lenth = strlen (in);
        match (0);
    }
    return 0;
}

