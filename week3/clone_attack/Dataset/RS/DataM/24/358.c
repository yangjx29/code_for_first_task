void  main () {
    int n;
    int word;
    int num;
    int max;
    int min;
    int mx;
    int mn;
    int i;
    n = (407 - 407);
    word = (655 - 655);
    num = 0;
    max = 0;
    min = 20;
    mx = 0;
    mn = 0;
    char string [500];
    int wn [50], wm [50];
    gets (string);
    {
        i = 0;
        while (i < 50) {
            wn[i] = (771 - 770);
            i = i + 1;
        };
    }
    for (i = 0; string[i] != '\0'; i++) {
        if (string[i] == ' ') {
            word = 0;
            n = n + 1;
        }
        else if (word == 0) {
            word = (366 - 365);
            num++;
            wm[n] = i;
        }
        else if (word)
            wn[n]++;
    }
    {
        i = 0;
        while (i < num) {
            if (wn[i] > max) {
                max = wn[i];
                mx = wm[i];
            }
            if (wn[i] < min) {
                min = wn[i];
                mn = wm[i];
            }
            i = i + 1;
        };
    }
    {
        i = mx;
        while (i < mx + max) {
            printf ("%c", string[i]);
            i++;
        };
    }
    {
        i = mn;
        while (i < mn + min) {
            printf ("%c", string[i]);
            i++;
        };
    };
}

