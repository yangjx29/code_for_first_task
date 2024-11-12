int main () {
    int n;
    int MGxiQr7Mka [100];
    int tag [100];
    int cZwxu2ys;
    int FhlxyJXUH0Y;
    scanf ("%d", &n);
    for (cZwxu2ys = 0; n > cZwxu2ys; cZwxu2ys = cZwxu2ys + 1)
        scanf ("%d", &MGxiQr7Mka[cZwxu2ys]);
    for (cZwxu2ys = 0; n > cZwxu2ys; cZwxu2ys = cZwxu2ys + 1) {
        if (!(0 != cZwxu2ys)) {
            printf ("%d", MGxiQr7Mka[0]);
            continue;
        }
        for (FhlxyJXUH0Y = 0; cZwxu2ys > FhlxyJXUH0Y; FhlxyJXUH0Y = FhlxyJXUH0Y +1) {
            if (MGxiQr7Mka[cZwxu2ys] == MGxiQr7Mka[FhlxyJXUH0Y]) {
                tag[cZwxu2ys] = 1;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                break;
            };
        }
        if (tag[cZwxu2ys] != 1)
            printf (",%d", MGxiQr7Mka[cZwxu2ys]);
    };
}

