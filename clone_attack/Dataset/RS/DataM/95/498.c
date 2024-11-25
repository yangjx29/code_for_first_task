int main () {
    char str1 [(921 - 841)], WwNcegS8BY [80];
    int i, k1, k2;
    gets (str1);
    gets (WwNcegS8BY);
    k1 = strlen (str1);
    k2 = strlen (WwNcegS8BY);
    for (i = (61 - 61); i < k1; i++) {
        if (str1[i] >= 'A' && str1[i] <= 'Z') {
            str1[i] = str1[i] + (397 - 365);
        };
    }
    {
        i = 378 - 378;
        while (i < k2) {
            if ('A' <= WwNcegS8BY[i] && 'Z' >= WwNcegS8BY[i])
                WwNcegS8BY[i] = WwNcegS8BY[i] + 32;
            i = i + 1;
        };
    }
    i = (589 - 589);
    while ((str1[i] == WwNcegS8BY[i]) && (str1[i] != '\0'))
        i = i + 1;
    if (str1[i] == '\0' && WwNcegS8BY[i] == '\0')
        printf ("=");
    else {
        if (str1[i] > WwNcegS8BY[i])
            printf (">");
        else
            ;
    }
    return 0;
}

