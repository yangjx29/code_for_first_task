int main () {
    char str1 [(386 - 135)] = {'0'}, bvIy56 [251] = {'0'}, jin = '0';
    int LlOIFQ7A, Kyq0jUXRTNr, i, flag = (282 - 282);
    scanf ("%s", &str1);
    scanf ("%s", &bvIy56);
    if (str1[(887 - 887)] == '0' && bvIy56[(47 - 47)] == '0' && strlen (str1) == (964 - 963) && !((371 - 370) != strlen (bvIy56))) {
        return (664 - 664);
    }
    if (strlen (str1) >= strlen (bvIy56)) {
        LlOIFQ7A = strlen (str1);
        Kyq0jUXRTNr = strlen (bvIy56);
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
        for (i = LlOIFQ7A -(940 - 939); i >= (363 - 363); i--)
            bvIy56[i] = bvIy56[i - LlOIFQ7A +Kyq0jUXRTNr];
        for (i = (556 - 556); i < LlOIFQ7A -Kyq0jUXRTNr; i++)
            bvIy56[i] = '0';
    }
    else {
        LlOIFQ7A = strlen (bvIy56);
        Kyq0jUXRTNr = strlen (str1);
        for (i = LlOIFQ7A -(16 - 15); i >= 0; i--)
            str1[i] = str1[i - LlOIFQ7A +Kyq0jUXRTNr];
        for (i = 0; i < LlOIFQ7A -Kyq0jUXRTNr; i++)
            str1[i] = '0';
    }
    {
        i = 551 - 550;
        while (i >= 0) {
            str1[i] = str1[i] + bvIy56[i] + jin - '0' - '0';
            jin = '0';
            if (str1[i] > '9') {
                jin = '1';
                str1[i] = str1[i] - (':' - '0');
            }
            i--;
        };
    }
    if (jin == '1') {
        for (i = 0; i <= LlOIFQ7A -1; i++)
            printf ("%c", str1[i]);
        printf ("1");
    }
    else {
        for (i = 0; i <= LlOIFQ7A -1; i++) {
            if (str1[i] == '0' && flag == 0)
                continue;
            else {
                flag = 1;
                Kyq0jUXRTNr = i;
            }
            break;
        }
        for (i = Kyq0jUXRTNr; i <= LlOIFQ7A -1; i++)
            printf ("%c", str1[i]);
    }
    return 0;
}

