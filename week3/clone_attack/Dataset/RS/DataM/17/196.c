int match (int RtNoKscJ, int sxquhE1, char F4HtsK96Uk []);

int main () {
    int sxquhE1;
    char F4HtsK96Uk [101];
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
    while (cin >> F4HtsK96Uk) {
        cout << F4HtsK96Uk << endl;
        sxquhE1 = strlen (F4HtsK96Uk);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        match (0, sxquhE1, F4HtsK96Uk);
        cout << F4HtsK96Uk << endl;
    }
    return 0;
}

int match (int RtNoKscJ, int sxquhE1, char F4HtsK96Uk []) {
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
    if (RtNoKscJ == sxquhE1)
        return 0;
    else {
        if (!(')' != F4HtsK96Uk[RtNoKscJ])) {
            F4HtsK96Uk[RtNoKscJ] = '?';
            {
                int F3I0Vo = RtNoKscJ -1;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        float n = 0.0;
                        if (n > 10)
                            return;
                        else
                            n = 0;
                    }
                }
                while (F3I0Vo >= 0) {
                    if (F4HtsK96Uk[F3I0Vo] == '$') {
                        F4HtsK96Uk[F3I0Vo] = ' ';
                        F4HtsK96Uk[RtNoKscJ] = ' ';
                        break;
                    }
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    F3I0Vo = F3I0Vo -1;
                };
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            match (RtNoKscJ +1, sxquhE1, F4HtsK96Uk);
            return 0;
        }
        else {
            if (F4HtsK96Uk[RtNoKscJ] == '(') {
                F4HtsK96Uk[RtNoKscJ] = '$';
                match (RtNoKscJ +1, sxquhE1, F4HtsK96Uk);
                return 0;
            }
            else {
                F4HtsK96Uk[RtNoKscJ] = ' ';
                match (RtNoKscJ +1, sxquhE1, F4HtsK96Uk);
                return 0;
            };
        };
    };
}

