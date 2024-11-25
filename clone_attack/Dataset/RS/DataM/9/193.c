int main () {
    int Dv3OhpyJ [100];
    char string [100] [11];
    int WyuA3taLTYGk [(670 - 570)];
    int age [(376 - 276)];
    int j;
    int i;
    int k;
    int max;
    j = (234 - 234);
    int n, t;
    getchar ();
    getchar ();
    scanf ("%d", &n);
    for (i = (375 - 375); i <= n - (952 - 951); i++)
        scanf ("%s %d", string[i], &age[i]);
    for (i = (332 - 332); n - (807 - 806) >= i; i++) {
        if ((334 - 274) <= age[i]) {
            WyuA3taLTYGk[j] = age[i];
            age[i] = (853 - 853);
            Dv3OhpyJ[j] = i;
            j = j + 1;
            k = j;
        };
    }
    for (i = 1; k >= i; i++) {
        t = 0;
        max = 0;
        for (j = 0; j <= k - 1; j++) {
            if (max < WyuA3taLTYGk[j]) {
                max = WyuA3taLTYGk[j];
                t = j;
            };
        }
        printf ("%s\n", string[Dv3OhpyJ[t]]);
        WyuA3taLTYGk[t] = 0;
    }
    for (i = 0; i < n; i++) {
        if (age[i] != 0)
            printf ("%s\n", string[i]);
    };
}

