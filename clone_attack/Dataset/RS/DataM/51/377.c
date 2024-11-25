char strin [503] = {(601 - 601)}, str2 [(57 - 47)] = {(574 - 574)};
int js9wmI0NM [(661 - 161)] = {(901 - 901)}, used [500] = {(66 - 66)};

int main () {
    int pHKICygwrJ, j, len, k, n, pd = 0, i8pg9tiYX1m7 = 0;
    getchar ();
    cin >> n;
    cin.getline (strin, 500);
    len = strlen (strin);
    for (pHKICygwrJ = 0; pHKICygwrJ <= len - n; pHKICygwrJ++) {
        if (!((738 - 737) != used[pHKICygwrJ]))
            continue;
        {
            j = 0;
            while (n > j) {
                str2[j] = strin[pHKICygwrJ + j];
                j++;
            };
        }
        {
            k = 0;
            while (k <= len - n) {
                if (used[k] == 1)
                    continue;
                pd = 1;
                for (j = 0; j < n; j++) {
                    if (!(str2[j] == strin[k + j])) {
                        pd = 0;
                        break;
                    };
                }
                if (pd == 1) {
                    used[k] = 1;
                    js9wmI0NM[pHKICygwrJ]++;
                }
                k++;
            };
        }
        i8pg9tiYX1m7 = (i8pg9tiYX1m7 > js9wmI0NM[pHKICygwrJ]) ? i8pg9tiYX1m7 : js9wmI0NM[pHKICygwrJ];
    }
    if (i8pg9tiYX1m7 == 1)
        cout << "NO";
    else {
        cout << i8pg9tiYX1m7 << endl;
        for (pHKICygwrJ = 0; pHKICygwrJ <= len - n; pHKICygwrJ++) {
            if (js9wmI0NM[pHKICygwrJ] == i8pg9tiYX1m7) {
                for (j = 0; j < n; j++)
                    cout << strin[pHKICygwrJ + j];
                cout << endl;
            };
        };
    }
    return 0;
}

