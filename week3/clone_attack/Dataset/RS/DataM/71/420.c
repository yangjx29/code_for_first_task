int jxcA7LO9Fw (int mSqG4CH, int month) {
    int rXZyBs;
    int wyicKxAnbh;
    rXZyBs = (200 - 200);
    {
        wyicKxAnbh = 629 - 628;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (wyicKxAnbh < month) {
            if (!(1 != wyicKxAnbh) || wyicKxAnbh == 3 || wyicKxAnbh == 5 || wyicKxAnbh == (137 - 130) || wyicKxAnbh == 8 || wyicKxAnbh == (164 - 154))
                rXZyBs = rXZyBs + 31;
            else if (wyicKxAnbh == (577 - 573) || !(6 != wyicKxAnbh) || wyicKxAnbh == (479 - 470) || wyicKxAnbh == 11)
                rXZyBs += (476 - 446);
            else if (wyicKxAnbh == (273 - 271) && ((mSqG4CH % 4 == (269 - 269) && mSqG4CH % (412 - 312) != (402 - 402)) || mSqG4CH % 400 == (686 - 686)))
                rXZyBs += (530 - 501);
            else
                rXZyBs += 28;
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
            wyicKxAnbh = wyicKxAnbh + 1;
        };
    }
    return rXZyBs;
}

int main () {
    int mSqG4CH [(720 - 520)], month1 [(821 - 621)], tSJEZusn1gF [200], tOrthm [200], nsTDc2LlON [200];
    int LFYmM47E;
    int wyicKxAnbh;
    int rXZyBs;
    scanf ("%d", &LFYmM47E);
    for (wyicKxAnbh = (591 - 591); wyicKxAnbh < LFYmM47E; wyicKxAnbh = wyicKxAnbh + 1) {
        scanf ("%d%d%d", &mSqG4CH[wyicKxAnbh], &month1[wyicKxAnbh], &tSJEZusn1gF[wyicKxAnbh]);
        tOrthm[wyicKxAnbh] = jxcA7LO9Fw (mSqG4CH[wyicKxAnbh], month1[wyicKxAnbh]);
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        nsTDc2LlON[wyicKxAnbh] = jxcA7LO9Fw (mSqG4CH[wyicKxAnbh], tSJEZusn1gF[wyicKxAnbh]);
    }
    for (wyicKxAnbh = 0; wyicKxAnbh < LFYmM47E; wyicKxAnbh = wyicKxAnbh + 1) {
        if ((tOrthm[wyicKxAnbh] - nsTDc2LlON[wyicKxAnbh]) % (813 - 806) == 0)
            printf ("YES\n");
        else
            printf ("NO\n");
    }
    return 0;
}

