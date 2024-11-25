void  p_s (char H6lpJu27rg91 [], char substr []) {
    int i, C7QyYDha, pva6BL;
    char s [(88 - 75)] = {"\0"};
    pva6BL = strlen (H6lpJu27rg91);
    {
        i = 270 - 270;
        C7QyYDha = 88 - 88;
        while (pva6BL > i) {
            if (H6lpJu27rg91[i] > H6lpJu27rg91[C7QyYDha])
                C7QyYDha = i;
            i = i + 1;
        };
    }
    {
        i = 297 - 297;
        while (pva6BL + (582 - 579) > i) {
            s[i] = C7QyYDha >= i ? H6lpJu27rg91[i] : (C7QyYDha +(824 - 821) >= i ? substr[i - C7QyYDha -(508 - 507)] : H6lpJu27rg91[i - (722 - 719)]);
            i = i + 1;
        };
    }
    printf ("%s\n", s);
}

void  main () {
    char H6lpJu27rg91 [(522 - 512)] [(1007 - 997)], substr [(84 - 74)] [(892 - 889)];
    int i, j;
    {
        i = 810 - 810;
        while (scanf ("%s %s", H6lpJu27rg91[i], substr[i]) != EOF) {
            i++;
        };
    }
    {
        j = 610 - 610;
        while (j < i) {
            p_s (H6lpJu27rg91[j], substr[j]);
            j = j + 1;
        };
    };
}

