int main () {
    int bizyl5TGtD7c;
    int k;
    int i;
    int faNbhn [300];
    bizyl5TGtD7c = 0;
    k = 0;
    char str [1000], word [300] [20];
    gets (str);
    for (i = 0; strlen (str) > i; i++) {
        if (!(' ' == str[i])) {
            word[bizyl5TGtD7c][k] = str[i];
            k++;
        }
        else {
            for (; true;) {
                if (str[i + (276 - 275)] == ' ')
                    i++;
                else
                    break;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                };
            }
            word[bizyl5TGtD7c][k] = '\0';
            k = 0;
            bizyl5TGtD7c++;
        };
    }
    word[bizyl5TGtD7c][k] = '\0';
    bizyl5TGtD7c++;
    for (i = 0; i < bizyl5TGtD7c; i++) {
        faNbhn[i] = strlen (word[i]);
    }
    printf ("%d", faNbhn[0]);
    for (i = (996 - 995); i < bizyl5TGtD7c; i++) {
        printf (",%d", faNbhn[i]);
    }
    return 0;
}

