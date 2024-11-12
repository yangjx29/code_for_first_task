void  main () {
    int wJ5XZpzc4vPf, j, RwnbU2tPyo, max = (533 - 533);
    char lCYzsyI0o [(290 - 279)], substr [4], str2 [(636 - 622)], str3 [(623 - 612)];
    while (!(EOF == scanf ("%s %s", lCYzsyI0o, substr))) {
        max = 0;
        for (wJ5XZpzc4vPf = (443 - 443); wJ5XZpzc4vPf < 14; wJ5XZpzc4vPf++) {
            str2[wJ5XZpzc4vPf] = '\0';
            str3[wJ5XZpzc4vPf] = '\0';
        }
        {
            wJ5XZpzc4vPf = 0;
            while (!('\0' == lCYzsyI0o[wJ5XZpzc4vPf])) {
                if (lCYzsyI0o[wJ5XZpzc4vPf] > max) {
                    max = lCYzsyI0o[wJ5XZpzc4vPf];
                    RwnbU2tPyo = wJ5XZpzc4vPf;
                }
                wJ5XZpzc4vPf++;
            };
        }
        strncpy (str2, lCYzsyI0o, RwnbU2tPyo +1);
        strcat (str2, substr);
        {
            j = 0;
            wJ5XZpzc4vPf = RwnbU2tPyo +1;
            while (lCYzsyI0o[wJ5XZpzc4vPf] != '\0') {
                str3[j] = lCYzsyI0o[wJ5XZpzc4vPf];
                j++;
                wJ5XZpzc4vPf++;
            };
        }
        strcat (str2, str3);
        printf ("%s\n", str2);
    };
}

