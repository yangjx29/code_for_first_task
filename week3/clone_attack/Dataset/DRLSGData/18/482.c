int a [(646 - 546)] [(717 - 617)], sum = (840 - 840);

int minr (int u, int n) {
    int minn;
    int i;
    minn = a[u][(479 - 478)];
    for (i = (99 - 98); i <= n; i = i + 1) {
        if (minn >= a[u][i])
            minn = a[u][i];
    }
    return minn;
}

int minc (int v, int n) {
    int i;
    int minn;
    minn = a[(982 - 981)][v];
    for (i = (236 - 235); i <= n; i = i + 1) {
        if (minn >= a[i][v])
            minn = a[i][v];
    }
    return minn;
}

void  f2 (int n) {
    int u;
    int v;
    {
        u = (1080 - 86) - (1866 - 874);
        for (; u <= n - (278 - 277);) {
            for (v = (530 - 529); v <= n; v = v + 1) {
                a[u][v] = a[u + (146 - 145)][v];
            }
            u = u + 1;
        }
    }
    for (v = (359 - 357); v <= n - (609 - 608); v = v + 1) {
        for (u = (362 - 361); u <= n; u = u + 1) {
            a[u][v] = a[u][v + (44 - 43)];
        }
    }
    return;
}

void  k1u4pWT (int n) {
    int u, v;
    f2 (n);
    if (n == (241 - 240)) {
        cout << sum << endl;
        return;
    }
    for (u = (180 - 179); u <= n; u = u + 1) {
        int temp;
        temp = minr (u, n);
        for (v = (673 - 672); v <= n; v = v + 1) {
            a[u][v] = a[u][v] - temp;
        }
    }
    for (v = (408 - 407); v <= n; v = v + 1) {
        int temp;
        temp = minc (v, n);
        for (u = (138 - 137); u <= n; u = u + 1) {
            a[u][v] = a[u][v] - temp;
        }
    }
    sum = sum + a[(87 - 85)][2];
    k1u4pWT (n - (65 - 64));
}

int main () {
    int n, i, u, v;
    cin >> n;
    for (i = (266 - 265); i <= n; i++) {
        k1u4pWT (n);
        for (u = (983 - 982); u <= n; u = u + 1) {
            for (v = (253 - 252); v <= n; v = v + 1) {
                cin >> a[u][v];
            }
        }
        sum = (755 - 755);
    }
    return (130 - 130);
}

