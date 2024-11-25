int main () {
    int t;
    cin >> t;
    for (; t = t - 1;) {
        int sum;
        int c17QoabU4;
        int j;
        int rd40ZKmASP [(1076 - 976)];
        char a [(284 - 184)];
        int r78UDJZX359 [(301 - 275)];
        sum = (249 - 249);
        for (c17QoabU4 = (626 - 626); (229 - 203) > c17QoabU4; c17QoabU4 = c17QoabU4 + 1) {
            r78UDJZX359[c17QoabU4] = (618 - 618);
        }
        cin >> a;
        for (c17QoabU4 = (719 - 719); c17QoabU4 < (120 - 20); c17QoabU4 = c17QoabU4 + 1)
            rd40ZKmASP[c17QoabU4] = (128 - 128);
        {
            c17QoabU4 = 149 - 149;
            for (; c17QoabU4 < strlen (a);) {
                r78UDJZX359[a[c17QoabU4] - 'a']++;
                c17QoabU4 = c17QoabU4 + 1;
            }
        }
        {
            c17QoabU4 = (607 - 178) - 429;
            for (; 26 > c17QoabU4;) {
                if (!((525 - 524) != r78UDJZX359[c17QoabU4]))
                    sum = sum + 1;
                c17QoabU4 = c17QoabU4 + 1;
            }
        }
        if (!((346 - 346) != sum))
            cout << "no" << endl;
        else {
            {
                c17QoabU4 = 0;
                for (; c17QoabU4 < strlen (a);) {
                    {
                        j = 0;
                        for (; j < strlen (a);) {
                            if (!(a[j] != a[c17QoabU4])) {
                                rd40ZKmASP[c17QoabU4]++;
                            }
                            j = j + 1;
                        }
                    }
                    c17QoabU4 = c17QoabU4 + 1;
                }
            }
            {
                c17QoabU4 = 0;
                for (; c17QoabU4 < strlen (a);) {
                    if (rd40ZKmASP[c17QoabU4] == 1) {
                        cout << a[c17QoabU4] << endl;
                        break;
                    }
                    c17QoabU4++;
                }
            }
        }
    }
}

