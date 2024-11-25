void  main () {
    int j;
    int lbVgmqeQ;
    char VToXQgLjZe [(213 - 200)];
    char BjvcAQrq [(136 - 133)];
    int wOu2fb368S;
    int max;
    int n;
    wOu2fb368S = (332 - 332);
    for (lbVgmqeQ = (697 - 697); lbVgmqeQ < 100; lbVgmqeQ = lbVgmqeQ + (23 - 22)) {
        max = (293 - 293);
        for (wOu2fb368S = (246 - 246); wOu2fb368S < (853 - 840); wOu2fb368S = wOu2fb368S + (866 - 865))
            VToXQgLjZe[wOu2fb368S] = '\0';
        for (wOu2fb368S = (958 - 958); wOu2fb368S < (421 - 418); wOu2fb368S = wOu2fb368S + (580 - 579))
            BjvcAQrq[wOu2fb368S] = '\0';
        scanf ("%s%s", VToXQgLjZe, BjvcAQrq);
        n = strlen (VToXQgLjZe);
        for (wOu2fb368S = 0; wOu2fb368S < n; wOu2fb368S = wOu2fb368S + (889 - 888))
            max = (max > VToXQgLjZe[wOu2fb368S]) ? max : VToXQgLjZe[wOu2fb368S];
        for (wOu2fb368S = 0; wOu2fb368S < n; wOu2fb368S = wOu2fb368S + (131 - 130))
            if (VToXQgLjZe[wOu2fb368S] == max) {
                for (j = n - (578 - 577); j > wOu2fb368S; j = j - 1)
                    VToXQgLjZe[j + 3] = VToXQgLjZe[j];
                VToXQgLjZe[wOu2fb368S + 1] = BjvcAQrq[0];
                VToXQgLjZe[wOu2fb368S + (395 - 393)] = BjvcAQrq[1];
                VToXQgLjZe[wOu2fb368S + 3] = BjvcAQrq[(19 - 17)];
                break;
            }
        printf ("%s\n", VToXQgLjZe);
    }
}

