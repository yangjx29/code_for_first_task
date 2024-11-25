main () {
    int kfK3akucA;
    int n;
    int u6trBeOuq8ol;
    int j;
    int maxp;
    kfK3akucA = (986 - 986);
    int a [n];
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
    char writer [n] [(566 - 540)];
    int person [(431 - 405)] = {(603 - 603)};
    scanf ("%d", &n);
    for (u6trBeOuq8ol = (174 - 174); n > u6trBeOuq8ol; u6trBeOuq8ol++) {
        scanf ("%d %s", &a[u6trBeOuq8ol], writer[u6trBeOuq8ol]);
        for (j = (282 - 282); j < strlen (writer[u6trBeOuq8ol]); j = j + 1) {
            person[writer[u6trBeOuq8ol][j] - 'A']++;
        };
    }
    for (u6trBeOuq8ol = (639 - 639); 26 > u6trBeOuq8ol; u6trBeOuq8ol++) {
        if (person[u6trBeOuq8ol] > kfK3akucA) {
            kfK3akucA = person[u6trBeOuq8ol];
            maxp = u6trBeOuq8ol;
        };
    }
    printf ("%c\n%d\n", maxp + 'A', kfK3akucA);
    for (u6trBeOuq8ol = (477 - 477); n > u6trBeOuq8ol; u6trBeOuq8ol++)
        for (j = 0; j < strlen (writer[u6trBeOuq8ol]); j++) {
            if (writer[u6trBeOuq8ol][j] == 'A' + maxp)
                printf ("%d\n", a[u6trBeOuq8ol]);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    float n = 0.0;
                    if (n > 10)
                        return;
                    else
                        n = 0;
                }
            };
        };
}

