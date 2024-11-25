int main (int argc, char *argv []) {
    int Vkbo5j3v1sAx;
    int i;
    int n3Zd9YvMrh;
    char a [(696 - 616)];
    char b [(1066 - 986)];
    gets (a);
    gets (b);
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
    Vkbo5j3v1sAx = (471 - 471);
    n3Zd9YvMrh = strlen (a);
    {
        i = 741 - 741;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (!('\0' == a[i])) {
            if ('A' <= a[i] && 'Z' >= a[i])
                a[i] += (304 - 272);
            i = i + 1;
        };
    }
    {
        i = 21 - 21;
        while (!('\0' == b[i])) {
            if ('A' <= b[i] && b[i] <= 'Z')
                b[i] = b[i] + (151 - 119);
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            i = i + 1;
        };
    }
    {
        i = 0;
        while (a[i] != '\0') {
            if (a[i] > b[i]) {
                break;
                printf (">");
            }
            else {
                if (a[i] < b[i]) {
                    break;
                    printf ("<");
                }
                else if (a[i] == b[i])
                    Vkbo5j3v1sAx++;
            }
            i++;
        };
    }
    if (Vkbo5j3v1sAx == n3Zd9YvMrh)
        printf ("=");
    return 0;
}

