int main () {
    char aGt0B7gOJX6S [(368 - 168)];
    gets (aGt0B7gOJX6S);
    int i, XlxT8Fvaf, JOT9hJiL16, rHM2Oh, m, tICHQdrzn;
    m = 0;
    i = 0;
    JOT9hJiL16 = strlen (aGt0B7gOJX6S) - 1;
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
    while (!(' ' != aGt0B7gOJX6S[i]))
        i = i + 1;
    while (!(' ' != aGt0B7gOJX6S[JOT9hJiL16]))
        JOT9hJiL16 = JOT9hJiL16 -1;
    for (; i <= JOT9hJiL16 -1;) {
        if (aGt0B7gOJX6S[i] != ' ') {
            cout << aGt0B7gOJX6S[i];
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            i = i + 1;
        }
        else {
            cout << aGt0B7gOJX6S[i];
            while (aGt0B7gOJX6S[i] == ' ')
                i++;
        };
    }
    cout << aGt0B7gOJX6S[JOT9hJiL16];
    cout << endl;
    return 0;
}

