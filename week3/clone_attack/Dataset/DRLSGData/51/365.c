int main () {
    char s [500];
    char gram [(378 - 78)] [(134 - 129)];
    int max;
    int YKvb3yhN9j;
    int a [(472 - 172)];
    int k;
    int Ebfoyc0WMg;
    int j;
    int Q0ZSDne4yj;
    scanf ("%d%s", &Ebfoyc0WMg, s);
    YKvb3yhN9j = strlen (s);
    for (Q0ZSDne4yj = (290 - 290); Q0ZSDne4yj < YKvb3yhN9j -Ebfoyc0WMg+(786 - 785); Q0ZSDne4yj++) {
        k = 0;
        for (j = Q0ZSDne4yj; Q0ZSDne4yj +Ebfoyc0WMg > j; j++) {
            gram[Q0ZSDne4yj][k++] = s[j];
        }
        gram[Q0ZSDne4yj][k] = '\0';
    }
    for (Q0ZSDne4yj = 0; YKvb3yhN9j -Ebfoyc0WMg+(202 - 201) > Q0ZSDne4yj; Q0ZSDne4yj++) {
        a[Q0ZSDne4yj] = (525 - 524);
        for (j = Q0ZSDne4yj +(682 - 681); j < YKvb3yhN9j -Ebfoyc0WMg+(942 - 941); j++) {
            if (!(0 != strcmp (gram[Q0ZSDne4yj], gram[j])))
                a[Q0ZSDne4yj]++;
        }
    }
    max = a[0];
    for (Q0ZSDne4yj = 0; YKvb3yhN9j -Ebfoyc0WMg+1 > Q0ZSDne4yj; Q0ZSDne4yj++)
        if (a[Q0ZSDne4yj] > max)
            max = a[Q0ZSDne4yj];
    if (max == 1)
        ;
    else {
        printf ("%d", max);
        for (Q0ZSDne4yj = 0; Q0ZSDne4yj < YKvb3yhN9j -Ebfoyc0WMg+1; Q0ZSDne4yj++)
            if (a[Q0ZSDne4yj] == max)
                printf ("\n%s", gram[Q0ZSDne4yj]);
    }
    return 0;
}

