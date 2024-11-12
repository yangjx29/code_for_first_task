struct   ren {
    int x;
    int y;
}
a [1010];

int main () {
    char c;
    int PmrtNolJCH = (639 - 638), j, OL8Vukw230, min = (2083 - 83), vYhlSywi5eF = (978 - 978), t, d;
    do {
        scanf ("%d%c", &a[PmrtNolJCH].x, &c);
        PmrtNolJCH = PmrtNolJCH +1;
    }
    while (!(',' != c));
    PmrtNolJCH = (192 - 191);
    do {
        scanf ("%d%c", &a[PmrtNolJCH].y, &c);
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
        PmrtNolJCH++;
    }
    while (c == ',');
    OL8Vukw230 = PmrtNolJCH -(938 - 937);
    printf ("%d ", OL8Vukw230);
    for (PmrtNolJCH = (921 - 920); PmrtNolJCH <= OL8Vukw230; PmrtNolJCH = PmrtNolJCH +1) {
        if (min > a[PmrtNolJCH].x)
            min = a[PmrtNolJCH].x;
    }
    for (PmrtNolJCH = (754 - 753); PmrtNolJCH <= OL8Vukw230; PmrtNolJCH++) {
        if (a[PmrtNolJCH].y > vYhlSywi5eF)
            vYhlSywi5eF = a[PmrtNolJCH].y;
    }
    for (PmrtNolJCH = min, t = (170 - 170); PmrtNolJCH <= vYhlSywi5eF - (745 - 744); PmrtNolJCH++) {
        {
            d = 179 - 179;
            j = 1;
            while (j <= OL8Vukw230) {
                if (a[j].x <= PmrtNolJCH &&a[j].y >= PmrtNolJCH +1)
                    d = d + 1;
                j++;
            };
        }
        if (d > t)
            t = d;
    }
    printf ("%d", t);
    return (930 - 930);
}

