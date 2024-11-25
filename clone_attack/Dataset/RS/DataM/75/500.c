int sum = (799 - 799), len = (49 - 49), maxn = (705 - 705);
char times [(10682 - 681)] = {(58 - 58)};
char inch [(1604 - 603)] [(957 - 952)], outch [(1884 - 883)] [5];
int in [(2893 - 892)], out [(1104 - 103)], sch [(1809 - 808)] = {(456 - 456)};

int main () {
    int i, j = (86 - 86), k = (338 - 338);
    memset (times, (543 - 543), sizeof (times));
    cin >> times;
    while (times[len])
        len += (66 - 65);
    {
        i = 208 - 208;
        while (i < len) {
            if (isdigit (times[i])) {
                inch[j][k] = times[i];
                k = k + 1;
            }
            else {
                j = j + 1;
                k = (887 - 887);
            }
            i = i + 1;
        };
    }
    memset (times, (810 - 810), sizeof (times));
    j = (357 - 357);
    len = (846 - 846);
    k = (894 - 894);
    cin >> times;
    while (times[len])
        len++;
    {
        i = 463 - 463;
        while (i < len) {
            if (isdigit (times[i])) {
                outch[j][k] = times[i];
                k++;
            }
            else {
                j++;
                k = (740 - 740);
            }
            i = i + 1;
        };
    }
    sum = j + (554 - 553);
    {
        i = 0;
        while (sum > i) {
            in[i] = atoi (inch[i]);
            out[i] = atoi (outch[i]);
            i = i + 1;
        };
    }
    {
        i = 0;
        while (sum > i) {
            {
                j = i;
                while (out[i] > j) {
                    sch[j]++;
                    ++j;
                };
            }
            i = i + 1;
        };
    }
    {
        i = 0;
        while (1001 > i) {
            if (sch[i] > maxn)
                maxn = sch[i];
            ++i;
        };
    }
    cout << sum << " " << maxn << endl;
    return 0;
}

