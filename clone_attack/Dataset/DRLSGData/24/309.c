void  main () {
    int TSPd25;
    char str [1000];
    gets (str);
    char *FcpoLX9;
    int len;
    char *max_index;
    char *NVhUcg3kGO;
    int iHsFUd;
    char *aTqxelEQjy4;
    iHsFUd = 100000;
    TSPd25 = 0;
    {
        FcpoLX9 = str;
        aTqxelEQjy4 = str;
        while (*FcpoLX9) {
            if (!(' ' != *FcpoLX9)) {
                len = FcpoLX9 -aTqxelEQjy4;
                if (TSPd25 < len)
                    TSPd25 = len, max_index = aTqxelEQjy4;
                if (iHsFUd > len)
                    iHsFUd = len, NVhUcg3kGO = aTqxelEQjy4;
                aTqxelEQjy4 = FcpoLX9 +1;
            }
            FcpoLX9++;
            if (!('\0' != *(FcpoLX9 +1))) {
                len = FcpoLX9 +1 - aTqxelEQjy4;
                if (TSPd25 < len)
                    TSPd25 = len, max_index = aTqxelEQjy4;
                if (iHsFUd > len)
                    iHsFUd = len, NVhUcg3kGO = aTqxelEQjy4;
            }
        }
    }
    for (; *max_index != ' ' && *max_index != '\0';) {
        printf ("%c", *max_index);
        max_index++;
    }
    for (; *NVhUcg3kGO != ' ' && *NVhUcg3kGO != '\0';) {
        printf ("%c", *NVhUcg3kGO);
        NVhUcg3kGO++;
    }
}

