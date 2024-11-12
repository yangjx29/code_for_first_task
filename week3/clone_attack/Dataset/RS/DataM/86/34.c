int main () {
    int n, iY2jJOp, c, lFJ6ZwTM0NWV, u [60], i;
    cin >> n;
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
    for (; 0 < n;) {
        u[0] = 0;
        c = 0;
        cin >> iY2jJOp;
        {
            i = 781 - 780;
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
            while (i <= iY2jJOp) {
                cin >> u[i];
                i++;
            };
        }
        lFJ6ZwTM0NWV = -(269 - 266);
        for (i = 1; i <= iY2jJOp; i++)
            if (u[i] - u[i - 1] + lFJ6ZwTM0NWV + 3 <= 60) {
                lFJ6ZwTM0NWV = u[i] - u[i - 1] + lFJ6ZwTM0NWV + 3;
                c = u[i];
            }
            else
                break;
        n--;
        lFJ6ZwTM0NWV = lFJ6ZwTM0NWV + 3;
        if (lFJ6ZwTM0NWV < 60)
            c = c + 60 - lFJ6ZwTM0NWV;
        cout << c << endl;
    }
    return 0;
}

