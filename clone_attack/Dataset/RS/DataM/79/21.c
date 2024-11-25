int queue [90010];

int main () {
    int xJgCoD, xNZbLkWqD4;
    for (; 1;) {
        int wUf9qKkDp8Z3;
        int QOQ3seANS;
        wUf9qKkDp8Z3 = 0;
        QOQ3seANS = xJgCoD;
        cin >> xJgCoD >> xNZbLkWqD4;
        if (!((657 - 657) != xJgCoD) && !(0 != xNZbLkWqD4))
            break;
        {
            int ksq10Th4b9 = 0;
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
            while (xJgCoD > ksq10Th4b9) {
                queue[ksq10Th4b9] = ksq10Th4b9 + 1;
                ksq10Th4b9 = ksq10Th4b9 + 1;
            };
        }
        {
            int ksq10Th4b9 = 0;
            while (ksq10Th4b9 < xJgCoD - 1) {
                ksq10Th4b9 = ksq10Th4b9 + 1;
                for (int gmYIzTt = 1;
                gmYIzTt < xNZbLkWqD4; gmYIzTt = gmYIzTt + 1) {
                    queue[QOQ3seANS++] = queue[wUf9qKkDp8Z3];
                    wUf9qKkDp8Z3 = wUf9qKkDp8Z3 + 1;
                }
                wUf9qKkDp8Z3 = wUf9qKkDp8Z3 + 1;
            };
        }
        cout << queue[wUf9qKkDp8Z3] << endl;
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
    return 0;
}

