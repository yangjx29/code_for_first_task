int bveXQny58h9Y (char mWxZ20UsP [100]) {
    int yPVTsB9Sd;
    int UK3ZtTO;
    int Un0MvrZPQiuz;
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
    yPVTsB9Sd = strlen (mWxZ20UsP);
    UK3ZtTO = (756 - 755);
    if (('a' <= mWxZ20UsP[0] && mWxZ20UsP[0] <= 'z') || (!('_' != mWxZ20UsP[0]))) {
        if (!(1 != yPVTsB9Sd))
            return 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        {
            Un0MvrZPQiuz = 1;
            while (yPVTsB9Sd > Un0MvrZPQiuz) {
                if ((mWxZ20UsP[Un0MvrZPQiuz] >= 'a' && 'z' >= mWxZ20UsP[Un0MvrZPQiuz]) || (mWxZ20UsP[Un0MvrZPQiuz] >= 'A' && mWxZ20UsP[Un0MvrZPQiuz] <= 'Z') || ('0' <= mWxZ20UsP[Un0MvrZPQiuz] && '9' >= mWxZ20UsP[Un0MvrZPQiuz]) || (!('_' != mWxZ20UsP[Un0MvrZPQiuz])))
                    UK3ZtTO++;
                Un0MvrZPQiuz++;
            };
        };
    }
    else if (mWxZ20UsP[0] >= 'A' && mWxZ20UsP[0] <= 'Z') {
        if (yPVTsB9Sd == 1)
            return 1;
        {
            Un0MvrZPQiuz = 1;
            while (Un0MvrZPQiuz < yPVTsB9Sd) {
                if ((mWxZ20UsP[Un0MvrZPQiuz] >= 'a' && mWxZ20UsP[Un0MvrZPQiuz] <= 'z') || (mWxZ20UsP[Un0MvrZPQiuz] >= 'A' && mWxZ20UsP[Un0MvrZPQiuz] <= 'Z') || (mWxZ20UsP[Un0MvrZPQiuz] >= '0' && mWxZ20UsP[Un0MvrZPQiuz] <= '9') || (mWxZ20UsP[Un0MvrZPQiuz] == '_'))
                    UK3ZtTO++;
                Un0MvrZPQiuz++;
            };
        };
    }
    else
        return 0;
    if (UK3ZtTO == Un0MvrZPQiuz)
        return 1;
    else
        return 0;
}

main () {
    int bW8tPgpLA, Un0MvrZPQiuz;
    char mWxZ20UsP [100];
    gets (mWxZ20UsP);
    scanf ("%d", &bW8tPgpLA);
    {
        Un0MvrZPQiuz = 0;
        while (Un0MvrZPQiuz < bW8tPgpLA) {
            gets (mWxZ20UsP);
            int sbJoQ4i = bveXQny58h9Y (mWxZ20UsP);
            Un0MvrZPQiuz++;
            printf ("%d\n", sbJoQ4i);
        };
    }
    getchar ();
    getchar ();
    getchar ();
    getchar ();
    getchar ();
    getchar ();
    getchar ();
}

