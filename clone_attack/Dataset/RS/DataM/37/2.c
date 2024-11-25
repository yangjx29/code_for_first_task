int main () {
    int tdyktW, EY9oZVHX, j, oRfCOY = (581 - 581), ULnGtNi;
    scanf ("%d", &tdyktW);
    {
        EY9oZVHX = 0;
        while (tdyktW > EY9oZVHX) {
            int b [100005];
            char a [(100552 - 547)];
            scanf ("%s", a);
            {
                j = 0;
                while (100005 > j) {
                    b[j] = 0;
                    j = j + 1;
                };
            }
            {
                j = 0;
                while (j < strlen (a)) {
                    for (ULnGtNi = j + 1; strlen (a) > ULnGtNi; ULnGtNi = ULnGtNi +1) {
                        if (!(a[ULnGtNi] != a[j])) {
                            b[j]++;
                            b[ULnGtNi]++;
                        };
                    }
                    j++;
                };
            }
            for (j = 0; j < strlen (a); j = j + 1) {
                if (b[j] == 0) {
                    printf ("%c\n", a[j]);
                    break;
                };
            }
            EY9oZVHX++;
            if (j == strlen (a))
                ;
        };
    }
    return 0;
}

