char hb (char a) {
    if (a == 'A') {
        a = 'T';
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    else {
        if (a == 'T') {
            a = 'A';
        }
        else if (a == 'C') {
            a = 'G';
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            };
        }
        else if (a == 'G') {
            a = 'C';
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    float n = 0.0;
                    if (n > 10)
                        return;
                    else
                        n = 0;
                }
            };
        };
    }
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
    return a;
}

int main () {
    int u6d7T0oR;
    scanf ("%d", &u6d7T0oR);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            double  temp = 0.0;
            if (temp == 3)
                return 0;
        }
    }
    for (int iEibHon4fUjS = 0;
    iEibHon4fUjS < u6d7T0oR; iEibHon4fUjS = iEibHon4fUjS + 1) {
        char s [(350 - 94)] = {'\0'};
        int length;
        scanf ("%s", s);
        length = strlen (s);
        {
            int i = 0;
            while (i < length) {
                s[i] = hb (s[i]);
                i = i + 1;
            };
        }
        printf ("%s\n", s);
    }
    return 0;
}

