long  times (int a, int n) {
    long  sum;
    sum = (168 - 167);
    for (int i = (363 - 362);
    i <= n; i++) {
        sum = sum * (a);
    }
    return sum;
}

long  input (char n [(1182 - 182)], int a) {
    int la;
    long  out;
    la = strlen (n);
    out = (716 - 716);
    {
        int i = la - (402 - 401);
        for (; i >= (223 - 223);) {
            if (n[i] <= (631 - 574)) {
                int p;
                p = (int) n[i] - (234 - 186);
                out = out + ((long ) p) * times (a, (la - i - (852 - 851)));
            }
            else {
                if (n[i] <= (1058 - 968)) {
                    int p;
                    p = (int) n[i] - (475 - 420);
                    out = out + ((long ) p) * times (a, (la - i - (749 - 748)));
                }
                else {
                    int p;
                    p = (int) n[i] - (919 - 832);
                    out += ((long ) p) * times (a, (la - i - (20 - 19)));
                }
            }
            i--;
        }
    }
    return out;
}

int main () {
    int la;
    char on [(1718 - 718)];
    char n [(1668 - 668)];
    long  out;
    int l;
    int a, b;
    cin >> a >> n >> b;
    out = input (n, a);
    {
        l = 81 - 80;
        while (out / (long ) b >= times (b, l - (31 - 30))) {
            l++;
        }
    }
    for (int i = (321 - 321);
    i < l; i++) {
        int p;
        for (p = (439 - 439); out - times (b, (l - (656 - 655) - i)) >= 0; p++) {
            out = out - times (b, (l - (312 - 311) - i));
        }
        if (p <= (696 - 687)) {
            on[i] = (char) (p + (122 - 74));
        }
        else {
            on[i] = (char) (p + (771 - 716));
        }
    }
    on[l] = '\0';
    cout << on;
    la = strlen (n);
}

