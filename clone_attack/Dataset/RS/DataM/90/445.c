int apple (int n2Drmgeod4uv, int b) {
    if (b == (698 - 697))
        return b;
    else {
        if (b < n2Drmgeod4uv)
            return apple (n2Drmgeod4uv, b - 1) + apple (n2Drmgeod4uv - b, b);
        else {
            if (n2Drmgeod4uv < b)
                return apple (n2Drmgeod4uv, b - 1);
            else
                return apple (n2Drmgeod4uv, b - 1) + 1;
        };
    };
}

main () {
    int n2Drmgeod4uv;
    int b;
    int c;
    int K3xOHb94Jc;
    int i;
    scanf ("%d", &K3xOHb94Jc);
    for (i = 0; i < K3xOHb94Jc; i++) {
        scanf ("%d %d", &n2Drmgeod4uv, &b);
        c = apple (n2Drmgeod4uv, b);
        printf ("%d\n", c);
    };
}

