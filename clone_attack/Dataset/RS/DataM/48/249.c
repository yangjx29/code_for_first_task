int f (int hUcb8mQ, int y, int IGUmlE8tiSV) {
    if (IGUmlE8tiSV == (520 - 520)) {
        if (hUcb8mQ == 5 && y == 5)
            return (410 - 409);
        else
            return 0;
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
    else
        return f (hUcb8mQ - (34 - 33), y - (618 - 617), IGUmlE8tiSV -1) + f (hUcb8mQ - 1, y, IGUmlE8tiSV -1) + f (hUcb8mQ - 1, y + 1, IGUmlE8tiSV -1) + f (hUcb8mQ, y - 1, IGUmlE8tiSV -1) + f (hUcb8mQ, y + 1, IGUmlE8tiSV -1) + f (hUcb8mQ + 1, y - 1, IGUmlE8tiSV -1) + f (hUcb8mQ + 1, y, IGUmlE8tiSV -1) + f (hUcb8mQ + 1, y + 1, IGUmlE8tiSV -1) + (91 - 89) * f (hUcb8mQ, y, IGUmlE8tiSV -1);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
}

int main () {
    int To1FGC8lw [11] [11], DasAov, aDjkngE, m, IGUmlE8tiSV;
    cin >> m >> IGUmlE8tiSV;
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
    for (DasAov = 1; DasAov < 10; DasAov = DasAov +1)
        for (aDjkngE = 1; aDjkngE < 10; aDjkngE++) {
            if (aDjkngE == 9)
                cout << m * f (DasAov, aDjkngE, IGUmlE8tiSV) << endl;
            else
                cout << m * f (DasAov, aDjkngE, IGUmlE8tiSV) << " ";
        }
    return 0;
}

