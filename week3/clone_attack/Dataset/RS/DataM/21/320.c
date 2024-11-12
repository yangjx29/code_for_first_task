int main () {
    float aXz9y5l;
    float hJk4GZa9Ov8 [300] = {0};
    float O2XS4Aj;
    aXz9y5l = 0;
    int JD17RQN5TkSl, i, t = (268 - 268), a [300], mz1awup = (543 - 543), sXmWqbf7hHn [300] = {0};
    cin >> JD17RQN5TkSl;
    for (i = 0; JD17RQN5TkSl > i; i = i + 1) {
        cin >> a[i];
        mz1awup = mz1awup + a[i];
    }
    O2XS4Aj = (float) mz1awup / JD17RQN5TkSl;
    for (i = 0; JD17RQN5TkSl > i; i = i + 1) {
        hJk4GZa9Ov8[i] = fabs (a[i] - O2XS4Aj);
    }
    {
        i = 0;
        while (JD17RQN5TkSl > i) {
            if (aXz9y5l < hJk4GZa9Ov8[i])
                aXz9y5l = hJk4GZa9Ov8[i];
            i = i + 1;
        };
    }
    for (i = 0; i < JD17RQN5TkSl; i++) {
        if (!(aXz9y5l != hJk4GZa9Ov8[i])) {
            sXmWqbf7hHn[t] = i;
            t = t + 1;
        };
    }
    for (i = 0; i < t; i++) {
        if (i < t - 1)
            cout << a[sXmWqbf7hHn[i]] << ",";
        else
            cout << a[sXmWqbf7hHn[i]];
    }
    return 0;
}

