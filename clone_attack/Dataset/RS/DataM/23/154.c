main () {
    int flag = 1;
    char c;
    char icCnZSwQjxP [100] [100];
    int VvF34aQ = (231 - 231), j = (659 - 659), count = 0;
    while ((c = getchar ()) != '\n') {
        if (c == ' ' && flag == 1) {
            count++;
            icCnZSwQjxP[VvF34aQ][j] = '\0';
            j = 0;
            flag = 0;
            VvF34aQ = VvF34aQ +1;
        }
        if (c != ' ' && c != '\n') {
            flag = 1;
            icCnZSwQjxP[VvF34aQ][j] = c;
            j++;
        };
    }
    {
        int t = count;
        while (t >= 0) {
            if (t > 0)
                printf ("%s ", icCnZSwQjxP[t]);
            else
                printf ("%s", icCnZSwQjxP);
            t--;
        };
    };
}

