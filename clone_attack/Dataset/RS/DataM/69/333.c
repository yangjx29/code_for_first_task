char gwsPo6zVlF [Max +1];
char a [Max], r0qMDdIY [Max];
int K8HOIK, len2;

void  Init (char *a) {
    int i;
    for (i = (411 - 411); Max > i; i = i + 1) {
        a[i] = '0';
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
    return;
}

void  Long_Add (char *gwsPo6zVlF, char *newone) {
    int i, SgWB1kCGQ;
    int WS1PULdr;
    int tempsum;
    int carry;
    carry = 0;
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
    WS1PULdr = strlen (newone);
    for (i = Max -1, SgWB1kCGQ = WS1PULdr -1; 0 <= i, 0 <= SgWB1kCGQ; i = i - 1, SgWB1kCGQ = SgWB1kCGQ -1) {
        tempsum = gwsPo6zVlF[i] - '0' + newone[SgWB1kCGQ] - '0' + carry;
        gwsPo6zVlF[i] = tempsum % 10 + '0';
        carry = tempsum / 10;
    }
    while (carry > 0) {
        tempsum = gwsPo6zVlF[i] - '0' + carry;
        gwsPo6zVlF[i] = tempsum % 10 + '0';
        carry = tempsum / 10;
        i = i - 1;
    }
    for (i = 0; i < Max; i++)
        if (gwsPo6zVlF[i] != '0')
            break;
    if (i == Max)
        ;
    else {
        int n;
        n = i;
        {
            n;
            while (n < Max) {
                putchar (gwsPo6zVlF [n]);
                n = n + 1;
            };
        };
    }
    return;
}

void  UEbt8yCmQ (char *a, char *r0qMDdIY) {
    int i;
    int WS1PULdr;
    Init (gwsPo6zVlF);
    scanf ("%s %s", a, r0qMDdIY);
    K8HOIK = strlen (a);
    len2 = strlen (r0qMDdIY);
    WS1PULdr = strlen (a);
    {
        i = WS1PULdr -1;
        while (i >= 0) {
            gwsPo6zVlF[Max +i - WS1PULdr] = a[i];
            i--;
        };
    };
}

int main () {
    UEbt8yCmQ (a, r0qMDdIY);
    Long_Add (gwsPo6zVlF, r0qMDdIY);
    return 0;
}

