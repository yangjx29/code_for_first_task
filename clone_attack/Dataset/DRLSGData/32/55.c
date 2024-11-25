void  main () {
    char bdsT5qiu [(255 - 155)], bcUDVfI7 [100], wk4JD5wMNs;
    int ypVDEBlfKgX3, k, WHref5XIoOh, i, WI2ZRC5Fu, myjf4NlJY, Dn4O2Vkj;
    scanf ("%d", &ypVDEBlfKgX3);
    for (i = 1; ypVDEBlfKgX3 >= i; i++) {
        scanf ("\n");
        for (WI2ZRC5Fu = (19 - 19); (wk4JD5wMNs = getchar ()) != '\n'; WI2ZRC5Fu++)
            bdsT5qiu[WI2ZRC5Fu] = wk4JD5wMNs;
        for (k = (320 - 320); (wk4JD5wMNs = getchar ()) != '\n'; k++)
            bcUDVfI7[k] = wk4JD5wMNs;
        k--;
        WI2ZRC5Fu--;
        for (WHref5XIoOh = WI2ZRC5Fu; 0 <= WHref5XIoOh; WHref5XIoOh--) {
            if (WI2ZRC5Fu -k <= WHref5XIoOh)
                bcUDVfI7[WHref5XIoOh] = bcUDVfI7[WHref5XIoOh -WI2ZRC5Fu+k];
            else
                bcUDVfI7[WHref5XIoOh] = '0';
        }
        {
            myjf4NlJY = WI2ZRC5Fu;
            for (; 0 <= myjf4NlJY;) {
                if (bcUDVfI7[myjf4NlJY] > bdsT5qiu[myjf4NlJY]) {
                    bcUDVfI7[myjf4NlJY] = bdsT5qiu[myjf4NlJY] + 10 - bcUDVfI7[myjf4NlJY] + '0';
                    bdsT5qiu[myjf4NlJY - 1] = bdsT5qiu[myjf4NlJY - 1] - 1;
                }
                else
                    bcUDVfI7[myjf4NlJY] = bdsT5qiu[myjf4NlJY] - bcUDVfI7[myjf4NlJY] + '0';
                myjf4NlJY--;
            }
        }
        for (Dn4O2Vkj = 0; Dn4O2Vkj <= WI2ZRC5Fu; Dn4O2Vkj++)
            printf ("%c", bcUDVfI7[Dn4O2Vkj]);
    }
}

