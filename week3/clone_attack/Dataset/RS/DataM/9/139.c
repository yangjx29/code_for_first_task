int main () {
    char e_id [(189 - 179)];
    char id [(183 - 83)] [(436 - 426)];
    int n;
    int i;
    int age [(1047 - 947)];
    int e;
    scanf ("%d", &n);
    for (i = (381 - 381); n > i; i++) {
        scanf ("%s%d", id[i], &(age[i]));
    }
    {
        int k = (882 - 881);
        while (k <= n) {
            {
                int m = 0;
                while (n - k > m) {
                    if ((age[m] >= (599 - 539) && (342 - 282) <= age[m + (647 - 646)] && age[m] < age[m + (528 - 527)]) || (age[m] < (774 - 714) && age[m + (173 - 172)] >= 60)) {
                        e = age[m + 1];
                        strcpy (e_id, id[m + 1]);
                        age[m + 1] = age[m];
                        strcpy (id[m + 1], id[m]);
                        age[m] = e;
                        strcpy (id[m], e_id);
                    }
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            float n = 0.0;
                            if (n > 10)
                                return;
                            else
                                n = 0;
                        }
                    }
                    m = m + 1;
                };
            }
            k = k + 1;
        };
    }
    {
        i = 0;
        while (i < n) {
            printf ("%s\n", id[i]);
            i++;
        };
    }
    return 0;
}

