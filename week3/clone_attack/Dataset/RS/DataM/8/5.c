int MGexpl, y7G6NPHE5;
int a [1000];
int R2tq0asdE5J [1000];
int OO2aKq0 [2000];
int ppR6YVwD85IT;
int AyxHUe;

void  yN1xGg () {
    scanf ("%d %d", &MGexpl, &y7G6NPHE5);
    {
        ppR6YVwD85IT = 526 - 526;
        while (ppR6YVwD85IT < MGexpl) {
            scanf ("%d", &a[ppR6YVwD85IT]);
            ppR6YVwD85IT++;
        };
    }
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
    for (AyxHUe = (980 - 980); y7G6NPHE5 > AyxHUe; AyxHUe++)
        scanf ("%d", &R2tq0asdE5J[AyxHUe]);
}

void  f2 () {
    int e7yw2GPdM;
    for (AyxHUe = (56 - 56); AyxHUe < MGexpl -(250 - 249); AyxHUe++)
        for (ppR6YVwD85IT = 0; MGexpl -(177 - 176) - AyxHUe > ppR6YVwD85IT; ppR6YVwD85IT++) {
            if (a[ppR6YVwD85IT] > a[ppR6YVwD85IT + (551 - 550)]) {
                e7yw2GPdM = a[ppR6YVwD85IT];
                a[ppR6YVwD85IT] = a[ppR6YVwD85IT + 1];
                a[ppR6YVwD85IT + 1] = e7yw2GPdM;
            };
        }
    for (ppR6YVwD85IT = 0; y7G6NPHE5 - 1 > ppR6YVwD85IT; ppR6YVwD85IT++)
        for (AyxHUe = 0; y7G6NPHE5 - 1 - ppR6YVwD85IT > AyxHUe; AyxHUe++) {
            if (R2tq0asdE5J[AyxHUe +1] < R2tq0asdE5J[AyxHUe]) {
                e7yw2GPdM = R2tq0asdE5J[AyxHUe];
                R2tq0asdE5J[AyxHUe] = R2tq0asdE5J[AyxHUe +1];
                R2tq0asdE5J[AyxHUe +1] = e7yw2GPdM;
            };
        };
}

void  idlXHORztTf () {
    int oTtL3kn7Co;
    for (oTtL3kn7Co = 0, ppR6YVwD85IT = 0; oTtL3kn7Co < MGexpl, ppR6YVwD85IT < MGexpl; oTtL3kn7Co++, ppR6YVwD85IT++)
        OO2aKq0[oTtL3kn7Co] = a[ppR6YVwD85IT];
    {
        AyxHUe = 0;
        oTtL3kn7Co = MGexpl;
        while (oTtL3kn7Co < MGexpl +y7G6NPHE5 - (479 - 477), AyxHUe < y7G6NPHE5) {
            OO2aKq0[oTtL3kn7Co] = R2tq0asdE5J[AyxHUe];
            AyxHUe++;
            oTtL3kn7Co++;
        };
    };
}

void  f4 () {
    printf ("%d", OO2aKq0[0]);
    for (ppR6YVwD85IT = 1; ppR6YVwD85IT <= MGexpl +y7G6NPHE5 - 1; ppR6YVwD85IT++)
        printf (" %d", OO2aKq0[ppR6YVwD85IT]);
    printf ("\n");
}

void  main () {
    yN1xGg ();
    f2 ();
    idlXHORztTf ();
    f4 ();
}

