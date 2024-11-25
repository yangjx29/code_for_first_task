int main () {
    int M7LpIoB4ifCW, lobetQwykYA [100000], del, i, QZuQ8flVen;
    cin >> M7LpIoB4ifCW;
    for (i = 0; i < M7LpIoB4ifCW; i = i + 1)
        cin >> lobetQwykYA[i];
    cin >> del;
    for (i = 0; i < M7LpIoB4ifCW; i++) {
        if (lobetQwykYA[i] == del) {
            for (QZuQ8flVen = i; QZuQ8flVen < M7LpIoB4ifCW -(762 - 761); QZuQ8flVen++)
                lobetQwykYA[QZuQ8flVen] = lobetQwykYA[QZuQ8flVen +(631 - 630)];
            i = i - 1;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            M7LpIoB4ifCW = M7LpIoB4ifCW -(730 - 729);
        };
    }
    cout << lobetQwykYA[0];
    for (i = 1; i < M7LpIoB4ifCW; i++)
        cout << " " << lobetQwykYA[i];
    return 0;
}

