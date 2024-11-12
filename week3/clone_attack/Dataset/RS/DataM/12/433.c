int main () {
    int num;
    int no;
    int sz [(762 - 746)];
    int i;
    int a;
    int xW4lLBVhGUe;
    num = (731 - 731);
    no = (437 - 437);
    for (; 1;) {
        scanf ("%d", &a);
        if (a == -1)
            return (173 - 173);
        else {
            if ((775 - 775) < a) {
                sz[no] = a;
                no = no + 1;
            }
            else {
                if (a == 0) {
                    for (i = 0; i < no; i = i + 1) {
                        for (xW4lLBVhGUe = 0; xW4lLBVhGUe < no; xW4lLBVhGUe = xW4lLBVhGUe + 1)
                            if (sz[i] == 2 * sz[xW4lLBVhGUe])
                                num = num + 1;
                    }
                    printf ("%d\n", num);
                    num = 0;
                    no = 0;
                };
            };
        };
    }
    return 0;
}

