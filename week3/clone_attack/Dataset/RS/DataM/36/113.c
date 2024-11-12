void  main () {
    int kqCKgs2IGN5, eiyclZptChu, m [(663 - 533)] = {0}, VjC8FxbU6BJZ [130] = {0};
    char O1I3YDSuA [300], kcEQLsj [300];
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
    scanf ("%s%s", O1I3YDSuA, kcEQLsj);
    if (strlen (O1I3YDSuA) != strlen (kcEQLsj))
        printf ("NO");
    else {
        {
            kqCKgs2IGN5 = 0;
            while (kqCKgs2IGN5 <= strlen (O1I3YDSuA) - (307 - 306)) {
                ++m[O1I3YDSuA[kqCKgs2IGN5]];
                ++VjC8FxbU6BJZ[kcEQLsj[kqCKgs2IGN5]];
                kqCKgs2IGN5 = kqCKgs2IGN5 + 1;
            };
        }
        {
            eiyclZptChu = 50;
            while (eiyclZptChu <= 122) {
                if (m[eiyclZptChu] != VjC8FxbU6BJZ[eiyclZptChu]) {
                    break;
                }
                eiyclZptChu = eiyclZptChu + 1;
            };
        }
        if (eiyclZptChu == 123)
            printf ("YES\n");
    };
}

