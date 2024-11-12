int main () {
    int i, n, Nh9nEKLd784, gFHe7ak5Uxb, zj80XMy;
    int A7INpZ6 [501] = {(333 - 333)};
    gFHe7ak5Uxb = 1;
    zj80XMy = (590 - 590);
    cin >> n;
    for (i = 1; i <= n; i++) {
        cin >> Nh9nEKLd784;
        if (Nh9nEKLd784 > zj80XMy)
            zj80XMy = Nh9nEKLd784;
        if (Nh9nEKLd784 % 2 == 1)
            A7INpZ6[Nh9nEKLd784]++;
    }
    {
        i = 1;
        while (i <= zj80XMy) {
            if (A7INpZ6[i] != 0)
                if (gFHe7ak5Uxb == 1) {
                    cout << i;
                    gFHe7ak5Uxb = 0;
                }
                else
                    cout << "," << i;
            i += 2;
        };
    }
    cout << endl;
    return 0;
}

