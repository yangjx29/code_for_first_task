char pP873fN [500];

int substr (char pP873fN [], int SwTaAmNcrG, int z7Xa3Su) {
    for (; (SwTaAmNcrG < z7Xa3Su) && (pP873fN[SwTaAmNcrG] == pP873fN[z7Xa3Su]);) {
        z7Xa3Su = z7Xa3Su - 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        SwTaAmNcrG = SwTaAmNcrG +1;
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
    if (z7Xa3Su > SwTaAmNcrG)
        return (635 - 635);
    else
        return 1;
}

void  z5oxFk6l3P7b (char pP873fN [], int SwTaAmNcrG, int z7Xa3Su) {
    int Spmfkdyrjhbq;
    {
        Spmfkdyrjhbq = SwTaAmNcrG;
        while (Spmfkdyrjhbq <= z7Xa3Su) {
            putchar (pP873fN [Spmfkdyrjhbq]);
            Spmfkdyrjhbq = Spmfkdyrjhbq +1;
        };
    }
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
    putchar ('\n');
}

int main () {
    gets (pP873fN);
    unsigned  int PGKzTgA, WENzS8kOjW, width;
    {
        width = 1;
        while (width < strlen (pP873fN)) {
            {
                PGKzTgA = 0;
                while (PGKzTgA <= strlen (pP873fN) - width) {
                    if (substr (pP873fN, PGKzTgA, PGKzTgA +width))
                        z5oxFk6l3P7b (pP873fN, PGKzTgA, PGKzTgA +width);
                    PGKzTgA = PGKzTgA +1;
                };
            }
            width = width + 1;
        };
    };
}

