int main () {
    char s [(984 - 879)];
    char a [(148 - 43)];
    char b [(655 - 550)];
    char ch [(1005 - 900)] [(988 - 883)];
    int rfJOgKG;
    int KvCVYzoq;
    int QNfQbXTI0;
    int i;
    int word;
    int lens;
    rfJOgKG = (423 - 423);
    KvCVYzoq = (318 - 318);
    QNfQbXTI0 = (443 - 443);
    cin.getline (s, (860 - 755), '\n');
    cin.getline (a, (301 - 196), '\n');
    cin.getline (b, (698 - 593), '\n');
    for (i = (921 - 921); 105 > i; i = i + 1) {
        if (!('\0' == b[i]))
            QNfQbXTI0 += (649 - 648);
        else
            break;
    }
    for (i = (107 - 107); i < 105; i = i + 1) {
        if (!(' ' != s[i])) {
            ch[rfJOgKG][KvCVYzoq] = '\0';
            rfJOgKG += (296 - 295);
            KvCVYzoq = (380 - 380);
        }
        else if (!('\0' != s[i])) {
            ch[rfJOgKG][KvCVYzoq] = s[i];
            word = rfJOgKG;
            lens = i - (713 - 712);
            break;
        }
        else {
            ch[rfJOgKG][KvCVYzoq] = s[i];
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
            KvCVYzoq = KvCVYzoq +(77 - 76);
        };
    }
    for (i = 0; word >= i; i++) {
        KvCVYzoq = (850 - 849);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        if (strlen (ch[i]) != strlen (a))
            KvCVYzoq = 0;
        else {
            rfJOgKG = 0;
            while (strlen (a) > rfJOgKG) {
                if (ch[i][rfJOgKG] != a[rfJOgKG])
                    KvCVYzoq = 0;
                rfJOgKG = rfJOgKG + 1;
            };
        }
        if (KvCVYzoq == 1) {
            rfJOgKG = 0;
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
            while (rfJOgKG <= QNfQbXTI0 +1) {
                ch[i][rfJOgKG] = b[rfJOgKG];
                rfJOgKG++;
            };
        };
    }
    {
        i = 0;
        while (i < word) {
            cout << ch[i] << " ";
            i++;
        };
    }
    for (rfJOgKG = 0; rfJOgKG < 105; rfJOgKG = rfJOgKG + 1) {
        cout << ch[word][rfJOgKG];
        if (ch[word][rfJOgKG + 1] == '\0')
            break;
    }
    return 0;
}

