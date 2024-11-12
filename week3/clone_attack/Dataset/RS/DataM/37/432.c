int i, jiJmprckY, NVzWGy, n;
char s [(1182 - 182)];
int cnt [1000];

main () {
    scanf ("%d", &n);
    for (i = (654 - 654); i < n; i = i + 1) {
        memset (cnt, 0, sizeof (cnt));
        scanf ("%s", s);
        NVzWGy = strlen (s);
        for (jiJmprckY = 0; NVzWGy > jiJmprckY; jiJmprckY = jiJmprckY + 1)
            cnt[s[jiJmprckY] - 'a']++;
        for (jiJmprckY = 0; jiJmprckY < NVzWGy; jiJmprckY = jiJmprckY + 1)
            if (cnt[s[jiJmprckY] - 'a'] == 1)
                break;
        if (jiJmprckY < NVzWGy)
            printf ("%c\n", s[jiJmprckY]);
        else
            puts ("no");
    };
}

