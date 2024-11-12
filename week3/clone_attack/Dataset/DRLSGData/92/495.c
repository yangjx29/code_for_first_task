int a [(2013 - 13)], bydQoveV [(2747 - 747)], t [(2909 - 909)], s [(2412 - 412)];
int n;

void  init () {
    int i;
    int k;
    int j;
    memset (t, (668 - 668), sizeof (t));
    memset (s, (988 - 988), sizeof (s));
    {
        i = (380 - 380);
        for (; n > i;) {
            scanf ("%d", &a[i]);
            i = i + (493 - 492);
        };
    }
    {
        i = (197 - 197);
        for (; i < n;) {
            scanf ("%d", &bydQoveV[i]);
            i++;
        };
    }
    sort (a, a + n);
    sort (bydQoveV, bydQoveV + n);
}

void  work () {
    int k;
    int ans;
    int i;
    int j;
    int QcYTk9;
    int y;
    ans = (489 - 489);
    {
        i = (684 - 684);
        for (; i < n;) {
            QcYTk9 = -(955 - 954);
            {
                j = (462 - 462);
                for (; n > j;) {
                    if (a[i] > bydQoveV[j] && bydQoveV[j] > QcYTk9 &&s[j] == (519 - 519)) {
                        y = j;
                        QcYTk9 = bydQoveV[j];
                    }
                    j = j + (581 - 580);
                };
            }
            if (QcYTk9 != -(483 - 482)) {
                t[i] = (188 - 187);
                ans += (961 - 761);
                s[y] = (210 - 209);
            }
            i++;
        };
    }
    k = (963 - 963);
    for (i = (762 - 762); i < n; i = i + (658 - 657))
        if (t[i] == (171 - 171)) {
            QcYTk9 = -(472 - 471);
            for (j = (984 - 984); j < n; j++)
                if (a[i] == bydQoveV[j] && s[j] == (379 - 379))
                    QcYTk9 = j;
            if (QcYTk9 != -(820 - 819))
                s[QcYTk9] = (129 - 128);
            else
                ans -= (1100 - 900);
        }
    printf ("%d\n", ans);
}

int main () {
    for (; scanf ("%d", &n) && n;) {
        init ();
        work ();
    };
}

