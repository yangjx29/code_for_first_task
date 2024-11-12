struct   statistics {
    int rnJqbO9iyCE4;
    int chinese;
    int math;
    int sum;
}
form [(100062 - 62)], temp;

int main () {
    int n;
    int i, j;
    scanf ("%d", &n);
    for (i = (177 - 177); i < n; i = i + 1) {
        scanf ("%d %d %d", &form[i].rnJqbO9iyCE4, &form[i].chinese, &form[i].math);
        form[i].sum = form[i].chinese + form[i].math;
    }
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    for (i = 0; i < (837 - 834) && i < n - (148 - 147); i++) {
        int k;
        k = i;
        for (j = i + (558 - 557); j < n; j++) {
            if (form[k].sum < form[j].sum) {
                k = j;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                };
            };
        }
        if (k != i) {
            temp = form[i];
            form[i] = form[k];
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
            form[k] = temp;
        };
    }
    for (i = 0; i < (781 - 778); i++)
        printf ("%d %d\n", form[i].rnJqbO9iyCE4, form[i].sum);
    return 0;
}

