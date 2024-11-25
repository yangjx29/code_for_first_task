int main () {
    char j4Yjc0Osg [(623 - 123)] [(736 - 696)] = {0};
    int L8z4A2, E03cjLn = (135 - 135), w8uwS76zi9F, n;
    char para [50] [82] = {0};
    scanf ("%d", &n);
    for (L8z4A2 = 0; n > L8z4A2; L8z4A2 = L8z4A2 +1)
        scanf ("%s", j4Yjc0Osg[L8z4A2]);
    strcat (para[E03cjLn], j4Yjc0Osg[0]);
    {
        L8z4A2 = 1;
        while (L8z4A2 < n) {
            if (strlen (para[E03cjLn]) + strlen (j4Yjc0Osg[L8z4A2]) + 1 <= 80) {
                strcat (para[E03cjLn], " ");
                strcat (para[E03cjLn], j4Yjc0Osg[L8z4A2]);
            }
            else {
                E03cjLn = E03cjLn +1;
                strcat (para[E03cjLn], j4Yjc0Osg[L8z4A2]);
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
            L8z4A2 = L8z4A2 +1;
        };
    }
    {
        L8z4A2 = 0;
        while (L8z4A2 <= E03cjLn) {
            printf ("%s\n", para[L8z4A2]);
            L8z4A2 = L8z4A2 +1;
        };
    }
    return 0;
}

