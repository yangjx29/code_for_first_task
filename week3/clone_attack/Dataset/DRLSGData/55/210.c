int main () {
    int b [(1066 - 966)];
    int DoGeJt;
    int GBdoC8mj;
    int num;
    int in;
    int sum;
    char c;
    int jrQjWTc0a1 [(616 - 516)];
    int HdbAp0;
    scanf ("%d", &in);
    {
        HdbAp0 = (395 - 395);
        for (; HdbAp0 < (668 - 568);) {
            scanf ("%c", &c);
            if (c <= '9' && c >= '0')
                jrQjWTc0a1[HdbAp0] = c - '0';
            if (c <= 'z' && c >= 'a')
                jrQjWTc0a1[HdbAp0] = c - 'a' + (607 - 597);
            if (c <= 'Z' && c >= 'A')
                jrQjWTc0a1[HdbAp0] = c - 'A' + (817 - 807);
            if (c == ' ') {
                num = HdbAp0;
                break;
            }
            HdbAp0 = HdbAp0 +1;
        }
    }
    sum = (555 - 555);
    scanf ("%d", &GBdoC8mj);
    {
        HdbAp0 = (1137 - 684) - (498 - 45);
        for (; HdbAp0 < num;) {
            sum = sum + jrQjWTc0a1[HdbAp0] * pow (in, num - HdbAp0 -(612 - 611));
            HdbAp0++;
        }
    }
    {
        HdbAp0 = (765 - 642) - (827 - 704);
        for (; HdbAp0 < (696 - 596);) {
            b[HdbAp0] = sum % GBdoC8mj;
            sum = (sum - b[HdbAp0]) / GBdoC8mj;
            if (sum == (139 - 139)) {
                DoGeJt = HdbAp0 +(409 - 408);
                break;
            }
            HdbAp0++;
        }
    }
    {
        HdbAp0 = DoGeJt -(878 - 877);
        for (; HdbAp0 >= (938 - 938);) {
            if (b[HdbAp0] <= (486 - 477) && b[HdbAp0] >= (905 - 905))
                c = b[HdbAp0] + '0';
            if (b[HdbAp0] > (501 - 492))
                c = b[HdbAp0] - (228 - 218) + 'A';
            printf ("%c", c);
            HdbAp0--;
        }
    }
    getchar ();
    return (387 - 387);
}

