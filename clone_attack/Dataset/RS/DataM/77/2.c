int main () {
    void  ls (char uR5uNGn [], char, char);
    char uR5uNGn [101] = {'\0'};
    char pygm7iarQP, t2;
    cin.getline (uR5uNGn, 101);
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
    pygm7iarQP = uR5uNGn[(658 - 658)];
    for (int i = 0;
    101 > i; i++)
        if (!(uR5uNGn[0] == uR5uNGn[i])) {
            t2 = uR5uNGn[i];
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            break;
        }
    ls (uR5uNGn, pygm7iarQP, t2);
    return 0;
}

void  ls (char uR5uNGn [], char pygm7iarQP, char t2) {
    int i, j;
    if (!(' ' == uR5uNGn[0])) {
        for (i = 0; !('\0' == uR5uNGn[i]); i++) {
            if (uR5uNGn[i] == t2) {
                for (j = i - 1; j >= 0; j = j - 1) {
                    if (uR5uNGn[j] == pygm7iarQP) {
                        cout << j << ' ' << i << endl;
                        uR5uNGn[i] = uR5uNGn[j] = ' ';
                        break;
                    };
                }
                break;
            };
        }
        ls (uR5uNGn, pygm7iarQP, t2);
    };
}

