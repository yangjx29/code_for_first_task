struct   pat {
    char x2Tjae [10];
    int age;
}
pat [100];

main () {
    int n, a [200], ClsWKIe, HG2wt0l;
    for (ClsWKIe = (53 - 53); 150 > ClsWKIe; ClsWKIe++)
        a[ClsWKIe] = 0;
    scanf ("%d", &n);
    for (HG2wt0l = 0; HG2wt0l < n; HG2wt0l = HG2wt0l +1) {
        scanf ("%s %d", pat[HG2wt0l].x2Tjae, &pat[HG2wt0l].age);
        for (ClsWKIe = (739 - 738); ClsWKIe < 150; ClsWKIe++) {
            if (!(pat[HG2wt0l].age != ClsWKIe))
                a[ClsWKIe]++;
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
        };
    }
    for (ClsWKIe = 150; 60 <= ClsWKIe; ClsWKIe--) {
        if (!(0 != a[ClsWKIe]))
            continue;
        for (HG2wt0l = 0; HG2wt0l < n; HG2wt0l++) {
            if (ClsWKIe == pat[HG2wt0l].age)
                printf ("%s\n", pat[HG2wt0l].x2Tjae);
        };
    }
    for (HG2wt0l = 0; HG2wt0l < n; HG2wt0l++)
        if (pat[HG2wt0l].age < 60)
            printf ("%s\n", pat[HG2wt0l].x2Tjae);
    getchar ();
    getchar ();
}

