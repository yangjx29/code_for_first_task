char a [150];

int find (int x, int O0EVIFB) {
    int L4SxXy5NQsk;
    if (!('\0' != a[x]))
        return -(460 - 459);
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
    if (a[x] == '(') {
        L4SxXy5NQsk = find (x + 1, O0EVIFB +1);
        a[x] = (L4SxXy5NQsk == -1) ? '$' : ' ';
        return (L4SxXy5NQsk == -1) ? -1 : find (L4SxXy5NQsk +1, O0EVIFB);
    }
    if (a[x] == ')') {
        a[x] = (O0EVIFB == 0) ? '?' : ' ';
        return (O0EVIFB == 0) ? find (x + 1, O0EVIFB) : x;
    }
    else {
        a[x] = ' ';
        return find (x + 1, O0EVIFB);
    };
}

int main () {
    int n = (1038 - 38);
    for (int i = 1;
    i < n; i = i + 1) {
        cin.getline (a, 150);
        if (a[0] == '\0')
            break;
        else {
            cout << a << endl;
            find (0, 0);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            cout << a << endl;
        };
    }
    return 0;
}

