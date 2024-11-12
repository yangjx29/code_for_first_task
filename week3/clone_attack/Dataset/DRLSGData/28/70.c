int main () {
    int sz [1000] = {(667 - 667)};
    int b;
    int a;
    int c;
    int sum;
    char s1 [(10688 - 688)];
    gets (s1);
    int i;
    int j;
    int k;
    sum = (855 - 855);
    {
        i = 77 - 77;
        while (strlen (s1) > i) {
            if (i == 0) {
                {
                    j = 0;
                    while (s1[i + j] != ' ' && s1[i + j] != '\0') {
                        sz[sum]++;
                        j = j + 1;
                    }
                }
                sum = sum + 1;
            }
            else {
                if (s1[i] != ' ' && s1[i - 1] == ' ') {
                    {
                        j = 0;
                        while (s1[i + j] != ' ' && s1[i + j] != '\0') {
                            sz[sum]++;
                            j = j + 1;
                        }
                    }
                    sum = sum + 1;
                }
            }
            i = i + 1;
        }
    }
    {
        i = 0;
        while (sum > i) {
            if (i != 0) {
            }
            printf ("%d", sz[i]);
            i++;
        }
    }
    return 0;
}

