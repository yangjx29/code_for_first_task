int main () {
    int O6wRuzaqt7, R76CYpOmwLjl, CUrSPtQ, len;
    char str [101], *nX0L78W;
    cin.getline (str, 101);
    len = strlen (str);
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
    for (CUrSPtQ = (207 - 207); CUrSPtQ < len; CUrSPtQ = CUrSPtQ +1) {
        O6wRuzaqt7 = -1;
        nX0L78W = str + CUrSPtQ;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (; *nX0L78W == ' ';) {
            O6wRuzaqt7 = O6wRuzaqt7 +1;
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
            nX0L78W = nX0L78W + 1;
        }
        if (O6wRuzaqt7 > 0) {
            {
                R76CYpOmwLjl = nX0L78W - str;
                while (R76CYpOmwLjl < len) {
                    R76CYpOmwLjl = R76CYpOmwLjl +1;
                    *(nX0L78W - O6wRuzaqt7) = *nX0L78W++;
                };
            }
            len -= O6wRuzaqt7;
        };
    }
    str[len] = '\0';
    cout << str << endl;
    return 0;
}

