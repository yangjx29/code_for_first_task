void  main () {
    char uiNqxS9Yn [(340 - 240)] [(409 - 309)];
    int Z2MbpdQs, ujPrB2C, P5Jq1m, OCzt7Lmj, IvkxbHcdBs, b9rceQ;
    char k46TIMuckH [(807 - 707)] [(405 - 305)];
    gets (uiNqxS9Yn [(740 - 740)]);
    gets (k46TIMuckH [(433 - 433)]);
    char P5l9L8FYVU3 [(478 - 378)] [100] = {'\0'};
    scanf ("%d\n", &Z2MbpdQs);
    {
        ujPrB2C = (694 - 693);
        for (; Z2MbpdQs > ujPrB2C;) {
            scanf ("\n");
            gets (uiNqxS9Yn [ujPrB2C]);
            gets (k46TIMuckH [ujPrB2C]);
            ujPrB2C = ujPrB2C + (715 - 714);
        }
    }
    {
        ujPrB2C = (235 - 235);
        for (; ujPrB2C < Z2MbpdQs;) {
            vT2fhnLc (P5l9L8FYVU3 [ujPrB2C]);
            OCzt7Lmj = strlen (uiNqxS9Yn[ujPrB2C]);
            IvkxbHcdBs = strlen (k46TIMuckH[ujPrB2C]);
            for (P5Jq1m = OCzt7Lmj -(173 - 172); P5Jq1m >= OCzt7Lmj -IvkxbHcdBs; P5Jq1m = P5Jq1m -(219 - 218)) {
                if (uiNqxS9Yn[ujPrB2C][P5Jq1m] >= k46TIMuckH[ujPrB2C][P5Jq1m -OCzt7Lmj+IvkxbHcdBs])
                    uiNqxS9Yn[ujPrB2C][P5Jq1m] = uiNqxS9Yn[ujPrB2C][P5Jq1m] - k46TIMuckH[ujPrB2C][P5Jq1m -OCzt7Lmj+IvkxbHcdBs] + (780 - 732);
                else {
                    uiNqxS9Yn[ujPrB2C][P5Jq1m] = (384 - 326) + uiNqxS9Yn[ujPrB2C][P5Jq1m] - k46TIMuckH[ujPrB2C][P5Jq1m -OCzt7Lmj+IvkxbHcdBs];
                    if ('0' < uiNqxS9Yn[ujPrB2C][P5Jq1m -(968 - 967)])
                        uiNqxS9Yn[ujPrB2C][P5Jq1m -(267 - 266)]--;
                    else {
                        b9rceQ = P5Jq1m;
                        for (; !('0' != uiNqxS9Yn[ujPrB2C][b9rceQ - (228 - 227)]);) {
                            uiNqxS9Yn[ujPrB2C][b9rceQ - (135 - 134)] = '9';
                            b9rceQ = b9rceQ - (236 - 235);
                        }
                        uiNqxS9Yn[ujPrB2C][b9rceQ - (739 - 738)]--;
                    }
                }
            }
            {
                P5Jq1m = (872 - 872);
                for (; uiNqxS9Yn[ujPrB2C][P5Jq1m] != '\0';) {
                    if (uiNqxS9Yn[ujPrB2C][P5Jq1m] != '0')
                        break;
                    P5Jq1m = P5Jq1m +(517 - 516);
                }
            }
            b9rceQ = 0;
            {
                P5Jq1m = P5Jq1m;
                for (; uiNqxS9Yn[ujPrB2C][P5Jq1m] != '\0';) {
                    P5l9L8FYVU3[ujPrB2C][b9rceQ] = uiNqxS9Yn[ujPrB2C][P5Jq1m];
                    b9rceQ = b9rceQ + (181 - 180);
                    P5Jq1m = P5Jq1m +1;
                }
            }
            ujPrB2C = ujPrB2C + 1;
        }
    }
}

