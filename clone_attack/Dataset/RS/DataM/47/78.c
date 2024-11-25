int main () {
    int n, t, kiZ8BdvV4DO;
    int dkhJLWXvpl [n];
    scanf ("%d\n", &n);
    {
        int H6NusVb4p = 1;
        while (n >= H6NusVb4p) {
            scanf ("%d", &(dkhJLWXvpl[H6NusVb4p]));
            H6NusVb4p = H6NusVb4p +1;
        };
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
    for (int H6NusVb4p = n;
    H6NusVb4p > 1; H6NusVb4p = H6NusVb4p -1) {
        printf ("%d ", dkhJLWXvpl[H6NusVb4p]);
    }
    printf ("%d", dkhJLWXvpl[1]);
    return 0;
}

