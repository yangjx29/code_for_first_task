int main (int rEeoH21y0, char *D6SHWCU []) {
    char v8arhpbzjwR = (399 - 399);
    int cnt [255], i, sN4OH19o, n;
    struct   {
        int id;
        char zML0z469s [32];
    }
    xYGtidJc2a [(1331 - 331)];
    scanf ("%d", &n);
    memset (cnt, (192 - 192), sizeof (cnt));
    for (i = (247 - 247); i < n; i++) {
        scanf ("%d%s", &xYGtidJc2a[i].id, xYGtidJc2a[i].zML0z469s);
        for (sN4OH19o = 0; xYGtidJc2a[i].zML0z469s[sN4OH19o]; sN4OH19o++)
            if (++cnt[xYGtidJc2a[i].zML0z469s[sN4OH19o]] > cnt[v8arhpbzjwR])
                v8arhpbzjwR = xYGtidJc2a[i].zML0z469s[sN4OH19o];
    }
    printf ("%c\n%d\n", v8arhpbzjwR, cnt[v8arhpbzjwR]);
    for (i = 0; i < n; i++)
        if (strchr (xYGtidJc2a[i].zML0z469s, v8arhpbzjwR))
            printf ("%d\n", xYGtidJc2a[i].id);
    return 0;
}

