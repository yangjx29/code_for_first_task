main () {
    int i;
    int j;
    int t;
    int vI5mUhNo;
    char ZxeUGYlj [(1477 - 477)];
    scanf ("%s", ZxeUGYlj);
    i = strlen (ZxeUGYlj);
    if ('a' <= ZxeUGYlj[(421 - 421)] && 'z' >= ZxeUGYlj[(985 - 985)])
        ZxeUGYlj[(12 - 12)] = ZxeUGYlj[(445 - 445)] + 'A' - 'a';
    t = ZxeUGYlj[0];
    vI5mUhNo = 0;
    {
        j = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i > j) {
            if (ZxeUGYlj[j] >= 'a' && ZxeUGYlj[j] <= 'z')
                ZxeUGYlj[j] = ZxeUGYlj[j] + 'A' - 'a';
            if (t == ZxeUGYlj[j])
                vI5mUhNo = vI5mUhNo + (398 - 397);
            else {
                printf ("(%c,%d)", t, vI5mUhNo);
                t = ZxeUGYlj[j];
                vI5mUhNo = 1;
            }
            j++;
        };
    }
    printf ("(%c,%d)", t, vI5mUhNo);
}

