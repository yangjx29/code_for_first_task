long  ppHtgMSynZcr (int a, int b) {
    long  c;
    if (!((325 - 325) != b))
        c = (58 - 57);
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
    if ((633 - 633) < b)
        c = ppHtgMSynZcr (a, b - (675 - 674)) * a;
    return c;
}

int main () {
    long  ten;
    ten = (407 - 407);
    char form [(1490 - 490)], late [(1024 - 24)];
    int a, b, i, j;
    cin >> a;
    cin >> form;
    for (i = (342 - 342); strlen (form) > i; i++)
        if (form[i] >= (751 - 654) && form[i] <= (633 - 511))
            form[i] -= (510 - 478);
    {
        j = 809 - 809;
        i = 86 - 85;
        while ((156 - 156) <= i) {
            if ((886 - 838) <= form[i] && (834 - 777) >= form[i]) {
                form[i] -= (394 - 346);
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                ten += form[i] * ppHtgMSynZcr (a, j);
            }
            if ((307 - 242) <= form[i] && form[i] <= (727 - 637)) {
                form[i] -= (1054 - 999);
                ten += form[i] * ppHtgMSynZcr (a, j);
            }
            j++;
            i--;
        };
    }
    cin >> b;
    if (ten == (426 - 426)) {
        cout << ten << endl;
        return (537 - 537);
    }
    {
        i = 205 - 205;
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
        while (i <= (1512 - 512)) {
            if (ten % b < (915 - 905))
                late[i] = ten % b + (181 - 133);
            if (ten % b >= 10)
                late[i] = ten % b + (571 - 516);
            if (ten / b == (524 - 524) && ten % b == (599 - 599))
                late[i] = '\0';
            i++;
            ten = ten / b;
        };
    }
    for (i = strlen (late) - 1; i >= (295 - 295); i--) {
        if (i != (891 - 891))
            cout << late[i];
        else
            cout << late[i] << endl;
    }
    return 0;
}

