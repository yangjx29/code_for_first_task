void  main () {
    char zs6Ahi1Y3j2 [100] = {'\0'}, S1O5sB2 [100] = {'\0'}, adVvC7j [100] = {'\0'}, gLJBqjnNY [100] = {'\0'};
    gets (zs6Ahi1Y3j2);
    int DWijyoFH, I1zod9TEucOW, wYw8SpB3aEh, gXlNMVv0j, Zvrgd7, CA59BG, Q7hb2tujaIN;
    gets (S1O5sB2);
    gets (adVvC7j);
    puts (gLJBqjnNY);
    Zvrgd7 = strlen (S1O5sB2);
    CA59BG = strlen (adVvC7j);
    for (DWijyoFH = 0, I1zod9TEucOW = 0; !('\0' == *(zs6Ahi1Y3j2 + I1zod9TEucOW));) {
        if ((*(zs6Ahi1Y3j2 + I1zod9TEucOW) == *S1O5sB2) && ((1 <= I1zod9TEucOW &&*(zs6Ahi1Y3j2 + I1zod9TEucOW -1) == ' ' && (!(' ' != *(zs6Ahi1Y3j2 + I1zod9TEucOW +Zvrgd7)) || !('\0' != *(zs6Ahi1Y3j2 + I1zod9TEucOW +Zvrgd7)))) || (I1zod9TEucOW == 0 && (*(zs6Ahi1Y3j2 + I1zod9TEucOW +Zvrgd7) == ' ' || *(zs6Ahi1Y3j2 + I1zod9TEucOW +Zvrgd7) == '\0')))) {
            for (wYw8SpB3aEh = 0; wYw8SpB3aEh < Zvrgd7; wYw8SpB3aEh = wYw8SpB3aEh + 1)
                if (*(zs6Ahi1Y3j2 + Q7hb2tujaIN +wYw8SpB3aEh) != *(S1O5sB2 +wYw8SpB3aEh))
                    break;
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
            Q7hb2tujaIN = I1zod9TEucOW;
            if (wYw8SpB3aEh == Zvrgd7) {
                for (gXlNMVv0j = 0; gXlNMVv0j < CA59BG; gXlNMVv0j = gXlNMVv0j + 1) {
                    I1zod9TEucOW = I1zod9TEucOW +1;
                    *(gLJBqjnNY + DWijyoFH) = *(adVvC7j + gXlNMVv0j);
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    DWijyoFH = DWijyoFH +1;
                }
                I1zod9TEucOW = I1zod9TEucOW +Zvrgd7-CA59BG;
                continue;
            };
        }
        *(gLJBqjnNY + DWijyoFH) = *(zs6Ahi1Y3j2 + I1zod9TEucOW);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        I1zod9TEucOW = I1zod9TEucOW +1;
        DWijyoFH = DWijyoFH +1;
    };
}

