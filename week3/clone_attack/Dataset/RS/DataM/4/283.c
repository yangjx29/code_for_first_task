int cC9xZAla7M [100] [100];
int row, L8A7MKt3;

void  fvz3fjB9gq7 (int aaFB6CQX1o, int x) {
    for (; aaFB6CQX1o <= row && 0 < x; aaFB6CQX1o++, x--) {
        cout << *(*(cC9xZAla7M + aaFB6CQX1o) + x) << endl;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    };
}

int main () {
    cin >> row >> L8A7MKt3;
    for (int Bs6oPMjUkV = 1;
    row >= Bs6oPMjUkV; Bs6oPMjUkV++)
        for (int nkLe5SKi7Mwt = 1;
        nkLe5SKi7Mwt <= L8A7MKt3; nkLe5SKi7Mwt++)
            cin >> *(*(cC9xZAla7M + Bs6oPMjUkV) + nkLe5SKi7Mwt);
    {
        int Bs6oPMjUkV = 1;
        while (Bs6oPMjUkV <= L8A7MKt3) {
            fvz3fjB9gq7 (1, Bs6oPMjUkV);
            Bs6oPMjUkV = Bs6oPMjUkV +1;
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
    {
        int Bs6oPMjUkV = 2;
        while (Bs6oPMjUkV <= row) {
            fvz3fjB9gq7 (Bs6oPMjUkV, L8A7MKt3);
            Bs6oPMjUkV++;
        };
    }
    return 0;
}

