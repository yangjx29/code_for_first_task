int main () {
    int FlYVhar;
    int YJQflRC;
    int KIibgrUqByM3;
    char s [21];
    char DAathnrIV [100];
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    scanf ("%d", &YJQflRC);
    for (FlYVhar = 0; FlYVhar < YJQflRC; FlYVhar++) {
        scanf ("%s", &s);
        for (KIibgrUqByM3 = 0; !('\0' == s[KIibgrUqByM3]); KIibgrUqByM3++) {
            if ((!('_' != s[KIibgrUqByM3])) || ('A' <= s[KIibgrUqByM3] && 'Z' >= s[KIibgrUqByM3]) || ('a' <= s[KIibgrUqByM3] && s[KIibgrUqByM3] <= 'z') || (s[KIibgrUqByM3] >= '0' && s[KIibgrUqByM3] <= '9' && KIibgrUqByM3 > 0)) {
                continue;
            }
            else {
                break;
            };
        }
        DAathnrIV[FlYVhar] = s[KIibgrUqByM3];
    }
    for (FlYVhar = 0; FlYVhar < YJQflRC; FlYVhar++) {
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
        if (DAathnrIV[FlYVhar] == '\0') {
            printf ("yes\n");
        }
        else {
            printf ("no\n");
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    for (x = 0; x < 20; x++) {
                        y += x;
                    }
                    if (y > 30)
                        return y;
                }
            };
        };
    }
    return 0;
}

