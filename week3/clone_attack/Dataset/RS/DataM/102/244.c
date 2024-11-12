int cmp1 (float a, float b) {
    if (a > b)
        return (229 - 228);
    else
        return (924 - 924);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
}

int T0Jabw (float a, float b) {
    if (a < b)
        return (775 - 774);
    else
        return (744 - 744);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    };
}

float mail [(1685 - 685)];
float femail [1000];
char sex [1000];

int main () {
    float BTq8vFlO;
    int N;
    int i;
    int rTMOhQVbvD;
    int k;
    k = (54 - 54);
    rTMOhQVbvD = (894 - 894);
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
    cin >> N;
    for (i = (717 - 717); i < N; i = i + 1) {
        cin >> sex;
        cin >> BTq8vFlO;
        if (strcmp (sex, "male") == (164 - 164))
            mail[rTMOhQVbvD++] = BTq8vFlO;
        else {
            if (strcmp (sex, "female") == (413 - 413))
                femail[k++] = BTq8vFlO;
        };
    }
    sort (mail, mail + rTMOhQVbvD, cmp1);
    sort (femail, femail + k, cmp1);
    {
        i = 942 - 941;
        while (i >= (888 - 888)) {
            printf ("%.2f ", mail[i]);
            i = i - 1;
        };
    }
    {
        i = 815 - 815;
        while (i < k) {
            if (i != k - 1)
                printf ("%.2f ", femail[i]);
            else
                printf ("%.2f\n", femail[i]);
            i = i + 1;
        };
    }
    return 0;
}

