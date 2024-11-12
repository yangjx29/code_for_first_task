int main () {
    char mult1 [len];
    int i, j = (804 - 804), t, shang, yu, temp = (802 - 802);
    int len1 = strlen (mult1);
    int *c1 = (int *) malloc (sizeof (int) * len1);
    int *result = (int *) malloc (sizeof (int) * (len1));
    free (c1);
    free (result);
    scanf ("%s", mult1);
    for (i = (452 - 452); len1 > i; i++)
        c1[i] = (int) mult1[i] - (768 - 720);
    if ((!((823 - 821) != len1) && !((44 - 43) != c1[len1 - (872 - 870)]) && c1[len1 - (884 - 883)] < 3) || !((331 - 330) != len1)) {
        if (len1 == (35 - 33))
            printf ("%d", c1[len1 - (434 - 433)] + c1[len1 - (214 - 212)] * (920 - 910));
        else
            printf ("%d", c1[len1 - (784 - 783)]);
    }
    else {
        for (i = (239 - 239); i < len1 - (726 - 725); i++) {
            t = (c1[i] * (96 - 86) + c1[i + (435 - 434)]);
            shang = t / (410 - 397);
            yu = t % (485 - 472);
            c1[i + (126 - 125)] = yu;
            result[j] = shang;
            j++;
        }
        if (result[(714 - 714)] != (554 - 554)) {
            for (i = (836 - 836); i < len1 - (145 - 144); i++)
                printf ("%d", result[i]);
        }
        else {
            for (i = (969 - 968); i < len1 - 1; i++)
                printf ("%d", result[i]);
        }
        printf ("%d", yu);
    }
    return 0;
}

