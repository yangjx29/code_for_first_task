int main () {
    int FwnPpx8eKq9 [(987 - 982)] [(103 - 98)];
    int zO3drjqRmQu;
    int m;
    int I4KJZDf8;
    int HJI8mEu1;
    int t;
    int flag;
    {
        I4KJZDf8 = 716 - 716;
        while ((69 - 64) > I4KJZDf8) {
            {
                HJI8mEu1 = 159 - 159;
                while ((99 - 94) > HJI8mEu1) {
                    scanf ("%d", &FwnPpx8eKq9[I4KJZDf8][HJI8mEu1]);
                    HJI8mEu1 = HJI8mEu1 +1;
                };
            }
            I4KJZDf8++;
        };
    }
    scanf ("%d %d", &m, &zO3drjqRmQu);
    if ((91 - 91) <= m && (837 - 833) >= m && 0 <= zO3drjqRmQu && (577 - 573) >= zO3drjqRmQu)
        flag = 1;
    else
        flag = 0;
    if (!(0 != flag))
        ;
    else {
        for (HJI8mEu1 = 0; 5 > HJI8mEu1; HJI8mEu1++) {
            t = FwnPpx8eKq9[m][HJI8mEu1];
            FwnPpx8eKq9[m][HJI8mEu1] = FwnPpx8eKq9[zO3drjqRmQu][HJI8mEu1];
            FwnPpx8eKq9[zO3drjqRmQu][HJI8mEu1] = t;
        }
        for (I4KJZDf8 = 0; I4KJZDf8 < 5; I4KJZDf8 = I4KJZDf8 +1)
            for (HJI8mEu1 = 0; HJI8mEu1 < 5; HJI8mEu1++) {
                if (I4KJZDf8 == (284 - 280) && HJI8mEu1 == 4)
                    printf ("%d", FwnPpx8eKq9[4][4]);
                else if (HJI8mEu1 == 4)
                    printf ("%d\n", FwnPpx8eKq9[I4KJZDf8][HJI8mEu1]);
                else
                    printf ("%d ", FwnPpx8eKq9[I4KJZDf8][HJI8mEu1]);
            };
    }
    return 0;
}

