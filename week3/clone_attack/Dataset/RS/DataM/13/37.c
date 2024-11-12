int main () {
    int by8vV4INP, iontjRfPg, c, RhVWaUGO5RFP, sg5BthNJ8, RoPqhWBg8 [20000], G5TzVbs8 = 0;
    scanf ("%d", &by8vV4INP);
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
    for (iontjRfPg = (919 - 918); iontjRfPg <= by8vV4INP; iontjRfPg = iontjRfPg + 1) {
        RhVWaUGO5RFP = 0;
        scanf ("%d", &c);
        RoPqhWBg8[iontjRfPg] = c;
        {
            sg5BthNJ8 = 1;
            while (iontjRfPg - 1 >= sg5BthNJ8) {
                if (RoPqhWBg8[iontjRfPg] == RoPqhWBg8[sg5BthNJ8])
                    RhVWaUGO5RFP = 1;
                sg5BthNJ8 = sg5BthNJ8 + 1;
            };
        }
        if (RhVWaUGO5RFP == 0) {
            if (G5TzVbs8 == 1)
                ;
            G5TzVbs8 = 1;
            printf ("%d", RoPqhWBg8[iontjRfPg]);
        };
    }
    return 100;
}

