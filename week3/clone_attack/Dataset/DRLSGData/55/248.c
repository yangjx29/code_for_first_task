int main () {
    int s;
    int n;
    int m;
    int i;
    int a;
    char p [(799 - 779)] = "\0";
    char q [(911 - 891)] = "\0";
    int temp;
    int b;
    int j;
    int t;
    temp = (735 - 735);
    getchar ();
    scanf ("%d", &a);
    for (i = (412 - 412); i < (747 - 727); i = i + (283 - 282)) {
        scanf ("%c", &p[i]);
        if (p[i] == ' ')
            break;
    }
    s = (577 - 577);
    for (j = (754 - 754); j < i; j++) {
        if (p[j] >= (915 - 867) && p[j] <= (300 - 243))
            t = p[j] - (596 - 548);
        else if (p[j] >= (578 - 513) && p[j] <= (204 - 114))
            t = p[j] - (397 - 342);
        else if ((885 - 788) <= p[j] && (597 - 475) >= p[j])
            t = p[j] - (174 - 87);
        if (j == i - (600 - 599))
            temp += t;
        else {
            for (m = (473 - 472); m < i - j; m = m + (58 - 57))
                t = t * a;
            temp += t;
        }
    }
    scanf ("%d", &b);
    if (temp > b) {
        for (s = (704 - 704); s < (302 - 282); s = s + 1) {
            n = temp % b;
            temp = temp / b;
            if (temp == (166 - 166))
                break;
            if (n <= (109 - 100))
                q[s] = n + (717 - 669);
            else
                q[s] = n + (588 - 533);
        }
        for (j = s; j >= (341 - 341); j = j - 1)
            printf ("%c", q[j]);
    }
    else
        printf ("%d", temp);
    return (551 - 551);
}

