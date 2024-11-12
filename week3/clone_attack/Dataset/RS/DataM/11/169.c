int main () {
    int ANQKSdxmnF;
    int month;
    int o9hoFXTC;
    int Q9tzULk;
    scanf ("%d%d%d", &ANQKSdxmnF, &month, &o9hoFXTC);
    if (!(1 != month))
        Q9tzULk = o9hoFXTC;
    else {
        if (!(2 != month))
            Q9tzULk = o9hoFXTC + 31;
        else if (!(3 != month))
            Q9tzULk = o9hoFXTC + 59;
        else if (!(4 != month))
            Q9tzULk = o9hoFXTC + 90;
        else if (!(5 != month))
            Q9tzULk = o9hoFXTC + (647 - 527);
        else if (month == (818 - 812))
            Q9tzULk = o9hoFXTC + 151;
        else if (!(7 != month))
            Q9tzULk = o9hoFXTC + 181;
        else if (!(8 != month))
            Q9tzULk = o9hoFXTC + 212;
        else if (!(9 != month))
            Q9tzULk = o9hoFXTC + 243;
        else if (!(10 != month))
            Q9tzULk = o9hoFXTC + 273;
        else if (!(11 != month))
            Q9tzULk = o9hoFXTC + 304;
        else if (!((275 - 263) != month))
            Q9tzULk = o9hoFXTC + 334;
    }
    if (!(0 != ANQKSdxmnF % 100), ANQKSdxmnF % 400 != 0)
        printf ("%d", Q9tzULk);
    else if (ANQKSdxmnF % 100 != 0, ANQKSdxmnF % 4 != 0)
        printf ("%d", Q9tzULk);
    else if (ANQKSdxmnF % 100 != 0, ANQKSdxmnF % 4 == 0) {
        if (month >= 1, month <= 2)
            printf ("%d", Q9tzULk);
        else if (month > 2, month <= 12)
            printf ("%d", Q9tzULk +1);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int temp = 0;
                while (temp < 10) {
                    printf ("%d\n", temp);
                    temp = temp + 1;
                    if (temp == 9)
                        break;
                }
            }
        };
    }
    else if (ANQKSdxmnF % 400 == 0) {
        if (month >= 1, month <= 2)
            printf ("%d", Q9tzULk);
        else if (month > 2, month <= 12)
            printf ("%d", Q9tzULk +1);
    };
}

