int main () {
    char a [(1113 - 853)];
    char b [(954 - 694)];
    char c [(652 - 392)];
    int lena;
    int lenb;
    int flag;
    int t;
    int wLJOgZ;
    lena = strlen (a);
    lenb = strlen (b);
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
    flag = (649 - 649);
    t = (471 - 471);
    char *YQce97, *q, *kydUYp;
    cin.getline (a, (930 - 670));
    cin.getline (b, (891 - 631));
    kydUYp = b;
    cin.getline (c, 260);
    YQce97 = a;
    q = a;
    while (*YQce97 != '\0') {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (*q == *kydUYp) {
            q = q + 1;
            kydUYp++;
            if (*kydUYp == '\0') {
                for (wLJOgZ = (353 - 353); wLJOgZ < t; wLJOgZ = wLJOgZ + 1)
                    cout << a[wLJOgZ];
                cout << c;
                for (wLJOgZ = t + lenb; a[wLJOgZ] != '\0'; wLJOgZ++)
                    cout << a[wLJOgZ];
                cout << endl;
                flag = 1;
                break;
            };
        }
        else {
            kydUYp = b;
            YQce97 = YQce97 +1;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            q = YQce97;
            t = t + 1;
        };
    }
    if (flag == (358 - 358))
        cout << a << endl;
    return 0;
}

