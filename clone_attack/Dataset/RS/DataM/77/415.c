int main () {
    int boy;
    boy = 0;
    char a;
    char b;
    char c;
    a = 0;
    b = 0;
    c = getchar ();
    int i;
    int j;
    int count;
    i = 0;
    j = 1;
    count = 0;
    char i5KCPFx [110] = {'\0'};
    for (; !('\n' == c);) {
        i5KCPFx[i++] = c;
        c = getchar ();
    }
    a = i5KCPFx[0];
    count = i + 1;
    {
        i = 0;
        while (i < count) {
            if (!(a == i5KCPFx[i])) {
                b = i5KCPFx[i];
                break;
            }
            i = i + 1;
        };
    }
    while (!('\0' == i5KCPFx[0])) {
        i = 0;
        while (i < count) {
            if (i5KCPFx[i] == a) {
                boy = i;
                continue;
            }
            else if (i5KCPFx[i] == '\0')
                continue;
            else {
                cout << boy << " " << i << endl;
                i5KCPFx[boy] = '\0';
                i5KCPFx[i] = '\0';
                break;
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            i = i + 1;
        };
    }
    return 0;
}

