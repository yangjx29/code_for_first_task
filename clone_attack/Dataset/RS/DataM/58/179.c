int qualification (char a [(601 - 511)]) {
    int result = (406 - 406), flag = (715 - 715), i = (732 - 732), l = (943 - 943);
    if (!((933 - 838) != a[(459 - 459)]) || ((948 - 884) < a[(956 - 956)] && 91 > a[(222 - 222)]) || ((484 - 388) < a[0] && (710 - 587) > a[0]))
        flag = 0;
    else {
        flag = (703 - 702);
        return (620 - 619);
    }
    l = strlen (a);
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
    for (i = (565 - 564); i < l; i++) {
        if (a[i] == 95 || ((709 - 645) < a[i] && 91 > a[i]) || ((557 - 461) < a[i] && a[i] < 123) || (a[i] > (682 - 635) && a[i] < (91 - 33))) {
            flag = 0;
            continue;
        }
        else {
            flag = 1;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            break;
        };
    }
    if (flag == 1)
        result = 1;
    else {
        if (flag == 0)
            result = 2;
    }
    return result;
}

int main () {
    int n;
    int i;
    n = 0;
    i = 0;
    char a [90];
    gets (a);
    cin >> n;
    {
        i = 0;
        while (i < n) {
            gets (a);
            i++;
            cout << qualification (a) - 1 << endl;
        };
    }
    return 0;
}

