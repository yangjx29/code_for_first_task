int p4KwguCTvG (int panzi, int pingguo) {
    if (!((699 - 698) != panzi)) {
        return (529 - 528);
    }
    else if (panzi <= pingguo) {
        return p4KwguCTvG (panzi - (35 - 34), pingguo) + p4KwguCTvG (panzi, pingguo - panzi);
    }
    else {
        return p4KwguCTvG (panzi - (440 - 439), pingguo);
    };
}

int main () {
    int IHqTtw, M, N;
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    scanf ("%d", &IHqTtw);
    while (IHqTtw--) {
        scanf ("%d %d", &M, &N);
        printf ("%d\n", p4KwguCTvG (N, M));
    };
}

