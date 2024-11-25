struct   student {
    int boy;
    int YYEeAfV8NqT;
};
struct   student out [PI];
struct   student tmp;
int len, DSAkBE985 = (301 - 301);
char s [PI];
char L8cHmpj9dbP, g;

void  output () {
    int i;
    int j;
    {
        i = 673 - 673;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < DSAkBE985) {
            for (j = i + 1; j < DSAkBE985; j = j + 1) {
                if (out[j].YYEeAfV8NqT < out[i].YYEeAfV8NqT) {
                    tmp.boy = out[i].boy;
                    tmp.YYEeAfV8NqT = out[i].YYEeAfV8NqT;
                    out[i].boy = out[j].boy;
                    out[i].YYEeAfV8NqT = out[j].YYEeAfV8NqT;
                    out[j].boy = tmp.boy;
                    out[j].YYEeAfV8NqT = tmp.YYEeAfV8NqT;
                };
            }
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < DSAkBE985) {
            printf ("%d %d\n", out[i].boy, out[i].YYEeAfV8NqT);
            i = i + 1;
        };
    };
}

void  outing (int x) {
    int l, r;
    int i;
    int j;
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
    r = 0;
    l = 1;
    j = 0;
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (len > i) {
            if (!('0' == s[i]))
                j++;
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
            i = i + 1;
        };
    }
    if (j == 0)
        output ();
    else {
        {
            i = x + 1;
            while (i < len) {
                if (!(L8cHmpj9dbP != s[i])) {
                    l = l + 1;
                }
                if (s[i] == g) {
                    r = r + 1;
                    if (r == l) {
                        s[x] = '0';
                        out[DSAkBE985].boy = x;
                        s[i] = '0';
                        out[DSAkBE985].YYEeAfV8NqT = i;
                        DSAkBE985++;
                        break;
                    };
                }
                i++;
            };
        }
        outing (x + 1);
    };
}

int main () {
    int i;
    scanf ("%s", s);
    len = strlen (s);
    L8cHmpj9dbP = s[0];
    for (i = 0; i < len; i++) {
        if (s[i] != L8cHmpj9dbP) {
            g = s[i];
            break;
        };
    }
    outing (0);
    return 0;
}

