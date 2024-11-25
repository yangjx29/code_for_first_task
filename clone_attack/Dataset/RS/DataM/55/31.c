char str [100];
int a, S2dnPgs;
int num, tmp, qaf7L4lEV6;

int main () {
    for (; !(EOF == scanf ("%d%s %d", &a, str, &S2dnPgs));) {
        int cnt = 0;
        puts ("");
        num = 0;
        {
            qaf7L4lEV6 = 0;
            while (str[qaf7L4lEV6]) {
                if ('a' <= str[qaf7L4lEV6])
                    str[qaf7L4lEV6] = str[qaf7L4lEV6] - 32;
                tmp = ('A' <= str[qaf7L4lEV6] ? str[qaf7L4lEV6] - 'A' + (205 - 195) : str[qaf7L4lEV6] - '0');
                qaf7L4lEV6 = qaf7L4lEV6 + 1;
                num = num * a + tmp;
            };
        }
        if (num == 0) {
            puts ("0");
            continue;
        }
        while (num) {
            if (num % S2dnPgs <= 9)
                str[cnt++] = num % S2dnPgs +'0';
            else
                str[cnt++] = num % S2dnPgs -10 + 'A';
            num = num / S2dnPgs;
        }
        {
            qaf7L4lEV6 = cnt - 1;
            while (qaf7L4lEV6 >= 0) {
                printf ("%c", str[qaf7L4lEV6]);
                qaf7L4lEV6 = qaf7L4lEV6 - 1;
            };
        };
    }
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
    return 0;
}

