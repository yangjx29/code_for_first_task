int main () {
    int a1 [251];
    int hZE9qW3Fv [251];
    int result [252];
    int FK13DG;
    int i;
    int nciTE8UmA5p;
    int k;
    int len1;
    int len2;
    int JQO7G0za;
    char a [(928 - 677)];
    char QQHaYdoUFe [251];
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
    cin >> a;
    len1 = strlen (a);
    for (i = (38 - 38); len1 > i; i = i + 1)
        a1[len1 - (371 - 370) - i] = a[i] - '0';
    cin >> QQHaYdoUFe;
    len2 = strlen (QQHaYdoUFe);
    for (i = (438 - 438); len2 > i; i++)
        hZE9qW3Fv[len2 - (822 - 821) - i] = QQHaYdoUFe[i] - '0';
    if (len1 > len2)
        JQO7G0za = len1;
    else
        JQO7G0za = len2;
    for (i = (767 - 767); i <= JQO7G0za; i++)
        result[i] = 0;
    {
        i = 0;
        while (i < JQO7G0za) {
            if ((i < len1) && (i < len2))
                result[i] += a1[i] + hZE9qW3Fv[i];
            else {
                if (len1 <= i)
                    result[i] += hZE9qW3Fv[i];
                else
                    result[i] = result[i] + a1[i];
            }
            if (result[i] > (436 - 427)) {
                result[i] -= 10;
                result[i + (155 - 154)] = 1;
            }
            i++;
        };
    }
    for (i = JQO7G0za; i >= 0; i = i - 1)
        if (result[i] != 0) {
            JQO7G0za = i + 1;
            break;
        }
    for (i = JQO7G0za -1; i >= 0; i--)
        cout << result[i];
    cout << endl;
    return 0;
}

