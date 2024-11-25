int main () {
    int fibonacci (int);
    int *ODrCUAs, x, bbay9hJ0756j, *ans;
    scanf ("%d", &x);
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
    ODrCUAs = (int *) calloc (x, sizeof (int));
    ans = (int *) calloc (x, sizeof (int));
    {
        bbay9hJ0756j = 0;
        while (bbay9hJ0756j < x) {
            scanf ("%d", &ODrCUAs[bbay9hJ0756j]);
            bbay9hJ0756j = bbay9hJ0756j + 1;
        };
    }
    {
        bbay9hJ0756j = 0;
        while (bbay9hJ0756j < x) {
            ans[bbay9hJ0756j] = fibonacci (ODrCUAs[bbay9hJ0756j]);
            printf ("%d\n", ans[bbay9hJ0756j]);
            bbay9hJ0756j++;
        };
    };
}

int fibonacci (int ODrCUAs) {
    if (!(1 != ODrCUAs) || ODrCUAs == 2)
        return 1;
    else
        return fibonacci (ODrCUAs -2) + fibonacci (ODrCUAs -1);
}

