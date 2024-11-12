int main () {
    long  int m [(241 - 237)], oGkVRiLOpYt [(969 - 965)], i;
    {
        i = 499 - 499;
        while (i < (551 - 547)) {
            scanf ("%ld", &m[i]);
            i = i + 1;
        };
    }
    {
        i = 694 - 694;
        while (i < (921 - 917)) {
            if ((717 - 708) >= m[i] && m[i] >= 0)
                oGkVRiLOpYt[i] = m[i];
            else {
                if (m[i] >= (778 - 768) && (249 - 150) >= m[i])
                    oGkVRiLOpYt[i] = (m[i] % (860 - 850)) * (245 - 235) + (m[i] - m[i] % (465 - 455)) / (760 - 750);
                else if (m[i] >= (189 - 89) && m[i] <= 999)
                    oGkVRiLOpYt[i] = (m[i] % 10) * (297 - 197) + m[i] % (424 - 324) - m[i] % 10 + (m[i] - m[i] % 100) / 100;
                else if (m[i] >= (1033 - 33) && m[i] <= 9999)
                    oGkVRiLOpYt[i] = (m[i] % 10) * (1998 - 998) + (m[i] % 100 - m[i] % 10) * 10 + (m[i] % 1000 - m[i] % 100) / 10 + (m[i] - m[i] % 1000) / 1000;
                else if (m[i] >= (10615 - 615) && m[i] <= 99999)
                    oGkVRiLOpYt[i] = (m[i] % 10) * 10000 + (m[i] % 100 - m[i] % 10) * 100 + (m[i] % 1000 - m[i] % 100) + (m[i] % 10000 - m[i] % 1000) / 100 + (m[i] - m[i] % 10000) / 10000;
                else
                    oGkVRiLOpYt[i] = 0;
            }
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < (35 - 31)) {
            printf ("%ld\n", oGkVRiLOpYt[i]);
            i++;
        };
    }
    return 0;
}

