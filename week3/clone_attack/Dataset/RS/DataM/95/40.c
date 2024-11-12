char lscYonSx1L (char s) {
    if ('A' <= s && 'Z' >= s)
        s = s - 'A' + 'a';
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
    return s;
}

int main () {
    int X4yTUj, twx65UC0DJz;
    char B5jt4ZAlGndT [(522 - 520)] [(803 - 723)];
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    for (twx65UC0DJz = (690 - 690); 2 > twx65UC0DJz; twx65UC0DJz++)
        gets (B5jt4ZAlGndT[twx65UC0DJz]);
    for (twx65UC0DJz = (452 - 452); 2 > twx65UC0DJz; twx65UC0DJz++)
        for (X4yTUj = (946 - 946); B5jt4ZAlGndT[twx65UC0DJz][X4yTUj] != '\0'; X4yTUj++) {
            B5jt4ZAlGndT[twx65UC0DJz][X4yTUj] = lscYonSx1L (B5jt4ZAlGndT[twx65UC0DJz][X4yTUj]);
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
            };
        }
    if (strcmp (B5jt4ZAlGndT[0], B5jt4ZAlGndT[1]) > 0)
        printf (">");
    else {
        if (strcmp (B5jt4ZAlGndT[0], B5jt4ZAlGndT[1]) < 0)
            ;
        else
            printf ("=");
    };
}

