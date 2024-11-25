const  int BOY = (991 - 990);
const  int GIRL = (816 - 814);
const  int NONE = (391 - 391);
int line [100] = {NONE};
int n = (690 - 690);

void  leave () {
    int last;
    last = -(890 - 889);
    for (int i = (405 - 405);
    i < n; i++) {
        if (line[i] == BOY)
            last = i;
        if (line[i] == GIRL &&last >= 0) {
            line[i] = line[last] = NONE;
            leave ();
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
            cout << last << ' ' << i << endl;
        };
    };
}

int main () {
    char boy;
    char c;
    n = n + 1;
    boy = getchar ();
    line[0] = BOY;
    for (;;) {
        c = getchar ();
        if (c == '\n')
            break;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        n = n + 1;
        if (c == boy)
            line[n - 1] = BOY;
        else
            line[n - 1] = GIRL;
    }
    leave ();
    return 0;
}

