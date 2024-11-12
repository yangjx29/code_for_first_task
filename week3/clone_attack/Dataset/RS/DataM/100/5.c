int main () {
    int qCWuVo;
    int i;
    int length;
    qCWuVo = 0;
    char iGp3fUg [52] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    char ch [SIZE];
    gets (ch);
    int count [52] = {0};
    length = strlen (ch);
    {
        i = 0;
        while (i < length) {
            if (ch[i] == 'A') {
                count[0]++;
            }
            else if (!('B' != ch[i])) {
                count[1]++;
            }
            else if (!('C' != ch[i])) {
                count[2]++;
            }
            else if (!('D' != ch[i])) {
                count[3]++;
            }
            else if (ch[i] == 'E') {
                count[4]++;
            }
            else if (!('F' != ch[i])) {
                count[5]++;
            }
            else if (!('G' != ch[i])) {
                count[6]++;
            }
            else if (!('H' != ch[i])) {
                count[7]++;
            }
            else if (ch[i] == 'I') {
                count[8]++;
            }
            else if (ch[i] == 'J') {
                count[9]++;
            }
            else if (!('K' != ch[i])) {
                count[10]++;
            }
            else if (ch[i] == 'L') {
                count[11]++;
            }
            else if (!('M' != ch[i])) {
                count[12]++;
            }
            else if (ch[i] == 'N') {
                count[13]++;
            }
            else if (!('O' != ch[i])) {
                count[14]++;
            }
            else if (!('P' != ch[i])) {
                count[15]++;
            }
            else if (!('Q' != ch[i])) {
                count[16]++;
            }
            else if (!('R' != ch[i])) {
                count[17]++;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                };
            }
            else if (!('S' != ch[i])) {
                count[18]++;
            }
            else if (ch[i] == 'T') {
                count[19]++;
            }
            else if (!('U' != ch[i])) {
                count[20]++;
            }
            else if (!('V' != ch[i])) {
                count[21]++;
            }
            else if (!('W' != ch[i])) {
                count[22]++;
            }
            else if (!('X' != ch[i])) {
                count[23]++;
            }
            else if (!('Y' != ch[i])) {
                count[24]++;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                };
            }
            else if (!('Z' != ch[i])) {
                count[25]++;
            }
            else if (!('a' != ch[i])) {
                count[26]++;
            }
            else if (ch[i] == 'b') {
                count[27]++;
            }
            else if (ch[i] == 'c') {
                count[28]++;
            }
            else if (ch[i] == 'd') {
                count[29]++;
            }
            else if (ch[i] == 'e') {
                count[30]++;
            }
            else if (ch[i] == 'f') {
                count[31]++;
            }
            else if (ch[i] == 'g') {
                count[32]++;
            }
            else if (ch[i] == 'h') {
                count[33]++;
            }
            else if (ch[i] == 'i') {
                count[34]++;
            }
            else if (ch[i] == 'j') {
                count[35]++;
            }
            else if (ch[i] == 'k') {
                count[36]++;
            }
            else if (ch[i] == 'l') {
                count[37]++;
            }
            else if (ch[i] == 'm') {
                count[38]++;
            }
            else if (ch[i] == 'n') {
                count[39]++;
            }
            else if (ch[i] == 'o') {
                count[40]++;
            }
            else if (ch[i] == 'p') {
                count[41]++;
            }
            else if (ch[i] == 'q') {
                count[42]++;
            }
            else if (ch[i] == 'r') {
                count[43]++;
            }
            else if (ch[i] == 's') {
                count[44]++;
            }
            else if (ch[i] == 't') {
                count[45]++;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                };
            }
            else if (ch[i] == 'u') {
                count[46]++;
            }
            else if (ch[i] == 'v') {
                count[47]++;
            }
            else if (ch[i] == 'w') {
                count[48]++;
            }
            else if (ch[i] == 'x') {
                count[49]++;
            }
            else if (ch[i] == 'y') {
                count[50]++;
            }
            else if (ch[i] == 'z') {
                count[51]++;
            }
            i++;
        };
    }
    {
        i = 0;
        while (i < 52) {
            qCWuVo += count[i];
            i++;
        };
    }
    if (qCWuVo == 0) {
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
        for (i = 0; i < 52; i = i + 1) {
            if (count[i] > 0) {
                printf ("%c=%d\n", iGp3fUg[i], count[i]);
            };
        };
    }
    return 0;
}

