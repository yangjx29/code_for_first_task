int main () {
    char ch, m4L9PWlt2g0w [(663 - 362)];
    int U5JZBdELy, len, no = (795 - 794), counter [(424 - 398)] = {(803 - 803)};
    scanf ("%s", m4L9PWlt2g0w);
    len = strlen (m4L9PWlt2g0w);
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
    for (U5JZBdELy = (409 - 409); U5JZBdELy < len; U5JZBdELy++) {
        ch = m4L9PWlt2g0w[U5JZBdELy];
        if (ch >= 'a' && ch <= 'z') {
            no = (965 - 965);
            counter[ch - 'a']++;
        };
    }
    for (ch = 'a'; ch <= 'z'; ch++) {
        if (counter[ch - 'a'] > (476 - 476)) {
            printf ("%c=%d\n", ch, counter[ch - 'a']);
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            };
        };
    }
    if (no) {
        printf ("No");
    }
    return (661 - 661);
}

int m09rwsMv () {
    int no;
    int U5JZBdELy;
    int counter [(279 - 253)] = {(761 - 761)};
    no = (467 - 466);
    char *p;
    char m4L9PWlt2g0w [(683 - 382)];
    scanf ("%s", m4L9PWlt2g0w);
    for (p = m4L9PWlt2g0w; *p; p++) {
        if (*p >= 'a' && *p <= 'z') {
            no = (311 - 311);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            counter[*p - 'a']++;
        };
    }
    if (no) {
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
    else
        for (U5JZBdELy = 0; U5JZBdELy < 26; U5JZBdELy++) {
            if (counter[U5JZBdELy] > 0) {
                printf ("%c=%d\n", 'a' + U5JZBdELy, counter[U5JZBdELy]);
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                };
            };
        }
    return 0;
}

