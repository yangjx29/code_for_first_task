int main () {
    int n, i = 0, j = 0, flag = 0;
    int sve3TdGKZjV [300];
    scanf ("%d\n", &n);
    for (i = 0; n > i; i++) {
        scanf ("%d", &sve3TdGKZjV[i]);
    }
    i = 1;
    printf ("%d", sve3TdGKZjV[0]);
    {
        i = 1;
        while (i < n) {
            flag = 0;
            j = 0;
            for (j = 0; j < i; j++) {
                if (sve3TdGKZjV[i] == sve3TdGKZjV[j])
                    flag = 1;
            }
            if (flag == 0)
                printf (",%d", sve3TdGKZjV[i]);
            i++;
        };
    }
    return 0;
}

