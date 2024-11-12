int main (int Snxmg50, char *argv []) {
    int kegITruF6, WckGgPA, RlaWXbMjqJFc = 0;
    scanf ("%d", &kegITruF6);
    for (WckGgPA = 1; WckGgPA <= kegITruF6; WckGgPA++) {
        if (WckGgPA % 7 == 0) {
            RlaWXbMjqJFc = RlaWXbMjqJFc +0;
        }
        else if (WckGgPA / 10 == 7) {
            RlaWXbMjqJFc = RlaWXbMjqJFc +0;
        }
        else if (WckGgPA % 10 == 7) {
            RlaWXbMjqJFc = RlaWXbMjqJFc +0;
        }
        else {
            RlaWXbMjqJFc = RlaWXbMjqJFc +WckGgPA*WckGgPA;
        };
    }
    printf ("%d", RlaWXbMjqJFc);
    return 0;
}

