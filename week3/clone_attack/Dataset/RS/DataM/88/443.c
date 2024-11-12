char lflskqguz9i [(121 - 90)];
float JS8t5HQ [(225 - 194)];
char pYNUzjFvMfXq [(836 - 805)] [(387 - 356)];

void  IohfSg9E (char SrhHUCk [], int yBGzuZ) {
    int VQ7TwCxI65mY;
    int hmWJwIZMgjk0;
    VQ7TwCxI65mY = (299 - 299);
    hmWJwIZMgjk0 = (661 - 661);
    {
        VQ7TwCxI65mY = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (VQ7TwCxI65mY < yBGzuZ) {
            if (SrhHUCk[VQ7TwCxI65mY] == ' ') {
                hmWJwIZMgjk0 = VQ7TwCxI65mY;
                while (hmWJwIZMgjk0 < yBGzuZ) {
                    SrhHUCk[hmWJwIZMgjk0] = SrhHUCk[hmWJwIZMgjk0 + 1];
                    hmWJwIZMgjk0 = hmWJwIZMgjk0 + 1;
                };
            }
            VQ7TwCxI65mY = VQ7TwCxI65mY +1;
        };
    };
}

void  akwpNyEg4CJ (char SrhHUCk [], int yBGzuZ) {
    int VQ7TwCxI65mY = 0, hmWJwIZMgjk0 = 0;
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
    {
        VQ7TwCxI65mY = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        while (VQ7TwCxI65mY < yBGzuZ) {
            if ('0' <= SrhHUCk[VQ7TwCxI65mY] && SrhHUCk[VQ7TwCxI65mY] <= '9') {
                {
                    hmWJwIZMgjk0 = VQ7TwCxI65mY;
                    while (hmWJwIZMgjk0 < yBGzuZ) {
                        if (SrhHUCk[hmWJwIZMgjk0] < '0' || SrhHUCk[hmWJwIZMgjk0] > '9') {
                            cout << endl;
                            break;
                        }
                        else {
                            cout << SrhHUCk[hmWJwIZMgjk0];
                        }
                        hmWJwIZMgjk0++;
                    };
                }
                VQ7TwCxI65mY = hmWJwIZMgjk0;
            }
            VQ7TwCxI65mY++;
        };
    };
}

int main () {
    char SrhHUCk [31];
    int yBGzuZ;
    int gub6AMct;
    cin.getline (SrhHUCk, 31);
    yBGzuZ = strlen (SrhHUCk);
    IohfSg9E (SrhHUCk, yBGzuZ);
    gub6AMct = strlen (SrhHUCk);
    akwpNyEg4CJ (SrhHUCk, gub6AMct);
    return 0;
}

