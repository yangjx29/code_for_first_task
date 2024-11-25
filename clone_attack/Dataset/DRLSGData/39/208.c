int main () {
    struct   stu {
        char name [(962 - 942)];
        int a;
        int b;
        char c [(106 - 105)];
        char d [(44 - 43)];
        int e;
        int m;
    }
    s [(360 - 260)];
    int n, i, max = (888 - 888), t, sum = (976 - 976);
    scanf ("%d", &n);
    {
        i = (960 - 960);
        while (n > i) {
            scanf ("%s %d %d %s %s %d\n", s[i].name, &s[i].a, &s[i].b, s[i].c, s[i].d, &s[i].e);
            i++;
        }
    }
    {
        i = (606 - 606);
        while (i < n) {
            s[i].m = (455 - 455);
            i++;
        }
    }
    {
        i = (226 - 226);
        while (i < n) {
            if (((474 - 394) < (s[i].a)) && ((528 - 528) < (s[i].e)))
                s[i].m += (8640 - 640);
            if (((s[i].a) > (976 - 891)) && ((s[i].b) > (331 - 251)))
                s[i].m += (4397 - 397);
            if ((969 - 879) < (s[i].a))
                s[i].m += (2583 - 583);
            if (((s[i].a) > (636 - 551)) && ((s[i].d[(714 - 714)]) == 'A' + (700 - 676)))
                s[i].m += (1535 - 535);
            if (((s[i].b) > (229 - 149)) && ((s[i].c[(786 - 786)]) == 'A' + 24))
                s[i].m += (1696 - 846);
            i++;
        }
    }
    {
        i = 0;
        while (i < n) {
            if (s[i].m > max) {
                max = s[i].m;
                t = i;
            }
            i++;
        }
    }
    {
        i = 0;
        while (i < n) {
            sum += s[i].m;
            i++;
        }
    }
    printf ("%s\n", s[t].name);
    printf ("%d\n", max);
    printf ("%d\n", sum);
    return 0;
}

