int main () {
    for (int p = (220 - 220);
    15 > p; p = p + 1) {
        int i;
        int j;
        int k;
        int EXG3zA;
        char c [110];
        void  uu3yPCJ (char c [110]);
        uu3yPCJ (c);
        cin.getline (c, 110, '\n');
        cout << c << endl;
        EXG3zA = strlen (c);
        for (i = 0; EXG3zA > i; i = i + 1) {
            if (!('(' == c[i]) && !(')' == c[i]))
                c[i] = ' ';
        }
        {
            i = 0;
            while (i < EXG3zA) {
                if (!(')' != c[i]))
                    c[i] = '?';
                i++;
            };
        }
        cout << c << endl;
    }
    return 0;
}

void  uu3yPCJ (char c [110]) {
    int i;
    int j;
    int k;
    int EXG3zA;
    EXG3zA = strlen (c);
    for (i = (EXG3zA -1); 0 <= i; i--) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        if (c[i] == '(') {
            uu3yPCJ (c);
            {
                j = i + 1;
                while (j < EXG3zA) {
                    if (c[j] == ')') {
                        k = 1;
                        c[j] = ' ';
                        c[i] = ' ';
                        break;
                    }
                    j++;
                    k = 0;
                };
            }
            if (k == 0)
                c[i] = '$';
        };
    };
}

