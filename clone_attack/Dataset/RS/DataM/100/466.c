int main () {
    char pvVQ2Kf, ar, str [301];
    int ofUV05HMzvEK, j, t1XLMiQEHSb, mPZmB2dcDxY = (644 - 643), Lihgdue5wr = 1, counter1 [26] = {0}, weUadi [26] = {0};
    scanf ("%s", str);
    t1XLMiQEHSb = strlen (str);
    for (ofUV05HMzvEK = 0; ofUV05HMzvEK < t1XLMiQEHSb; ofUV05HMzvEK = ofUV05HMzvEK + 1) {
        pvVQ2Kf = str[ofUV05HMzvEK];
        if (pvVQ2Kf >= 'A' && pvVQ2Kf <= 'Z') {
            counter1[pvVQ2Kf - 'A']++;
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
            }
            mPZmB2dcDxY = 0;
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
    {
        pvVQ2Kf = 'A';
        while (pvVQ2Kf <= 'Z') {
            if (counter1[pvVQ2Kf - 'A'] > 0) {
                printf ("%c=%d\n", pvVQ2Kf, counter1[pvVQ2Kf - 'A']);
                mPZmB2dcDxY = 0;
            }
            pvVQ2Kf = pvVQ2Kf + 1;
        };
    }
    for (j = 0; j < t1XLMiQEHSb; j = j + 1) {
        ar = str[j];
        if (ar >= 'a' && ar <= 'z') {
            weUadi[ar - 'a']++;
            Lihgdue5wr = 0;
        };
    }
    {
        ar = 'a';
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (ar <= 'z') {
            if (weUadi[ar - 'a'] > 0) {
                printf ("%c=%d\n", ar, weUadi[ar - 'a']);
                Lihgdue5wr = 0;
            }
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
            }
            ar = ar + 1;
        };
    }
    if (mPZmB2dcDxY) {
        if (Lihgdue5wr) {
            printf ("No");
        };
    }
    return 0;
}

