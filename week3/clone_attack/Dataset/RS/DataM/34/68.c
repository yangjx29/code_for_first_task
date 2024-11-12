void  pIUhjWz (int u1HUij) {
    int NEXT;
    if (u1HUij == 1) {
        return;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    else if (u1HUij % 2 == 1) {
        pIUhjWz (NEXT);
        NEXT = 3 * u1HUij + 1;
        printf ("%d*3+1=%d\n", u1HUij, NEXT);
    }
    else {
        pIUhjWz (NEXT);
        NEXT = u1HUij / 2;
        printf ("%d/2=%d\n", u1HUij, NEXT);
    };
}

int main () {
    int u1HUij;
    pIUhjWz (u1HUij);
    cin >> u1HUij;
    return 0;
}

