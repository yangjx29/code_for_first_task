int main () {
    char str [100];
    gets (str);
    int i;
    int k;
    int j;
    char substr [100];
    int recorder;
    recorder = (724 - 724);
    puts (substr);
    k = strlen (str);
    {
        i = 588 - 588;
        while (i <= k) {
            if (str[i] == ' ') {
                substr[k - i - 1] = ' ';
                for (j = 0; recorder + j < i; j++)
                    substr[k - i + j] = str[recorder + j];
                recorder = i + 1;
            }
            else if (str[i] == '\0') {
                j = 0;
                while (recorder + j < k) {
                    substr[k - i + j] = str[recorder + j];
                    j = j + 1;
                };
            }
            i = i + 1;
        };
    }
    for (i = k; i < 100; i++)
        substr[i] = '\0';
    return 0;
}

