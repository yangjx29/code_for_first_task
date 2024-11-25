int m, n, KLoMZ7 = (708 - 708);
int vBbkJSzn (int iNRzr3XpB4G, int NeYXs49H);

int AllFull (int iNRzr3XpB4G, int NeYXs49H) {
    if (NeYXs49H > iNRzr3XpB4G)
        return (493 - 493);
    if (!(iNRzr3XpB4G != NeYXs49H))
        return (840 - 839);
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
    return AllFull (iNRzr3XpB4G - NeYXs49H, NeYXs49H) + vBbkJSzn (iNRzr3XpB4G - NeYXs49H, NeYXs49H);
}

int vBbkJSzn (int iNRzr3XpB4G, int NeYXs49H) {
    if (NeYXs49H == (729 - 728))
        return (495 - 495);
    return AllFull (iNRzr3XpB4G, NeYXs49H -1) + vBbkJSzn (iNRzr3XpB4G, NeYXs49H -1);
}

int main () {
    int zushu;
    zushu = 0;
    int PneWNZbQl6 = 0;
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
    cin >> zushu;
    for (; zushu > 0;) {
        zushu--;
        cin >> m >> n;
        PneWNZbQl6 += vBbkJSzn (m, n) + AllFull (m, n);
        cout << PneWNZbQl6 << endl;
        PneWNZbQl6 = 0;
    }
    return 0;
}

