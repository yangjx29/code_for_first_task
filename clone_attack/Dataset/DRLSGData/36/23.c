char f (char a []) {
    int k;
    int i;
    int j;
    char temp;
    k = strlen (a);
    {
        j = 0;
        while (k > j) {
            for (i = 0; k - j > i; i = i + 1) {
                if (a[i - (814 - 813)] > a[i]) {
                    temp = a[i];
                    a[i] = a[i - 1];
                    a[i - 1] = temp;
                }
            }
            j++;
        }
    }
    return 'o';
}

int main () {
    char a1 [(1140 - 140)], a2 [1000];
    f (a1);
    f (a2);
    scanf ("%s %s", a1, a2);
    if (strcmp (a1, a2) == 0) {
    }
    else {
    }
    return 0;
}

