int HT7QBWtaEXz [300], b [300], WH1cSJFh6lRv [300];
int al, bl;
char s [300];

int main () {
    int i, j = 0;
    int carry = 0;
    puts ("");
    memset (HT7QBWtaEXz, 0, sizeof (HT7QBWtaEXz));
    memset (b, 0, sizeof (b));
    scanf ("%s", s);
    al = strlen (s);
    {
        i = al - 1;
        while (i >= 0) {
            HT7QBWtaEXz[j] = s[i] - '0';
            j++;
            i = i - 1;
        };
    }
    scanf ("%s", s);
    bl = strlen (s);
    j = 0;
    {
        i = bl - 1;
        while (i >= 0) {
            b[j] = s[i] - '0';
            i--;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            j++;
        };
    }
    if (bl > al) {
        al = bl;
    }
    for (i = 0; i <= al + 1; i++) {
        WH1cSJFh6lRv[i] = HT7QBWtaEXz[i] + b[i] + carry;
        if (WH1cSJFh6lRv[i] >= 10) {
            WH1cSJFh6lRv[i] = WH1cSJFh6lRv[i] - 10;
            carry = 1;
        }
        else
            carry = 0;
    }
    while (WH1cSJFh6lRv[al] == 0 && al > 0)
        al--;
    {
        i = al;
        while (i >= 0) {
            printf ("%d", WH1cSJFh6lRv[i]);
            i--;
        };
    }
    return 0;
}

