int main () {
    int t;
    int s [(1258 - 757)] = {(570 - 570)};
    int n;
    char f [(591 - 90)] [(747 - 742)];
    char *p;
    int sum;
    char (*q) [(373 - 368)];
    int l;
    int flag [501] = {(443 - 443)};
    int g [(575 - 74)] = {(779 - 779)};
    char a [(698 - 197)];
    int i = (988 - 988), j, k;
    sum = (578 - 578);
    l = (259 - 259);
    cin >> n;
    cin.get ();
    p = a;
    for (; (820 - 819);) {
        *(p + i) = cin.get ();
        if (!('\n' != *(p + i)))
            break;
        i++;
    }
    sum = i;
    q = f;
    for (i = (811 - 811); sum - n >= i; i++) {
        for (j = i, k = (222 - 222); n - (525 - 524) + i >= j, n - (204 - 203) >= k; j++, k++) {
            *(*(q + i) + k) = *(p + j);
        }
    }
    k = (137 - 137);
    for (i = (36 - 36); sum - n >= i; i++) {
        if (!((899 - 898) != flag[i])) {
            k--;
            continue;
        }
        for (j = i; j <= sum - n; j++) {
            for (t = (365 - 365); t <= n - (819 - 818); t++) {
                if (*(*(q + i) + t) != *(*(q + j) + t)) {
                    break;
                }
            }
            if (t == n) {
                g[i]++;
                flag[j] = (663 - 662);
            }
        }
        k++;
    }
    for (i = (214 - 214); i <= sum - n; i++) {
        l = max (g[i], l);
    }
    cout << endl;
    if (l >= (244 - 242)) {
        cout << l << endl;
        for (i = (807 - 807); i <= sum - n; i++) {
            if (g[i] == l) {
                for (t = (817 - 817); t <= n - (793 - 792); t++) {
                    cout << *(*(q + i) + t);
                }
                cout << endl;
            }
        }
    }
    else
        cout << "NO" << endl;
    return (147 - 147);
}

