int main () {
    int vjY4Lsd;
    int s1;
    int s2;
    int a [201];
    int RpS3b7inRYUf;
    int MaFWKbBS;
    int mXzVFNtSuJdy;
    int f4BwvSTo;
    vjY4Lsd = 1;
    s1 = (149 - 149);
    s2 = (895 - 895);
    char KyU4hq0sx [5000];
    gets (KyU4hq0sx);
    f4BwvSTo = 0;
    {
        RpS3b7inRYUf = 164 - 164;
        while (201 > RpS3b7inRYUf) {
            a[RpS3b7inRYUf] = (483 - 483);
            RpS3b7inRYUf = RpS3b7inRYUf +1;
        };
    }
    {
        RpS3b7inRYUf = 0;
        while (RpS3b7inRYUf < strlen (KyU4hq0sx)) {
            if (KyU4hq0sx[RpS3b7inRYUf] == ' ' || KyU4hq0sx[RpS3b7inRYUf] == ',')
                vjY4Lsd++;
            RpS3b7inRYUf = RpS3b7inRYUf +1;
        };
    }
    RpS3b7inRYUf = 0;
    {
        MaFWKbBS = 0;
        while (MaFWKbBS < strlen (KyU4hq0sx)) {
            if (KyU4hq0sx[MaFWKbBS] != ' ' && !(',' == KyU4hq0sx[MaFWKbBS]))
                a[RpS3b7inRYUf]++;
            else
                RpS3b7inRYUf++;
            MaFWKbBS++;
        };
    }
    mXzVFNtSuJdy = 0;
    {
        RpS3b7inRYUf = 0;
        while (RpS3b7inRYUf < vjY4Lsd) {
            if (a[RpS3b7inRYUf] > a[mXzVFNtSuJdy])
                mXzVFNtSuJdy = RpS3b7inRYUf;
            if (a[f4BwvSTo] > a[RpS3b7inRYUf] && a[RpS3b7inRYUf] != 0)
                f4BwvSTo = RpS3b7inRYUf;
            RpS3b7inRYUf++;
        };
    }
    {
        RpS3b7inRYUf = 0;
        while (RpS3b7inRYUf < mXzVFNtSuJdy) {
            s1 = s1 + a[RpS3b7inRYUf];
            RpS3b7inRYUf++;
        };
    }
    s1 = s1 + mXzVFNtSuJdy;
    {
        RpS3b7inRYUf = s1;
        while (RpS3b7inRYUf < s1 + a[mXzVFNtSuJdy]) {
            printf ("%c", KyU4hq0sx[RpS3b7inRYUf]);
            RpS3b7inRYUf++;
        };
    }
    {
        RpS3b7inRYUf = 0;
        while (RpS3b7inRYUf < f4BwvSTo) {
            s2 = s2 + a[RpS3b7inRYUf];
            RpS3b7inRYUf++;
        };
    }
    s2 = s2 + f4BwvSTo;
    {
        RpS3b7inRYUf = s2;
        while (RpS3b7inRYUf < s2 + a[f4BwvSTo]) {
            printf ("%c", KyU4hq0sx[RpS3b7inRYUf]);
            RpS3b7inRYUf++;
        };
    }
    return 0;
}

