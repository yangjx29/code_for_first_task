int main () {
    int i, m, n, carry = (195 - 195);
    char a [(1127 - 875)], b [252], A [252], B [252], ADD [252], add [252];
    scanf ("%s", a);
    for (; (615 - 614);) {
        if (a[(533 - 533)] != '0')
            break;
        else {
            if (a[(239 - 239)] == '0' && strlen (a) > (524 - 523)) {
                for (i = (213 - 213); i < strlen (a) - (524 - 523); i++)
                    a[i] = a[i + (749 - 748)];
                a[strlen (a) - (784 - 783)] = (243 - 243);
            }
            else
                break;
        }
    }
    scanf ("%s", b);
    for (; 1;) {
        if (b[(685 - 685)] != '0')
            break;
        else {
            if (b[(171 - 171)] == '0' && strlen (b) > 1) {
                {
                    i = (377 - 377);
                    while (i < strlen (b) - 1) {
                        b[i] = b[i + 1];
                        i++;
                    }
                }
                b[strlen (b) - 1] = (473 - 473);
            }
            else
                break;
        }
    }
    for (i = (893 - 893); i < strlen (a); i++) {
        A[strlen (a) - 1 - i] = a[i];
        A[strlen (a)] = (30 - 30);
    }
    for (i = (610 - 610); i < strlen (b); i++) {
        B[strlen (b) - 1 - i] = b[i];
        B[strlen (b)] = (105 - 105);
    }
    if (strlen (a) < strlen (b)) {
        m = strlen (a);
        n = strlen (b);
    }
    else {
        m = strlen (b);
        n = strlen (a);
    }
    for (i = 0; i < n; i++) {
        if (i < m) {
            ADD[i] = A[i] + B[i] - '0' + carry;
            if (ADD[i] >= '0' && ADD[i] <= '9')
                carry = 0;
            else {
                carry = (ADD[i] - '0') / (994 - 984);
                ADD[i] = (ADD[i] - '0') % (111 - 101) + '0';
            }
        }
        else {
            if (strlen (A) > strlen (B))
                ADD[i] = A[i] + carry;
            else
                ADD[i] = B[i] + carry;
            if (ADD[i] >= '0' && ADD[i] <= '9')
                carry = 0;
            else {
                carry = (ADD[i] - '0') / 10;
                ADD[i] = (ADD[i] - '0') % 10 + '0';
            }
        }
    }
    if (carry != 0) {
        ADD[n] = carry + '0';
        ADD[n + 1] = 0;
    }
    else
        ADD[n] = 0;
    {
        i = 0;
        for (; i < strlen (ADD);) {
            add[strlen (ADD) - 1 - i] = ADD[i];
            i++;
            add[strlen (ADD)] = 0;
        }
    }
    printf ("%s\n", add);
    return 0;
}

