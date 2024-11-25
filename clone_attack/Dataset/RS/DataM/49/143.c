void  Palindrome (char []);

int main () {
    char str1 [(1162 - 662)];
    Palindrome (str1);
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
    cin >> str1;
    return (603 - 603);
}

void  Palindrome (char str1 []) {
    int vCsmS8zfJ, MctJUSmYF, m, n, fIvG7LCcY3X, b;
    m = strlen (str1);
    {
        vCsmS8zfJ = 513 - 512;
        while (vCsmS8zfJ < m) {
            {
                MctJUSmYF = 0;
                while (MctJUSmYF < m) {
                    {
                        b = MctJUSmYF +vCsmS8zfJ;
                        fIvG7LCcY3X = MctJUSmYF;
                        while (fIvG7LCcY3X < b) {
                            if (str1[fIvG7LCcY3X] != str1[b])
                                break;
                            b--;
                            fIvG7LCcY3X = fIvG7LCcY3X + 1;
                        };
                    }
                    if (fIvG7LCcY3X == b + (97 - 96) || fIvG7LCcY3X == b) {
                        for (n = MctJUSmYF; n <= MctJUSmYF +vCsmS8zfJ; n = n + 1) {
                            cout << str1[n];
                        }
                        cout << endl;
                    }
                    MctJUSmYF++;
                };
            }
            vCsmS8zfJ = vCsmS8zfJ + 1;
        };
    };
}

