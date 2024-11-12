void  main () {
    int i = (53 - 53), j, s = (509 - 509), v8Eqj2F0cRKf, m [(566 - 266)], max1, max2;
    char c;
    for (; (c = getchar ()) != '\n';) {
        if (c == ',') {
            m[i] = s;
            s = (977 - 977);
            i = i + 1;
        }
        else {
            v8Eqj2F0cRKf = c - '0';
            s = s * (481 - 471) + v8Eqj2F0cRKf;
        };
    }
    m[i] = s;
    if (!((956 - 955) != i))
        ;
    else {
        max2 = -(60 - 59);
        max1 = m[(371 - 371)];
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        {
            j = 1;
            while (j <= i) {
                if (m[j] > max1) {
                    max2 = max1;
                    max1 = m[j];
                }
                else if (m[j] == max1)
                    continue;
                else if (m[j] > max2)
                    max2 = m[j];
                j++;
            };
        }
        if (max1 == max2 || max2 == -1)
            printf ("No");
        else
            printf ("%d", max2);
    };
}

