void  main () {
    char text [101];
    char c;
    char o5vM41N;
    gets (text);
    int SYaAd4foKcH;
    int uNOB4PYhMVL;
    int Nr3zAg9WZb;
    int rS1oQz3i;
    int YifLBg089mp [51];
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
    int SgDYwQbo6 [51];
    int Q58NpRhkEZg;
    SYaAd4foKcH = (574 - 574);
    c = text[0];
    Q58NpRhkEZg = strlen (text);
    {
        uNOB4PYhMVL = 0;
        while (uNOB4PYhMVL < Q58NpRhkEZg) {
            if (text[uNOB4PYhMVL] != c) {
                o5vM41N = text[uNOB4PYhMVL];
                break;
            }
            uNOB4PYhMVL++;
        };
    }
    Q58NpRhkEZg = strlen (text);
    {
        uNOB4PYhMVL = 0;
        while (uNOB4PYhMVL < Q58NpRhkEZg) {
            if (text[uNOB4PYhMVL] == o5vM41N) {
                Nr3zAg9WZb = uNOB4PYhMVL - 1;
                while (Nr3zAg9WZb >= 0) {
                    if (text[Nr3zAg9WZb] == c) {
                        YifLBg089mp[SYaAd4foKcH] = uNOB4PYhMVL;
                        SgDYwQbo6[SYaAd4foKcH] = Nr3zAg9WZb;
                        SYaAd4foKcH++;
                        text[uNOB4PYhMVL] = 'q';
                        text[Nr3zAg9WZb] = 'q';
                        break;
                    }
                    Nr3zAg9WZb--;
                };
            }
            uNOB4PYhMVL++;
        };
    }
    {
        uNOB4PYhMVL = 0;
        while (uNOB4PYhMVL < SYaAd4foKcH) {
            printf ("%d %d\n", SgDYwQbo6[uNOB4PYhMVL], YifLBg089mp[uNOB4PYhMVL]);
            uNOB4PYhMVL++;
        };
    };
}

