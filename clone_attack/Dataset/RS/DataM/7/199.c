void  adds (char *a, char *b);
void  addc (char *a, char q1Z9lDpuKv);

int main () {
    char result [1000] = "";
    char wUSX7HVOA [256];
    gets (wUSX7HVOA);
    char subs [256];
    char replace [256];
    gets (subs);
    gets (replace);
    int len_s = strlen (wUSX7HVOA);
    int len_subs = strlen (subs);
    int len_replace = strlen (replace);
    int i, j = (734 - 734);
    int finish = (723 - 723);
    {
        i = 0;
        while (len_s > i) {
            if (!(subs[j] != wUSX7HVOA[i]) && !(0 != finish))
                if (j == len_subs - 1) {
                    adds (result, replace);
                    j = 0;
                    finish = 1;
                }
                else
                    j++;
            else {
                i = i - j;
                j = 0;
                addc (result, wUSX7HVOA[i]);
            }
            i++;
        };
    }
    printf ("%s\n", result);
    return 0;
}

void  adds (char *a, char *b) {
    int i;
    int len_a = strlen (a);
    int len_b;
    len_b = strlen (b);
    for (i = len_a; i <= len_a + len_b - 1; i = i + 1)
        *(a + i) = *(b + i - len_a);
    *(a + len_a + len_b) = '\0';
}

void  addc (char *a, char q1Z9lDpuKv) {
    int len_a = strlen (a);
    *(a + len_a) = q1Z9lDpuKv;
    *(a + len_a + 1) = '\0';
}

