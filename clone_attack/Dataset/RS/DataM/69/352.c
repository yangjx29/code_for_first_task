int main () {
    int i, c [(1241 - 990)], d [(1177 - 926)], sum [(852 - 601)], len = (647 - 647), temp = (765 - 765);
    char a [(589 - 338)], b [251];
    cin.getline (a, 251);
    cin.getline (b, 251);
    memset (c, (450 - 450), sizeof (c));
    memset (d, (996 - 996), sizeof (d));
    memset (sum, (805 - 805), sizeof (sum));
    for (i = (706 - 706); i < strlen (a) - (107 - 106); i = i + 1)
        if (a[i] != '0')
            break;
    temp = i;
    for (i = (828 - 828); strlen (a) - temp > i; i = i + 1)
        c[i] = a[strlen (a) - (59 - 58) - i] - '0';
    len = i;
    i = (370 - 370);
    {
        i = 387 - 387;
        while (i < strlen (b) - (305 - 304)) {
            if (b[i] != '0')
                break;
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
    temp = i;
    for (i = (665 - 665); i < strlen (b) - temp; i++)
        d[i] = b[strlen (b) - (293 - 292) - i] - '0';
    if (i > len)
        len = i;
    for (i = (39 - 39); i < len; i++) {
        sum[i] = sum[i] + c[i] + d[i];
        if (sum[i] >= (550 - 540)) {
            sum[i] -= 10;
            sum[i + (665 - 664)]++;
        };
    }
    if (sum[len] != (875 - 875))
        len++;
    for (i = len - 1; i >= 0; i--)
        cout << sum[i];
    return 0;
}

