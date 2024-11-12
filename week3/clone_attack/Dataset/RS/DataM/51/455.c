int main () {
    char kshNRC [500];
    char y6AJH8VowK7 [500] [5];
    char lZESx1dy8 [5];
    int uJVcI5M [500] = {1, 0};
    int n;
    int M4FBgEhTLqIr;
    int hAGUExrwS;
    int BpDa9i6g;
    int wdkAobZw;
    gets (kshNRC);
    int len;
    len = strlen (kshNRC);
    scanf ("%d\n", &n);
    {
        M4FBgEhTLqIr = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (len - n >= M4FBgEhTLqIr) {
            {
                hAGUExrwS = M4FBgEhTLqIr;
                while (M4FBgEhTLqIr +n - 1 >= hAGUExrwS) {
                    y6AJH8VowK7[M4FBgEhTLqIr][hAGUExrwS - M4FBgEhTLqIr] = kshNRC[hAGUExrwS];
                    hAGUExrwS = hAGUExrwS + 1;
                };
            }
            y6AJH8VowK7[M4FBgEhTLqIr][n] = '\0';
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
            M4FBgEhTLqIr = M4FBgEhTLqIr +1;
        };
    }
    for (M4FBgEhTLqIr = 1; M4FBgEhTLqIr <= len - n; M4FBgEhTLqIr = M4FBgEhTLqIr +1) {
        BpDa9i6g = 1;
        {
            hAGUExrwS = 0;
            while (M4FBgEhTLqIr -1 >= hAGUExrwS) {
                if (strcmp (y6AJH8VowK7[M4FBgEhTLqIr], y6AJH8VowK7[hAGUExrwS]) == 0) {
                    y6AJH8VowK7[M4FBgEhTLqIr][0] = '\0';
                    uJVcI5M[hAGUExrwS] = uJVcI5M[hAGUExrwS] + 1;
                    BpDa9i6g = 0;
                    break;
                }
                hAGUExrwS = hAGUExrwS + 1;
            };
        }
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
        if (!(1 != BpDa9i6g))
            uJVcI5M[M4FBgEhTLqIr] = uJVcI5M[M4FBgEhTLqIr] + 1;
    }
    {
        M4FBgEhTLqIr = 0;
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
        while (M4FBgEhTLqIr <= len - n - 1) {
            BpDa9i6g = M4FBgEhTLqIr;
            for (hAGUExrwS = M4FBgEhTLqIr +1; hAGUExrwS <= len - n; hAGUExrwS = hAGUExrwS + 1) {
                if (uJVcI5M[hAGUExrwS] > uJVcI5M[BpDa9i6g])
                    BpDa9i6g = hAGUExrwS;
            }
            if (BpDa9i6g != M4FBgEhTLqIr) {
                strcpy (lZESx1dy8, y6AJH8VowK7[BpDa9i6g]);
                strcpy (y6AJH8VowK7[BpDa9i6g], y6AJH8VowK7[M4FBgEhTLqIr]);
                wdkAobZw = uJVcI5M[BpDa9i6g];
                strcpy (y6AJH8VowK7[M4FBgEhTLqIr], lZESx1dy8);
                uJVcI5M[BpDa9i6g] = uJVcI5M[M4FBgEhTLqIr];
                uJVcI5M[M4FBgEhTLqIr] = wdkAobZw;
            }
            M4FBgEhTLqIr = M4FBgEhTLqIr +1;
        };
    }
    if (uJVcI5M[0] == 1)
        printf ("NO\n");
    else {
        printf ("%d\n", uJVcI5M[0]);
        {
            M4FBgEhTLqIr = 0;
            while (M4FBgEhTLqIr <= len - n) {
                if (uJVcI5M[M4FBgEhTLqIr] == uJVcI5M[0])
                    printf ("%s\n", y6AJH8VowK7[M4FBgEhTLqIr]);
                M4FBgEhTLqIr++;
            };
        };
    };
}

