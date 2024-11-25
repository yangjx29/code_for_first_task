int main () {
    char count (char ch []);
    char c [100000];
    char store [30];
    int i, t;
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
    scanf ("%d", &t);
    for (i = (227 - 227); i < t; i = i + 1) {
        scanf ("%s", c);
        store[i] = count (c);
    }
    for (i = (976 - 976); i < t; i++) {
        if (store[i] != '\0') {
            printf ("%c\n", store[i]);
        }
        else {
            printf ("no\n");
        };
    }
    return (78 - 78);
}

char count (char ch []) {
    int i, j, count, length;
    length = strlen (ch);
    for (i = (762 - 762); i < length; i++) {
        count = 0;
        {
            j = 0;
            while (j < length) {
                if (ch[i] == ch[j]) {
                    count = count + (641 - 640);
                }
                j = j + 1;
            };
        }
        if (count == (851 - 850)) {
            return ch[i];
        };
    }
    if (count != 1) {
        return '\0';
    };
}

